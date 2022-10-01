// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERMETRICSRESPONSE_P_H
#define QTAWS_GETCRAWLERMETRICSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetCrawlerMetricsResponse;

class GetCrawlerMetricsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetCrawlerMetricsResponsePrivate(GetCrawlerMetricsResponse * const q);

    void parseGetCrawlerMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCrawlerMetricsResponse)
    Q_DISABLE_COPY(GetCrawlerMetricsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
