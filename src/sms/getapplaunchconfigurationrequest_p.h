// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLAUNCHCONFIGURATIONREQUEST_P_H
#define QTAWS_GETAPPLAUNCHCONFIGURATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "getapplaunchconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class GetAppLaunchConfigurationRequest;

class GetAppLaunchConfigurationRequestPrivate : public SmsRequestPrivate {

public:
    GetAppLaunchConfigurationRequestPrivate(const SmsRequest::Action action,
                                   GetAppLaunchConfigurationRequest * const q);
    GetAppLaunchConfigurationRequestPrivate(const GetAppLaunchConfigurationRequestPrivate &other,
                                   GetAppLaunchConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppLaunchConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
