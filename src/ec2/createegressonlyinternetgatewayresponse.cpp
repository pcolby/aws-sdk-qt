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

#include "createegressonlyinternetgatewayresponse.h"
#include "createegressonlyinternetgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateEgressOnlyInternetGatewayResponse
 *
 * @brief  Handles EC2 CreateEgressOnlyInternetGateway responses.
 *
 * @see    EC2Client::createEgressOnlyInternetGateway
 */

/**
 * @brief  Constructs a new CreateEgressOnlyInternetGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEgressOnlyInternetGatewayResponse::CreateEgressOnlyInternetGatewayResponse(
        const CreateEgressOnlyInternetGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateEgressOnlyInternetGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateEgressOnlyInternetGatewayRequest(request));
    setReply(reply);
}

const CreateEgressOnlyInternetGatewayRequest * CreateEgressOnlyInternetGatewayResponse::request() const
{
    Q_D(const CreateEgressOnlyInternetGatewayResponse);
    return static_cast<const CreateEgressOnlyInternetGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateEgressOnlyInternetGateway response.
 *
 * @param  response  Response to parse.
 */
void CreateEgressOnlyInternetGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateEgressOnlyInternetGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEgressOnlyInternetGatewayResponsePrivate
 *
 * @brief  Private implementation for CreateEgressOnlyInternetGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEgressOnlyInternetGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEgressOnlyInternetGatewayResponse instance.
 */
CreateEgressOnlyInternetGatewayResponsePrivate::CreateEgressOnlyInternetGatewayResponsePrivate(
    CreateEgressOnlyInternetGatewayResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateEgressOnlyInternetGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEgressOnlyInternetGatewayResponsePrivate::CreateEgressOnlyInternetGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEgressOnlyInternetGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
