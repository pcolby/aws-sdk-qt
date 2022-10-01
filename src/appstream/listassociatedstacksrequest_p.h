// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDSTACKSREQUEST_P_H
#define QTAWS_LISTASSOCIATEDSTACKSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "listassociatedstacksrequest.h"

namespace QtAws {
namespace AppStream {

class ListAssociatedStacksRequest;

class ListAssociatedStacksRequestPrivate : public AppStreamRequestPrivate {

public:
    ListAssociatedStacksRequestPrivate(const AppStreamRequest::Action action,
                                   ListAssociatedStacksRequest * const q);
    ListAssociatedStacksRequestPrivate(const ListAssociatedStacksRequestPrivate &other,
                                   ListAssociatedStacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociatedStacksRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
