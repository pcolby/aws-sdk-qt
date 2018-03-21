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

#include "describesubscriptionfiltersresponse.h"
#include "describesubscriptionfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DescribeSubscriptionFiltersResponse
 *
 * @brief  Handles CloudWatchLogs DescribeSubscriptionFilters responses.
 *
 * @see    CloudWatchLogsClient::describeSubscriptionFilters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSubscriptionFiltersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DescribeSubscriptionFiltersResponsePrivate(this), parent)
{
    setRequest(new DescribeSubscriptionFiltersRequest(request));
    setReply(reply);
}

const DescribeSubscriptionFiltersRequest * DescribeSubscriptionFiltersResponse::request() const
{
    Q_D(const DescribeSubscriptionFiltersResponse);
    return static_cast<const DescribeSubscriptionFiltersRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DescribeSubscriptionFilters response.
 *
 * @param  response  Response to parse.
 */
void DescribeSubscriptionFiltersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSubscriptionFiltersResponsePrivate
 *
 * @brief  Private implementation for DescribeSubscriptionFiltersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubscriptionFiltersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSubscriptionFiltersResponse instance.
 */
DescribeSubscriptionFiltersResponsePrivate::DescribeSubscriptionFiltersResponsePrivate(
    DescribeSubscriptionFiltersQueueResponse * const q) : DescribeSubscriptionFiltersPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DescribeSubscriptionFiltersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSubscriptionFiltersResponsePrivate::DescribeSubscriptionFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSubscriptionFiltersResponse"));
    /// @todo
}
