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

#include "describegatewayinformationresponse.h"
#include "describegatewayinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeGatewayInformationResponse
 *
 * @brief  Handles StorageGateway DescribeGatewayInformation responses.
 *
 * @see    StorageGatewayClient::describeGatewayInformation
 */

/**
 * @brief  Constructs a new DescribeGatewayInformationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeGatewayInformationResponse::DescribeGatewayInformationResponse(
        const DescribeGatewayInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeGatewayInformationResponse(new DescribeGatewayInformationResponsePrivate(this), parent)
{
    setRequest(new DescribeGatewayInformationRequest(request));
    setReply(reply);
}

const DescribeGatewayInformationRequest * DescribeGatewayInformationResponse::request() const
{
    Q_D(const DescribeGatewayInformationResponse);
    return static_cast<const DescribeGatewayInformationRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeGatewayInformation response.
 *
 * @param  response  Response to parse.
 */
void DescribeGatewayInformationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeGatewayInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeGatewayInformationResponsePrivate
 *
 * @brief  Private implementation for DescribeGatewayInformationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGatewayInformationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeGatewayInformationResponse instance.
 */
DescribeGatewayInformationResponsePrivate::DescribeGatewayInformationResponsePrivate(
    DescribeGatewayInformationResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeGatewayInformationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeGatewayInformationResponsePrivate::parseDescribeGatewayInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGatewayInformationResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
