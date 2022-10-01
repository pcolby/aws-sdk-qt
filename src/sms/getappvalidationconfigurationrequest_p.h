// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPVALIDATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETAPPVALIDATIONCONFIGURATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "getappvalidationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class GetAppValidationConfigurationRequest;

class GetAppValidationConfigurationRequestPrivate : public SmsRequestPrivate {

public:
    GetAppValidationConfigurationRequestPrivate(const SmsRequest::Action action,
                                   GetAppValidationConfigurationRequest * const q);
    GetAppValidationConfigurationRequestPrivate(const GetAppValidationConfigurationRequestPrivate &other,
                                   GetAppValidationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppValidationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
