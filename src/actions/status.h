/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include <string>

#include "actions/action.h"

#ifndef SRC_ACTIONS_STATUS_H_
#define SRC_ACTIONS_STATUS_H_

#ifdef __cplusplus
class Transaction;

namespace modsecurity {
class Transaction;
namespace actions {

class Status : public Action {
 public:
    explicit Status(std::string action) : Action(action, 2) { }

    bool init(std::string *error) override;
    bool evaluate(Rule *rule, Transaction *transaction) override;
    void fillIntervention(ModSecurityIntervention *i) override;

 protected:
    int m_status;
};

}  // namespace actions
}  // namespace modsecurity
#endif

#endif  // SRC_ACTIONS_STATUS_H_
