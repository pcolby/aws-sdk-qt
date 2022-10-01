// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSUPPRESSIONATTRIBUTESREQUEST_P_H
#define QTAWS_PUTACCOUNTSUPPRESSIONATTRIBUTESREQUEST_P_H

#include "sesv2request_p.h"
#include "putaccountsuppressionattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutAccountSuppressionAttributesRequest;

class PutAccountSuppressionAttributesRequestPrivate : public SESv2RequestPrivate {

public:
    PutAccountSuppressionAttributesRequestPrivate(const SESv2Request::Action action,
                                   PutAccountSuppressionAttributesRequest * const q);
    PutAccountSuppressionAttributesRequestPrivate(const PutAccountSuppressionAttributesRequestPrivate &other,
                                   PutAccountSuppressionAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountSuppressionAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
