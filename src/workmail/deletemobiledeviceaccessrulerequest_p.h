// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOBILEDEVICEACCESSRULEREQUEST_P_H
#define QTAWS_DELETEMOBILEDEVICEACCESSRULEREQUEST_P_H

#include "workmailrequest_p.h"
#include "deletemobiledeviceaccessrulerequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteMobileDeviceAccessRuleRequest;

class DeleteMobileDeviceAccessRuleRequestPrivate : public WorkMailRequestPrivate {

public:
    DeleteMobileDeviceAccessRuleRequestPrivate(const WorkMailRequest::Action action,
                                   DeleteMobileDeviceAccessRuleRequest * const q);
    DeleteMobileDeviceAccessRuleRequestPrivate(const DeleteMobileDeviceAccessRuleRequestPrivate &other,
                                   DeleteMobileDeviceAccessRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMobileDeviceAccessRuleRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
