// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSENDINGATTRIBUTESREQUEST_P_H
#define QTAWS_PUTACCOUNTSENDINGATTRIBUTESREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putaccountsendingattributesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutAccountSendingAttributesRequest;

class PutAccountSendingAttributesRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutAccountSendingAttributesRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutAccountSendingAttributesRequest * const q);
    PutAccountSendingAttributesRequestPrivate(const PutAccountSendingAttributesRequestPrivate &other,
                                   PutAccountSendingAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountSendingAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
