// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSCONTROLRULEREQUEST_P_H
#define QTAWS_DELETEACCESSCONTROLRULEREQUEST_P_H

#include "workmailrequest_p.h"
#include "deleteaccesscontrolrulerequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteAccessControlRuleRequest;

class DeleteAccessControlRuleRequestPrivate : public WorkMailRequestPrivate {

public:
    DeleteAccessControlRuleRequestPrivate(const WorkMailRequest::Action action,
                                   DeleteAccessControlRuleRequest * const q);
    DeleteAccessControlRuleRequestPrivate(const DeleteAccessControlRuleRequestPrivate &other,
                                   DeleteAccessControlRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessControlRuleRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
