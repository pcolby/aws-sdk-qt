// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSENDINGATTRIBUTESREQUEST_P_H
#define QTAWS_PUTACCOUNTSENDINGATTRIBUTESREQUEST_P_H

#include "sesv2request_p.h"
#include "putaccountsendingattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutAccountSendingAttributesRequest;

class PutAccountSendingAttributesRequestPrivate : public SESv2RequestPrivate {

public:
    PutAccountSendingAttributesRequestPrivate(const SESv2Request::Action action,
                                   PutAccountSendingAttributesRequest * const q);
    PutAccountSendingAttributesRequestPrivate(const PutAccountSendingAttributesRequestPrivate &other,
                                   PutAccountSendingAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountSendingAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
