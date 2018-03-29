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

#include "confirmconnectionresponse.h"
#include "confirmconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  ConfirmConnectionResponse
 *
 * @brief  Handles DirectConnect ConfirmConnection responses.
 *
 * @see    DirectConnectClient::confirmConnection
 */

/**
 * @brief  Constructs a new ConfirmConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfirmConnectionResponse::ConfirmConnectionResponse(
        const ConfirmConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new ConfirmConnectionResponsePrivate(this), parent)
{
    setRequest(new ConfirmConnectionRequest(request));
    setReply(reply);
}

const ConfirmConnectionRequest * ConfirmConnectionResponse::request() const
{
    Q_D(const ConfirmConnectionResponse);
    return static_cast<const ConfirmConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect ConfirmConnection response.
 *
 * @param  response  Response to parse.
 */
void ConfirmConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(ConfirmConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ConfirmConnectionResponsePrivate
 *
 * @brief  Private implementation for ConfirmConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConfirmConnectionResponse instance.
 */
ConfirmConnectionResponsePrivate::ConfirmConnectionResponsePrivate(
    ConfirmConnectionResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect ConfirmConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ConfirmConnectionResponsePrivate::parseConfirmConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmConnectionResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
