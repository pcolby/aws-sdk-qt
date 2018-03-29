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

#include "describesubnetsresponse.h"
#include "describesubnetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSubnetsResponse
 *
 * @brief  Handles EC2 DescribeSubnets responses.
 *
 * @see    EC2Client::describeSubnets
 */

/**
 * @brief  Constructs a new DescribeSubnetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSubnetsResponse::DescribeSubnetsResponse(
        const DescribeSubnetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeSubnetsResponsePrivate(this), parent)
{
    setRequest(new DescribeSubnetsRequest(request));
    setReply(reply);
}

const DescribeSubnetsRequest * DescribeSubnetsResponse::request() const
{
    Q_D(const DescribeSubnetsResponse);
    return static_cast<const DescribeSubnetsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeSubnets response.
 *
 * @param  response  Response to parse.
 */
void DescribeSubnetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSubnetsResponsePrivate
 *
 * @brief  Private implementation for DescribeSubnetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubnetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSubnetsResponse instance.
 */
DescribeSubnetsResponsePrivate::DescribeSubnetsResponsePrivate(
    DescribeSubnetsQueueResponse * const q) : DescribeSubnetsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeSubnetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSubnetsResponsePrivate::DescribeSubnetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSubnetsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
