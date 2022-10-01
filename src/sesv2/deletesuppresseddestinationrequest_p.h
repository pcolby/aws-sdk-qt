// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUPPRESSEDDESTINATIONREQUEST_P_H
#define QTAWS_DELETESUPPRESSEDDESTINATIONREQUEST_P_H

#include "sesv2request_p.h"
#include "deletesuppresseddestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteSuppressedDestinationRequest;

class DeleteSuppressedDestinationRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteSuppressedDestinationRequestPrivate(const SESv2Request::Action action,
                                   DeleteSuppressedDestinationRequest * const q);
    DeleteSuppressedDestinationRequestPrivate(const DeleteSuppressedDestinationRequestPrivate &other,
                                   DeleteSuppressedDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSuppressedDestinationRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
