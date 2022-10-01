// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSITESREQUEST_P_H
#define QTAWS_LISTSITESREQUEST_P_H

#include "outpostsrequest_p.h"
#include "listsitesrequest.h"

namespace QtAws {
namespace Outposts {

class ListSitesRequest;

class ListSitesRequestPrivate : public OutpostsRequestPrivate {

public:
    ListSitesRequestPrivate(const OutpostsRequest::Action action,
                                   ListSitesRequest * const q);
    ListSitesRequestPrivate(const ListSitesRequestPrivate &other,
                                   ListSitesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSitesRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
