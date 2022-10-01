// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSCONTROLRULEREQUEST_P_H
#define QTAWS_PUTACCESSCONTROLRULEREQUEST_P_H

#include "workmailrequest_p.h"
#include "putaccesscontrolrulerequest.h"

namespace QtAws {
namespace WorkMail {

class PutAccessControlRuleRequest;

class PutAccessControlRuleRequestPrivate : public WorkMailRequestPrivate {

public:
    PutAccessControlRuleRequestPrivate(const WorkMailRequest::Action action,
                                   PutAccessControlRuleRequest * const q);
    PutAccessControlRuleRequestPrivate(const PutAccessControlRuleRequestPrivate &other,
                                   PutAccessControlRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccessControlRuleRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
