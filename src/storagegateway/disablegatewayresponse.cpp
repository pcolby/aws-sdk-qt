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

#include "disablegatewayresponse.h"
#include "disablegatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DisableGatewayResponse
 *
 * @brief  Handles StorageGateway DisableGateway responses.
 *
 * @see    StorageGatewayClient::disableGateway
 */

/**
 * @brief  Constructs a new DisableGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableGatewayResponse::DisableGatewayResponse(
        const DisableGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisableGatewayResponse(new DisableGatewayResponsePrivate(this), parent)
{
    setRequest(new DisableGatewayRequest(request));
    setReply(reply);
}

const DisableGatewayRequest * DisableGatewayResponse::request() const
{
    Q_D(const DisableGatewayResponse);
    return static_cast<const DisableGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DisableGateway response.
 *
 * @param  response  Response to parse.
 */
void DisableGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableGatewayResponsePrivate
 *
 * @brief  Private implementation for DisableGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableGatewayResponse instance.
 */
DisableGatewayResponsePrivate::DisableGatewayResponsePrivate(
    DisableGatewayResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DisableGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableGatewayResponsePrivate::parseDisableGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableGatewayResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
