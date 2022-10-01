// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMOBILEDEVICEACCESSRULEREQUEST_P_H
#define QTAWS_CREATEMOBILEDEVICEACCESSRULEREQUEST_P_H

#include "workmailrequest_p.h"
#include "createmobiledeviceaccessrulerequest.h"

namespace QtAws {
namespace WorkMail {

class CreateMobileDeviceAccessRuleRequest;

class CreateMobileDeviceAccessRuleRequestPrivate : public WorkMailRequestPrivate {

public:
    CreateMobileDeviceAccessRuleRequestPrivate(const WorkMailRequest::Action action,
                                   CreateMobileDeviceAccessRuleRequest * const q);
    CreateMobileDeviceAccessRuleRequestPrivate(const CreateMobileDeviceAccessRuleRequestPrivate &other,
                                   CreateMobileDeviceAccessRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMobileDeviceAccessRuleRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
