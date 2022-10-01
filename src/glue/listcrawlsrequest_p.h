// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRAWLSREQUEST_P_H
#define QTAWS_LISTCRAWLSREQUEST_P_H

#include "gluerequest_p.h"
#include "listcrawlsrequest.h"

namespace QtAws {
namespace Glue {

class ListCrawlsRequest;

class ListCrawlsRequestPrivate : public GlueRequestPrivate {

public:
    ListCrawlsRequestPrivate(const GlueRequest::Action action,
                                   ListCrawlsRequest * const q);
    ListCrawlsRequestPrivate(const ListCrawlsRequestPrivate &other,
                                   ListCrawlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCrawlsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
