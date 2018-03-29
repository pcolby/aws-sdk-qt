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

#include "describedbclustersnapshotattributesresponse.h"
#include "describedbclustersnapshotattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBClusterSnapshotAttributesResponse
 *
 * @brief  Handles RDS DescribeDBClusterSnapshotAttributes responses.
 *
 * @see    RDSClient::describeDBClusterSnapshotAttributes
 */

/**
 * @brief  Constructs a new DescribeDBClusterSnapshotAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBClusterSnapshotAttributesResponse::DescribeDBClusterSnapshotAttributesResponse(
        const DescribeDBClusterSnapshotAttributesRequest &request,
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
    Q_D(DescribeDBClusterSnapshotAttributesResponse);
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
    DescribeDBClusterSnapshotAttributesResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBClusterSnapshotAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBClusterSnapshotAttributesResponsePrivate::parseDescribeDBClusterSnapshotAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterSnapshotAttributesResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
