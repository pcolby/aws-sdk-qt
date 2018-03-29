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

#include "describesnapshotcopygrantsresponse.h"
#include "describesnapshotcopygrantsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeSnapshotCopyGrantsResponse
 *
 * @brief  Handles Redshift DescribeSnapshotCopyGrants responses.
 *
 * @see    RedshiftClient::describeSnapshotCopyGrants
 */

/**
 * @brief  Constructs a new DescribeSnapshotCopyGrantsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSnapshotCopyGrantsResponse::DescribeSnapshotCopyGrantsResponse(
        const DescribeSnapshotCopyGrantsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeSnapshotCopyGrantsResponsePrivate(this), parent)
{
    setRequest(new DescribeSnapshotCopyGrantsRequest(request));
    setReply(reply);
}

const DescribeSnapshotCopyGrantsRequest * DescribeSnapshotCopyGrantsResponse::request() const
{
    Q_D(const DescribeSnapshotCopyGrantsResponse);
    return static_cast<const DescribeSnapshotCopyGrantsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeSnapshotCopyGrants response.
 *
 * @param  response  Response to parse.
 */
void DescribeSnapshotCopyGrantsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeSnapshotCopyGrantsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSnapshotCopyGrantsResponsePrivate
 *
 * @brief  Private implementation for DescribeSnapshotCopyGrantsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotCopyGrantsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSnapshotCopyGrantsResponse instance.
 */
DescribeSnapshotCopyGrantsResponsePrivate::DescribeSnapshotCopyGrantsResponsePrivate(
    DescribeSnapshotCopyGrantsResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeSnapshotCopyGrantsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSnapshotCopyGrantsResponsePrivate::DescribeSnapshotCopyGrantsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSnapshotCopyGrantsResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
