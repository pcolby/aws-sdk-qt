// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERMETRICSREQUEST_P_H
#define QTAWS_GETCRAWLERMETRICSREQUEST_P_H

#include "gluerequest_p.h"
#include "getcrawlermetricsrequest.h"

namespace QtAws {
namespace Glue {

class GetCrawlerMetricsRequest;

class GetCrawlerMetricsRequestPrivate : public GlueRequestPrivate {

public:
    GetCrawlerMetricsRequestPrivate(const GlueRequest::Action action,
                                   GetCrawlerMetricsRequest * const q);
    GetCrawlerMetricsRequestPrivate(const GetCrawlerMetricsRequestPrivate &other,
                                   GetCrawlerMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCrawlerMetricsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
