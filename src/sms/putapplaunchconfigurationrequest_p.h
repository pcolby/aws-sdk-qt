// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPLAUNCHCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTAPPLAUNCHCONFIGURATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "putapplaunchconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class PutAppLaunchConfigurationRequest;

class PutAppLaunchConfigurationRequestPrivate : public SmsRequestPrivate {

public:
    PutAppLaunchConfigurationRequestPrivate(const SmsRequest::Action action,
                                   PutAppLaunchConfigurationRequest * const q);
    PutAppLaunchConfigurationRequestPrivate(const PutAppLaunchConfigurationRequestPrivate &other,
                                   PutAppLaunchConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAppLaunchConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
