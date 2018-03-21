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

#include "allocateprivatevirtualinterfaceresponse.h"
#include "allocateprivatevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  AllocatePrivateVirtualInterfaceResponse
 *
 * @brief  Handles DirectConnect AllocatePrivateVirtualInterface responses.
 *
 * @see    DirectConnectClient::allocatePrivateVirtualInterface
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocatePrivateVirtualInterfaceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AllocatePrivateVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new AllocatePrivateVirtualInterfaceRequest(request));
    setReply(reply);
}

const AllocatePrivateVirtualInterfaceRequest * AllocatePrivateVirtualInterfaceResponse::request() const
{
    Q_D(const AllocatePrivateVirtualInterfaceResponse);
    return static_cast<const AllocatePrivateVirtualInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect AllocatePrivateVirtualInterface response.
 *
 * @param  response  Response to parse.
 */
void AllocatePrivateVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AllocatePrivateVirtualInterfaceResponsePrivate
 *
 * @brief  Private implementation for AllocatePrivateVirtualInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocatePrivateVirtualInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AllocatePrivateVirtualInterfaceResponse instance.
 */
AllocatePrivateVirtualInterfaceResponsePrivate::AllocatePrivateVirtualInterfaceResponsePrivate(
    AllocatePrivateVirtualInterfaceQueueResponse * const q) : AllocatePrivateVirtualInterfacePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect AllocatePrivateVirtualInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AllocatePrivateVirtualInterfaceResponsePrivate::AllocatePrivateVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocatePrivateVirtualInterfaceResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
