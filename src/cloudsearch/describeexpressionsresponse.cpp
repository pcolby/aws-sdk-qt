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

#include "describeexpressionsresponse.h"
#include "describeexpressionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeExpressionsResponse
 *
 * @brief  Handles CloudSearch DescribeExpressions responses.
 *
 * @see    CloudSearchClient::describeExpressions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeExpressionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeExpressionsResponsePrivate(this), parent)
{
    setRequest(new DescribeExpressionsRequest(request));
    setReply(reply);
}

const DescribeExpressionsRequest * DescribeExpressionsResponse::request() const
{
    Q_D(const DescribeExpressionsResponse);
    return static_cast<const DescribeExpressionsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DescribeExpressions response.
 *
 * @param  response  Response to parse.
 */
void DescribeExpressionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeExpressionsResponsePrivate
 *
 * @brief  Private implementation for DescribeExpressionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExpressionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeExpressionsResponse instance.
 */
DescribeExpressionsResponsePrivate::DescribeExpressionsResponsePrivate(
    DescribeExpressionsQueueResponse * const q) : DescribeExpressionsPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DescribeExpressionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeExpressionsResponsePrivate::DescribeExpressionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExpressionsResponse"));
    /// @todo
}
