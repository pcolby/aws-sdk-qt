// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPVALIDATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTAPPVALIDATIONCONFIGURATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "putappvalidationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class PutAppValidationConfigurationRequest;

class PutAppValidationConfigurationRequestPrivate : public SmsRequestPrivate {

public:
    PutAppValidationConfigurationRequestPrivate(const SmsRequest::Action action,
                                   PutAppValidationConfigurationRequest * const q);
    PutAppValidationConfigurationRequestPrivate(const PutAppValidationConfigurationRequestPrivate &other,
                                   PutAppValidationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAppValidationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
