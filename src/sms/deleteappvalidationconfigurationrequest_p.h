// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPVALIDATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEAPPVALIDATIONCONFIGURATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "deleteappvalidationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class DeleteAppValidationConfigurationRequest;

class DeleteAppValidationConfigurationRequestPrivate : public SmsRequestPrivate {

public:
    DeleteAppValidationConfigurationRequestPrivate(const SmsRequest::Action action,
                                   DeleteAppValidationConfigurationRequest * const q);
    DeleteAppValidationConfigurationRequestPrivate(const DeleteAppValidationConfigurationRequestPrivate &other,
                                   DeleteAppValidationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppValidationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
