/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describemetricfiltersresponse.h"
#include "describemetricfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DescribeMetricFiltersResponse
 *
 * @brief  Handles CloudWatchLogs DescribeMetricFilters responses.
 *
 * @see    CloudWatchLogsClient::describeMetricFilters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMetricFiltersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DescribeMetricFiltersResponsePrivate(this), parent)
{
    setRequest(new DescribeMetricFiltersRequest(request));
    setReply(reply);
}

const DescribeMetricFiltersRequest * DescribeMetricFiltersResponse::request() const
{
    Q_D(const DescribeMetricFiltersResponse);
    return static_cast<const DescribeMetricFiltersRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DescribeMetricFilters response.
 *
 * @param  response  Response to parse.
 */
void DescribeMetricFiltersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMetricFiltersResponsePrivate
 *
 * @brief  Private implementation for DescribeMetricFiltersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMetricFiltersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMetricFiltersResponse instance.
 */
DescribeMetricFiltersResponsePrivate::DescribeMetricFiltersResponsePrivate(
    DescribeMetricFiltersQueueResponse * const q) : DescribeMetricFiltersPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DescribeMetricFiltersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMetricFiltersResponsePrivate::DescribeMetricFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMetricFiltersResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
