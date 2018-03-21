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

#include "describeentityaggregatesresponse.h"
#include "describeentityaggregatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Health {

/**
 * @class  DescribeEntityAggregatesResponse
 *
 * @brief  Handles Health DescribeEntityAggregates responses.
 *
 * @see    HealthClient::describeEntityAggregates
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEntityAggregatesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthResponse(new DescribeEntityAggregatesResponsePrivate(this), parent)
{
    setRequest(new DescribeEntityAggregatesRequest(request));
    setReply(reply);
}

const DescribeEntityAggregatesRequest * DescribeEntityAggregatesResponse::request() const
{
    Q_D(const DescribeEntityAggregatesResponse);
    return static_cast<const DescribeEntityAggregatesRequest *>(d->request);
}

/**
 * @brief  Parse a Health DescribeEntityAggregates response.
 *
 * @param  response  Response to parse.
 */
void DescribeEntityAggregatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEntityAggregatesResponsePrivate
 *
 * @brief  Private implementation for DescribeEntityAggregatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEntityAggregatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEntityAggregatesResponse instance.
 */
DescribeEntityAggregatesResponsePrivate::DescribeEntityAggregatesResponsePrivate(
    DescribeEntityAggregatesQueueResponse * const q) : DescribeEntityAggregatesPrivate(q)
{

}

/**
 * @brief  Parse an Health DescribeEntityAggregatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEntityAggregatesResponsePrivate::DescribeEntityAggregatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEntityAggregatesResponse"));
    /// @todo
}
