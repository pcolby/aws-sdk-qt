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

#include "describedbclustersresponse.h"
#include "describedbclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBClustersResponse
 *
 * @brief  Handles RDS DescribeDBClusters responses.
 *
 * @see    RDSClient::describeDBClusters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBClustersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClustersRequest(request));
    setReply(reply);
}

const DescribeDBClustersRequest * DescribeDBClustersResponse::request() const
{
    Q_D(const DescribeDBClustersResponse);
    return static_cast<const DescribeDBClustersRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBClusters response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBClustersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBClustersResponsePrivate
 *
 * @brief  Private implementation for DescribeDBClustersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClustersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBClustersResponse instance.
 */
DescribeDBClustersResponsePrivate::DescribeDBClustersResponsePrivate(
    DescribeDBClustersQueueResponse * const q) : DescribeDBClustersPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBClustersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBClustersResponsePrivate::DescribeDBClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClustersResponse"));
    /// @todo
}
