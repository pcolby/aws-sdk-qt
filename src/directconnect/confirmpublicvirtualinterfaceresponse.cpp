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

#include "confirmpublicvirtualinterfaceresponse.h"
#include "confirmpublicvirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  ConfirmPublicVirtualInterfaceResponse
 *
 * @brief  Handles DirectConnect ConfirmPublicVirtualInterface responses.
 *
 * @see    DirectConnectClient::confirmPublicVirtualInterface
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfirmPublicVirtualInterfaceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new ConfirmPublicVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new ConfirmPublicVirtualInterfaceRequest(request));
    setReply(reply);
}

const ConfirmPublicVirtualInterfaceRequest * ConfirmPublicVirtualInterfaceResponse::request() const
{
    Q_D(const ConfirmPublicVirtualInterfaceResponse);
    return static_cast<const ConfirmPublicVirtualInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect ConfirmPublicVirtualInterface response.
 *
 * @param  response  Response to parse.
 */
void ConfirmPublicVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ConfirmPublicVirtualInterfaceResponsePrivate
 *
 * @brief  Private implementation for ConfirmPublicVirtualInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmPublicVirtualInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConfirmPublicVirtualInterfaceResponse instance.
 */
ConfirmPublicVirtualInterfaceResponsePrivate::ConfirmPublicVirtualInterfaceResponsePrivate(
    ConfirmPublicVirtualInterfaceQueueResponse * const q) : ConfirmPublicVirtualInterfacePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect ConfirmPublicVirtualInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ConfirmPublicVirtualInterfaceResponsePrivate::ConfirmPublicVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmPublicVirtualInterfaceResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
