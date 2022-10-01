// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAUNCHAPPREQUEST_P_H
#define QTAWS_LAUNCHAPPREQUEST_P_H

#include "smsrequest_p.h"
#include "launchapprequest.h"

namespace QtAws {
namespace Sms {

class LaunchAppRequest;

class LaunchAppRequestPrivate : public SmsRequestPrivate {

public:
    LaunchAppRequestPrivate(const SmsRequest::Action action,
                                   LaunchAppRequest * const q);
    LaunchAppRequestPrivate(const LaunchAppRequestPrivate &other,
                                   LaunchAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(LaunchAppRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
