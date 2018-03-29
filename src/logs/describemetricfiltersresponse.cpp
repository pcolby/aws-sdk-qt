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

#include "describemetricfiltersresponse.h"
#include "describemetricfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DescribeMetricFiltersResponse
 *
 * @brief  Handles CloudWatchLogs DescribeMetricFilters responses.
 *
 * @see    CloudWatchLogsClient::describeMetricFilters
 */

/**
 * @brief  Constructs a new DescribeMetricFiltersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMetricFiltersResponse::DescribeMetricFiltersResponse(
        const DescribeMetricFiltersRequest &request,
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
    Q_D(DescribeMetricFiltersResponse);
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
    DescribeMetricFiltersResponse * const q) : CloudWatchLogsResponsePrivate(q)
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
} // namespace QtAws
