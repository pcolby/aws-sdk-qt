// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRAPHSREQUEST_P_H
#define QTAWS_LISTGRAPHSREQUEST_P_H

#include "detectiverequest_p.h"
#include "listgraphsrequest.h"

namespace QtAws {
namespace Detective {

class ListGraphsRequest;

class ListGraphsRequestPrivate : public DetectiveRequestPrivate {

public:
    ListGraphsRequestPrivate(const DetectiveRequest::Action action,
                                   ListGraphsRequest * const q);
    ListGraphsRequestPrivate(const ListGraphsRequestPrivate &other,
                                   ListGraphsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGraphsRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
