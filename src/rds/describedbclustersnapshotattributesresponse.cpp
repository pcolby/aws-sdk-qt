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

#include "describedbclustersnapshotattributesresponse.h"
#include "describedbclustersnapshotattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBClusterSnapshotAttributesResponse
 *
 * @brief  Handles RDS DescribeDBClusterSnapshotAttributes responses.
 *
 * @see    RDSClient::describeDBClusterSnapshotAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBClusterSnapshotAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBClusterSnapshotAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterSnapshotAttributesRequest(request));
    setReply(reply);
}

const DescribeDBClusterSnapshotAttributesRequest * DescribeDBClusterSnapshotAttributesResponse::request() const
{
    Q_D(const DescribeDBClusterSnapshotAttributesResponse);
    return static_cast<const DescribeDBClusterSnapshotAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBClusterSnapshotAttributes response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBClusterSnapshotAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBClusterSnapshotAttributesResponsePrivate
 *
 * @brief  Private implementation for DescribeDBClusterSnapshotAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterSnapshotAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBClusterSnapshotAttributesResponse instance.
 */
DescribeDBClusterSnapshotAttributesResponsePrivate::DescribeDBClusterSnapshotAttributesResponsePrivate(
    DescribeDBClusterSnapshotAttributesQueueResponse * const q) : DescribeDBClusterSnapshotAttributesPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBClusterSnapshotAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBClusterSnapshotAttributesResponsePrivate::DescribeDBClusterSnapshotAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterSnapshotAttributesResponse"));
    /// @todo
}
