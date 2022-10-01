// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLAUNCHCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEAPPLAUNCHCONFIGURATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "deleteapplaunchconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class DeleteAppLaunchConfigurationRequest;

class DeleteAppLaunchConfigurationRequestPrivate : public SmsRequestPrivate {

public:
    DeleteAppLaunchConfigurationRequestPrivate(const SmsRequest::Action action,
                                   DeleteAppLaunchConfigurationRequest * const q);
    DeleteAppLaunchConfigurationRequestPrivate(const DeleteAppLaunchConfigurationRequestPrivate &other,
                                   DeleteAppLaunchConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppLaunchConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
