// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSUPPRESSEDDESTINATIONREQUEST_P_H
#define QTAWS_PUTSUPPRESSEDDESTINATIONREQUEST_P_H

#include "sesv2request_p.h"
#include "putsuppresseddestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class PutSuppressedDestinationRequest;

class PutSuppressedDestinationRequestPrivate : public SESv2RequestPrivate {

public:
    PutSuppressedDestinationRequestPrivate(const SESv2Request::Action action,
                                   PutSuppressedDestinationRequest * const q);
    PutSuppressedDestinationRequestPrivate(const PutSuppressedDestinationRequestPrivate &other,
                                   PutSuppressedDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSuppressedDestinationRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
