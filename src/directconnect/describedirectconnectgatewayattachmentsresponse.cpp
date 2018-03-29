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

#include "describedirectconnectgatewayattachmentsresponse.h"
#include "describedirectconnectgatewayattachmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeDirectConnectGatewayAttachmentsResponse
 *
 * @brief  Handles DirectConnect DescribeDirectConnectGatewayAttachments responses.
 *
 * @see    DirectConnectClient::describeDirectConnectGatewayAttachments
 */

/**
 * @brief  Constructs a new DescribeDirectConnectGatewayAttachmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectConnectGatewayAttachmentsResponse::DescribeDirectConnectGatewayAttachmentsResponse(
        const DescribeDirectConnectGatewayAttachmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeDirectConnectGatewayAttachmentsResponsePrivate(this), parent)
{
    setRequest(new DescribeDirectConnectGatewayAttachmentsRequest(request));
    setReply(reply);
}

const DescribeDirectConnectGatewayAttachmentsRequest * DescribeDirectConnectGatewayAttachmentsResponse::request() const
{
    Q_D(const DescribeDirectConnectGatewayAttachmentsResponse);
    return static_cast<const DescribeDirectConnectGatewayAttachmentsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeDirectConnectGatewayAttachments response.
 *
 * @param  response  Response to parse.
 */
void DescribeDirectConnectGatewayAttachmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDirectConnectGatewayAttachmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDirectConnectGatewayAttachmentsResponsePrivate
 *
 * @brief  Private implementation for DescribeDirectConnectGatewayAttachmentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectConnectGatewayAttachmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDirectConnectGatewayAttachmentsResponse instance.
 */
DescribeDirectConnectGatewayAttachmentsResponsePrivate::DescribeDirectConnectGatewayAttachmentsResponsePrivate(
    DescribeDirectConnectGatewayAttachmentsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeDirectConnectGatewayAttachmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDirectConnectGatewayAttachmentsResponsePrivate::DescribeDirectConnectGatewayAttachmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectConnectGatewayAttachmentsResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
