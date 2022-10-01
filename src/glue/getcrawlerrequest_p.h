// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERREQUEST_P_H
#define QTAWS_GETCRAWLERREQUEST_P_H

#include "gluerequest_p.h"
#include "getcrawlerrequest.h"

namespace QtAws {
namespace Glue {

class GetCrawlerRequest;

class GetCrawlerRequestPrivate : public GlueRequestPrivate {

public:
    GetCrawlerRequestPrivate(const GlueRequest::Action action,
                                   GetCrawlerRequest * const q);
    GetCrawlerRequestPrivate(const GetCrawlerRequestPrivate &other,
                                   GetCrawlerRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
