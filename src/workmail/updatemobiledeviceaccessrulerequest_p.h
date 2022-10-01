// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMOBILEDEVICEACCESSRULEREQUEST_P_H
#define QTAWS_UPDATEMOBILEDEVICEACCESSRULEREQUEST_P_H

#include "workmailrequest_p.h"
#include "updatemobiledeviceaccessrulerequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateMobileDeviceAccessRuleRequest;

class UpdateMobileDeviceAccessRuleRequestPrivate : public WorkMailRequestPrivate {

public:
    UpdateMobileDeviceAccessRuleRequestPrivate(const WorkMailRequest::Action action,
                                   UpdateMobileDeviceAccessRuleRequest * const q);
    UpdateMobileDeviceAccessRuleRequestPrivate(const UpdateMobileDeviceAccessRuleRequestPrivate &other,
                                   UpdateMobileDeviceAccessRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMobileDeviceAccessRuleRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
