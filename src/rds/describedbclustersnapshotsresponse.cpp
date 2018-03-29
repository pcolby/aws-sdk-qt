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

#include "describedbclustersnapshotsresponse.h"
#include "describedbclustersnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBClusterSnapshotsResponse
 *
 * @brief  Handles RDS DescribeDBClusterSnapshots responses.
 *
 * @see    RDSClient::describeDBClusterSnapshots
 */

/**
 * @brief  Constructs a new DescribeDBClusterSnapshotsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBClusterSnapshotsResponse::DescribeDBClusterSnapshotsResponse(
        const DescribeDBClusterSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBClusterSnapshotsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterSnapshotsRequest(request));
    setReply(reply);
}

const DescribeDBClusterSnapshotsRequest * DescribeDBClusterSnapshotsResponse::request() const
{
    Q_D(const DescribeDBClusterSnapshotsResponse);
    return static_cast<const DescribeDBClusterSnapshotsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBClusterSnapshots response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBClusterSnapshotsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDBClusterSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBClusterSnapshotsResponsePrivate
 *
 * @brief  Private implementation for DescribeDBClusterSnapshotsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterSnapshotsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBClusterSnapshotsResponse instance.
 */
DescribeDBClusterSnapshotsResponsePrivate::DescribeDBClusterSnapshotsResponsePrivate(
    DescribeDBClusterSnapshotsResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBClusterSnapshotsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBClusterSnapshotsResponsePrivate::DescribeDBClusterSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterSnapshotsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
