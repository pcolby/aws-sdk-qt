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

#include "describevolumeattributeresponse.h"
#include "describevolumeattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVolumeAttributeResponse
 *
 * @brief  Handles EC2 DescribeVolumeAttribute responses.
 *
 * @see    EC2Client::describeVolumeAttribute
 */

/**
 * @brief  Constructs a new DescribeVolumeAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVolumeAttributeResponse::DescribeVolumeAttributeResponse(
        const DescribeVolumeAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVolumeAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeVolumeAttributeRequest(request));
    setReply(reply);
}

const DescribeVolumeAttributeRequest * DescribeVolumeAttributeResponse::request() const
{
    Q_D(const DescribeVolumeAttributeResponse);
    return static_cast<const DescribeVolumeAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVolumeAttribute response.
 *
 * @param  response  Response to parse.
 */
void DescribeVolumeAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVolumeAttributeResponsePrivate
 *
 * @brief  Private implementation for DescribeVolumeAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumeAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVolumeAttributeResponse instance.
 */
DescribeVolumeAttributeResponsePrivate::DescribeVolumeAttributeResponsePrivate(
    DescribeVolumeAttributeQueueResponse * const q) : DescribeVolumeAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVolumeAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVolumeAttributeResponsePrivate::DescribeVolumeAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVolumeAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
