// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSREQUEST_P_H
#define QTAWS_LISTENDPOINTSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listendpointsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEndpointsRequest;

class ListEndpointsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListEndpointsRequestPrivate(const ComprehendRequest::Action action,
                                   ListEndpointsRequest * const q);
    ListEndpointsRequestPrivate(const ListEndpointsRequestPrivate &other,
                                   ListEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEndpointsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
