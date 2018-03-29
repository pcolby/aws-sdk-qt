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

#include "describedbsnapshotattributesresponse.h"
#include "describedbsnapshotattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBSnapshotAttributesResponse
 *
 * @brief  Handles RDS DescribeDBSnapshotAttributes responses.
 *
 * @see    RDSClient::describeDBSnapshotAttributes
 */

/**
 * @brief  Constructs a new DescribeDBSnapshotAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBSnapshotAttributesResponse::DescribeDBSnapshotAttributesResponse(
        const DescribeDBSnapshotAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBSnapshotAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeDBSnapshotAttributesRequest(request));
    setReply(reply);
}

const DescribeDBSnapshotAttributesRequest * DescribeDBSnapshotAttributesResponse::request() const
{
    Q_D(const DescribeDBSnapshotAttributesResponse);
    return static_cast<const DescribeDBSnapshotAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBSnapshotAttributes response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBSnapshotAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBSnapshotAttributesResponsePrivate
 *
 * @brief  Private implementation for DescribeDBSnapshotAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSnapshotAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBSnapshotAttributesResponse instance.
 */
DescribeDBSnapshotAttributesResponsePrivate::DescribeDBSnapshotAttributesResponsePrivate(
    DescribeDBSnapshotAttributesQueueResponse * const q) : DescribeDBSnapshotAttributesPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBSnapshotAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBSnapshotAttributesResponsePrivate::DescribeDBSnapshotAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBSnapshotAttributesResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
