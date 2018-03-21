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

#include "describedirectconnectgatewaysresponse.h"
#include "describedirectconnectgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeDirectConnectGatewaysResponse
 *
 * @brief  Handles DirectConnect DescribeDirectConnectGateways responses.
 *
 * @see    DirectConnectClient::describeDirectConnectGateways
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectConnectGatewaysResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeDirectConnectGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeDirectConnectGatewaysRequest(request));
    setReply(reply);
}

const DescribeDirectConnectGatewaysRequest * DescribeDirectConnectGatewaysResponse::request() const
{
    Q_D(const DescribeDirectConnectGatewaysResponse);
    return static_cast<const DescribeDirectConnectGatewaysRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeDirectConnectGateways response.
 *
 * @param  response  Response to parse.
 */
void DescribeDirectConnectGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDirectConnectGatewaysResponsePrivate
 *
 * @brief  Private implementation for DescribeDirectConnectGatewaysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectConnectGatewaysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDirectConnectGatewaysResponse instance.
 */
DescribeDirectConnectGatewaysResponsePrivate::DescribeDirectConnectGatewaysResponsePrivate(
    DescribeDirectConnectGatewaysQueueResponse * const q) : DescribeDirectConnectGatewaysPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeDirectConnectGatewaysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDirectConnectGatewaysResponsePrivate::DescribeDirectConnectGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectConnectGatewaysResponse"));
    /// @todo
}
