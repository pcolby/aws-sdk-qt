// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUPPRESSEDDESTINATIONSREQUEST_P_H
#define QTAWS_LISTSUPPRESSEDDESTINATIONSREQUEST_P_H

#include "sesv2request_p.h"
#include "listsuppresseddestinationsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListSuppressedDestinationsRequest;

class ListSuppressedDestinationsRequestPrivate : public SESv2RequestPrivate {

public:
    ListSuppressedDestinationsRequestPrivate(const SESv2Request::Action action,
                                   ListSuppressedDestinationsRequest * const q);
    ListSuppressedDestinationsRequestPrivate(const ListSuppressedDestinationsRequestPrivate &other,
                                   ListSuppressedDestinationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSuppressedDestinationsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
