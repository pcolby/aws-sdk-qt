// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUPPRESSEDDESTINATIONREQUEST_P_H
#define QTAWS_GETSUPPRESSEDDESTINATIONREQUEST_P_H

#include "sesv2request_p.h"
#include "getsuppresseddestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class GetSuppressedDestinationRequest;

class GetSuppressedDestinationRequestPrivate : public SESv2RequestPrivate {

public:
    GetSuppressedDestinationRequestPrivate(const SESv2Request::Action action,
                                   GetSuppressedDestinationRequest * const q);
    GetSuppressedDestinationRequestPrivate(const GetSuppressedDestinationRequestPrivate &other,
                                   GetSuppressedDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSuppressedDestinationRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
