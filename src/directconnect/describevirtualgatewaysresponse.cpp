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

#include "describevirtualgatewaysresponse.h"
#include "describevirtualgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeVirtualGatewaysResponse
 *
 * @brief  Handles DirectConnect DescribeVirtualGateways responses.
 *
 * @see    DirectConnectClient::describeVirtualGateways
 */

/**
 * @brief  Constructs a new DescribeVirtualGatewaysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVirtualGatewaysResponse::DescribeVirtualGatewaysResponse(
        const DescribeVirtualGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeVirtualGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeVirtualGatewaysRequest(request));
    setReply(reply);
}

const DescribeVirtualGatewaysRequest * DescribeVirtualGatewaysResponse::request() const
{
    Q_D(const DescribeVirtualGatewaysResponse);
    return static_cast<const DescribeVirtualGatewaysRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeVirtualGateways response.
 *
 * @param  response  Response to parse.
 */
void DescribeVirtualGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVirtualGatewaysResponsePrivate
 *
 * @brief  Private implementation for DescribeVirtualGatewaysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVirtualGatewaysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVirtualGatewaysResponse instance.
 */
DescribeVirtualGatewaysResponsePrivate::DescribeVirtualGatewaysResponsePrivate(
    DescribeVirtualGatewaysQueueResponse * const q) : DescribeVirtualGatewaysPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeVirtualGatewaysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVirtualGatewaysResponsePrivate::DescribeVirtualGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVirtualGatewaysResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
