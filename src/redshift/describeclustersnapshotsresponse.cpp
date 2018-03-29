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

#include "describeclustersnapshotsresponse.h"
#include "describeclustersnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeClusterSnapshotsResponse
 *
 * @brief  Handles Redshift DescribeClusterSnapshots responses.
 *
 * @see    RedshiftClient::describeClusterSnapshots
 */

/**
 * @brief  Constructs a new DescribeClusterSnapshotsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClusterSnapshotsResponse::DescribeClusterSnapshotsResponse(
        const DescribeClusterSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeClusterSnapshotsResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterSnapshotsRequest(request));
    setReply(reply);
}

const DescribeClusterSnapshotsRequest * DescribeClusterSnapshotsResponse::request() const
{
    Q_D(const DescribeClusterSnapshotsResponse);
    return static_cast<const DescribeClusterSnapshotsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeClusterSnapshots response.
 *
 * @param  response  Response to parse.
 */
void DescribeClusterSnapshotsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeClusterSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeClusterSnapshotsResponsePrivate
 *
 * @brief  Private implementation for DescribeClusterSnapshotsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterSnapshotsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeClusterSnapshotsResponse instance.
 */
DescribeClusterSnapshotsResponsePrivate::DescribeClusterSnapshotsResponsePrivate(
    DescribeClusterSnapshotsResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeClusterSnapshotsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeClusterSnapshotsResponsePrivate::DescribeClusterSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterSnapshotsResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
