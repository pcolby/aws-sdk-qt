// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYAPPVALIDATIONOUTPUTREQUEST_P_H
#define QTAWS_NOTIFYAPPVALIDATIONOUTPUTREQUEST_P_H

#include "smsrequest_p.h"
#include "notifyappvalidationoutputrequest.h"

namespace QtAws {
namespace Sms {

class NotifyAppValidationOutputRequest;

class NotifyAppValidationOutputRequestPrivate : public SmsRequestPrivate {

public:
    NotifyAppValidationOutputRequestPrivate(const SmsRequest::Action action,
                                   NotifyAppValidationOutputRequest * const q);
    NotifyAppValidationOutputRequestPrivate(const NotifyAppValidationOutputRequestPrivate &other,
                                   NotifyAppValidationOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(NotifyAppValidationOutputRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
