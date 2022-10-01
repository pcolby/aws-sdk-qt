// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTREQUEST_P_H
#define QTAWS_GETACCOUNTREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getaccountrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetAccountRequest;

class GetAccountRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetAccountRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetAccountRequest * const q);
    GetAccountRequestPrivate(const GetAccountRequestPrivate &other,
                                   GetAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
