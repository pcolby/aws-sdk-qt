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

#include "describesnapshotattributeresponse.h"
#include "describesnapshotattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSnapshotAttributeResponse
 *
 * @brief  Handles EC2 DescribeSnapshotAttribute responses.
 *
 * @see    EC2Client::describeSnapshotAttribute
 */

/**
 * @brief  Constructs a new DescribeSnapshotAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSnapshotAttributeResponse::DescribeSnapshotAttributeResponse(
        const DescribeSnapshotAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeSnapshotAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeSnapshotAttributeRequest(request));
    setReply(reply);
}

const DescribeSnapshotAttributeRequest * DescribeSnapshotAttributeResponse::request() const
{
    Q_D(const DescribeSnapshotAttributeResponse);
    return static_cast<const DescribeSnapshotAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeSnapshotAttribute response.
 *
 * @param  response  Response to parse.
 */
void DescribeSnapshotAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSnapshotAttributeResponsePrivate
 *
 * @brief  Private implementation for DescribeSnapshotAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSnapshotAttributeResponse instance.
 */
DescribeSnapshotAttributeResponsePrivate::DescribeSnapshotAttributeResponsePrivate(
    DescribeSnapshotAttributeQueueResponse * const q) : DescribeSnapshotAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeSnapshotAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSnapshotAttributeResponsePrivate::DescribeSnapshotAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSnapshotAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
