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

#include "describedirectconnectgatewayassociationsresponse.h"
#include "describedirectconnectgatewayassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeDirectConnectGatewayAssociationsResponse
 *
 * @brief  Handles DirectConnect DescribeDirectConnectGatewayAssociations responses.
 *
 * @see    DirectConnectClient::describeDirectConnectGatewayAssociations
 */

/**
 * @brief  Constructs a new DescribeDirectConnectGatewayAssociationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectConnectGatewayAssociationsResponse::DescribeDirectConnectGatewayAssociationsResponse(
        const DescribeDirectConnectGatewayAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeDirectConnectGatewayAssociationsResponse(new DescribeDirectConnectGatewayAssociationsResponsePrivate(this), parent)
{
    setRequest(new DescribeDirectConnectGatewayAssociationsRequest(request));
    setReply(reply);
}

const DescribeDirectConnectGatewayAssociationsRequest * DescribeDirectConnectGatewayAssociationsResponse::request() const
{
    Q_D(const DescribeDirectConnectGatewayAssociationsResponse);
    return static_cast<const DescribeDirectConnectGatewayAssociationsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeDirectConnectGatewayAssociations response.
 *
 * @param  response  Response to parse.
 */
void DescribeDirectConnectGatewayAssociationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDirectConnectGatewayAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDirectConnectGatewayAssociationsResponsePrivate
 *
 * @brief  Private implementation for DescribeDirectConnectGatewayAssociationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectConnectGatewayAssociationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDirectConnectGatewayAssociationsResponse instance.
 */
DescribeDirectConnectGatewayAssociationsResponsePrivate::DescribeDirectConnectGatewayAssociationsResponsePrivate(
    DescribeDirectConnectGatewayAssociationsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeDirectConnectGatewayAssociationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDirectConnectGatewayAssociationsResponsePrivate::parseDescribeDirectConnectGatewayAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectConnectGatewayAssociationsResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
