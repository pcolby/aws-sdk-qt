// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDOTPMESSAGEREQUEST_P_H
#define QTAWS_SENDOTPMESSAGEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "sendotpmessagerequest.h"

namespace QtAws {
namespace Pinpoint {

class SendOTPMessageRequest;

class SendOTPMessageRequestPrivate : public PinpointRequestPrivate {

public:
    SendOTPMessageRequestPrivate(const PinpointRequest::Action action,
                                   SendOTPMessageRequest * const q);
    SendOTPMessageRequestPrivate(const SendOTPMessageRequestPrivate &other,
                                   SendOTPMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendOTPMessageRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
