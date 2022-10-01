// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERSREQUEST_P_H
#define QTAWS_GETCRAWLERSREQUEST_P_H

#include "gluerequest_p.h"
#include "getcrawlersrequest.h"

namespace QtAws {
namespace Glue {

class GetCrawlersRequest;

class GetCrawlersRequestPrivate : public GlueRequestPrivate {

public:
    GetCrawlersRequestPrivate(const GlueRequest::Action action,
                                   GetCrawlersRequest * const q);
    GetCrawlersRequestPrivate(const GetCrawlersRequestPrivate &other,
                                   GetCrawlersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCrawlersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
