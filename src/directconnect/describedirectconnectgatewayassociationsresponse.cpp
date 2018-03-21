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

#include "describedirectconnectgatewayassociationsresponse.h"
#include "describedirectconnectgatewayassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeDirectConnectGatewayAssociationsResponse
 *
 * @brief  Handles DirectConnect DescribeDirectConnectGatewayAssociations responses.
 *
 * @see    DirectConnectClient::describeDirectConnectGatewayAssociations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectConnectGatewayAssociationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeDirectConnectGatewayAssociationsResponsePrivate(this), parent)
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
    Q_D(Response);
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
    DescribeDirectConnectGatewayAssociationsQueueResponse * const q) : DescribeDirectConnectGatewayAssociationsPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeDirectConnectGatewayAssociationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDirectConnectGatewayAssociationsResponsePrivate::DescribeDirectConnectGatewayAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectConnectGatewayAssociationsResponse"));
    /// @todo
}
