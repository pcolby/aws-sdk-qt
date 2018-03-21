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

#include "describevpcclassiclinkresponse.h"
#include "describevpcclassiclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcClassicLinkResponse
 *
 * @brief  Handles EC2 DescribeVpcClassicLink responses.
 *
 * @see    EC2Client::describeVpcClassicLink
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcClassicLinkResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcClassicLinkResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcClassicLinkRequest(request));
    setReply(reply);
}

const DescribeVpcClassicLinkRequest * DescribeVpcClassicLinkResponse::request() const
{
    Q_D(const DescribeVpcClassicLinkResponse);
    return static_cast<const DescribeVpcClassicLinkRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpcClassicLink response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcClassicLinkResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcClassicLinkResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcClassicLinkResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcClassicLinkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcClassicLinkResponse instance.
 */
DescribeVpcClassicLinkResponsePrivate::DescribeVpcClassicLinkResponsePrivate(
    DescribeVpcClassicLinkQueueResponse * const q) : DescribeVpcClassicLinkPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpcClassicLinkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcClassicLinkResponsePrivate::DescribeVpcClassicLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcClassicLinkResponse"));
    /// @todo
}
