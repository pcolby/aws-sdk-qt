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

#include "describeclusterversionsresponse.h"
#include "describeclusterversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeClusterVersionsResponse
 *
 * @brief  Handles Redshift DescribeClusterVersions responses.
 *
 * @see    RedshiftClient::describeClusterVersions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClusterVersionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeClusterVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterVersionsRequest(request));
    setReply(reply);
}

const DescribeClusterVersionsRequest * DescribeClusterVersionsResponse::request() const
{
    Q_D(const DescribeClusterVersionsResponse);
    return static_cast<const DescribeClusterVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeClusterVersions response.
 *
 * @param  response  Response to parse.
 */
void DescribeClusterVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeClusterVersionsResponsePrivate
 *
 * @brief  Private implementation for DescribeClusterVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeClusterVersionsResponse instance.
 */
DescribeClusterVersionsResponsePrivate::DescribeClusterVersionsResponsePrivate(
    DescribeClusterVersionsQueueResponse * const q) : DescribeClusterVersionsPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeClusterVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeClusterVersionsResponsePrivate::DescribeClusterVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterVersionsResponse"));
    /// @todo
}
