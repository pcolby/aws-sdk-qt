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

#include "activategatewayresponse.h"
#include "activategatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  ActivateGatewayResponse
 *
 * @brief  Handles StorageGateway ActivateGateway responses.
 *
 * @see    StorageGatewayClient::activateGateway
 */

/**
 * @brief  Constructs a new ActivateGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ActivateGatewayResponse::ActivateGatewayResponse(
        const ActivateGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ActivateGatewayResponse(new ActivateGatewayResponsePrivate(this), parent)
{
    setRequest(new ActivateGatewayRequest(request));
    setReply(reply);
}

const ActivateGatewayRequest * ActivateGatewayResponse::request() const
{
    Q_D(const ActivateGatewayResponse);
    return static_cast<const ActivateGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ActivateGateway response.
 *
 * @param  response  Response to parse.
 */
void ActivateGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(ActivateGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ActivateGatewayResponsePrivate
 *
 * @brief  Private implementation for ActivateGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ActivateGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ActivateGatewayResponse instance.
 */
ActivateGatewayResponsePrivate::ActivateGatewayResponsePrivate(
    ActivateGatewayResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ActivateGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ActivateGatewayResponsePrivate::parseActivateGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateGatewayResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
