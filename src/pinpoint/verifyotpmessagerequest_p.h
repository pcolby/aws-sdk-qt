// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYOTPMESSAGEREQUEST_P_H
#define QTAWS_VERIFYOTPMESSAGEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "verifyotpmessagerequest.h"

namespace QtAws {
namespace Pinpoint {

class VerifyOTPMessageRequest;

class VerifyOTPMessageRequestPrivate : public PinpointRequestPrivate {

public:
    VerifyOTPMessageRequestPrivate(const PinpointRequest::Action action,
                                   VerifyOTPMessageRequest * const q);
    VerifyOTPMessageRequestPrivate(const VerifyOTPMessageRequestPrivate &other,
                                   VerifyOTPMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyOTPMessageRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
