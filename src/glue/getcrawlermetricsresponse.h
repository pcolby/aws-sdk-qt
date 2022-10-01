// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERMETRICSRESPONSE_H
#define QTAWS_GETCRAWLERMETRICSRESPONSE_H

#include "glueresponse.h"
#include "getcrawlermetricsrequest.h"

namespace QtAws {
namespace Glue {

class GetCrawlerMetricsResponsePrivate;

class QTAWSGLUE_EXPORT GetCrawlerMetricsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetCrawlerMetricsResponse(const GetCrawlerMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCrawlerMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCrawlerMetricsResponse)
    Q_DISABLE_COPY(GetCrawlerMetricsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
