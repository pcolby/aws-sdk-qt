/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcrawlermetricsresponse.h"
#include "getcrawlermetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetCrawlerMetricsResponse
 *
 * @brief  Handles Glue GetCrawlerMetrics responses.
 *
 * @see    GlueClient::getCrawlerMetrics
 */

/**
 * @brief  Constructs a new GetCrawlerMetricsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCrawlerMetricsResponse::GetCrawlerMetricsResponse(
        const GetCrawlerMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCrawlerMetricsResponsePrivate(this), parent)
{
    setRequest(new GetCrawlerMetricsRequest(request));
    setReply(reply);
}

const GetCrawlerMetricsRequest * GetCrawlerMetricsResponse::request() const
{
    Q_D(const GetCrawlerMetricsResponse);
    return static_cast<const GetCrawlerMetricsRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetCrawlerMetrics response.
 *
 * @param  response  Response to parse.
 */
void GetCrawlerMetricsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCrawlerMetricsResponsePrivate
 *
 * @brief  Private implementation for GetCrawlerMetricsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCrawlerMetricsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCrawlerMetricsResponse instance.
 */
GetCrawlerMetricsResponsePrivate::GetCrawlerMetricsResponsePrivate(
    GetCrawlerMetricsResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetCrawlerMetricsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCrawlerMetricsResponsePrivate::GetCrawlerMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCrawlerMetricsResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
