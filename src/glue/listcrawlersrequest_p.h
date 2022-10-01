// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRAWLERSREQUEST_P_H
#define QTAWS_LISTCRAWLERSREQUEST_P_H

#include "gluerequest_p.h"
#include "listcrawlersrequest.h"

namespace QtAws {
namespace Glue {

class ListCrawlersRequest;

class ListCrawlersRequestPrivate : public GlueRequestPrivate {

public:
    ListCrawlersRequestPrivate(const GlueRequest::Action action,
                                   ListCrawlersRequest * const q);
    ListCrawlersRequestPrivate(const ListCrawlersRequestPrivate &other,
                                   ListCrawlersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCrawlersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
