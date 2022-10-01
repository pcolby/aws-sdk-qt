// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEMAILREQUEST_P_H
#define QTAWS_SENDEMAILREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "sendemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class SendEmailRequest;

class SendEmailRequestPrivate : public PinpointEmailRequestPrivate {

public:
    SendEmailRequestPrivate(const PinpointEmailRequest::Action action,
                                   SendEmailRequest * const q);
    SendEmailRequestPrivate(const SendEmailRequestPrivate &other,
                                   SendEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendEmailRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
