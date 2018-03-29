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

#include "getmetricstatisticsresponse.h"
#include "getmetricstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  GetMetricStatisticsResponse
 *
 * @brief  Handles CloudWatch GetMetricStatistics responses.
 *
 * @see    CloudWatchClient::getMetricStatistics
 */

/**
 * @brief  Constructs a new GetMetricStatisticsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMetricStatisticsResponse::GetMetricStatisticsResponse(
        const GetMetricStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetMetricStatisticsResponse(new GetMetricStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetMetricStatisticsRequest(request));
    setReply(reply);
}

const GetMetricStatisticsRequest * GetMetricStatisticsResponse::request() const
{
    Q_D(const GetMetricStatisticsResponse);
    return static_cast<const GetMetricStatisticsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch GetMetricStatistics response.
 *
 * @param  response  Response to parse.
 */
void GetMetricStatisticsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetMetricStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMetricStatisticsResponsePrivate
 *
 * @brief  Private implementation for GetMetricStatisticsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMetricStatisticsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMetricStatisticsResponse instance.
 */
GetMetricStatisticsResponsePrivate::GetMetricStatisticsResponsePrivate(
    GetMetricStatisticsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch GetMetricStatisticsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMetricStatisticsResponsePrivate::parseGetMetricStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMetricStatisticsResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
