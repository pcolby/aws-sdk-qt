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

#include "allocatepublicvirtualinterfaceresponse.h"
#include "allocatepublicvirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  AllocatePublicVirtualInterfaceResponse
 *
 * @brief  Handles DirectConnect AllocatePublicVirtualInterface responses.
 *
 * @see    DirectConnectClient::allocatePublicVirtualInterface
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocatePublicVirtualInterfaceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AllocatePublicVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new AllocatePublicVirtualInterfaceRequest(request));
    setReply(reply);
}

const AllocatePublicVirtualInterfaceRequest * AllocatePublicVirtualInterfaceResponse::request() const
{
    Q_D(const AllocatePublicVirtualInterfaceResponse);
    return static_cast<const AllocatePublicVirtualInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect AllocatePublicVirtualInterface response.
 *
 * @param  response  Response to parse.
 */
void AllocatePublicVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AllocatePublicVirtualInterfaceResponsePrivate
 *
 * @brief  Private implementation for AllocatePublicVirtualInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocatePublicVirtualInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AllocatePublicVirtualInterfaceResponse instance.
 */
AllocatePublicVirtualInterfaceResponsePrivate::AllocatePublicVirtualInterfaceResponsePrivate(
    AllocatePublicVirtualInterfaceQueueResponse * const q) : AllocatePublicVirtualInterfacePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect AllocatePublicVirtualInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AllocatePublicVirtualInterfaceResponsePrivate::AllocatePublicVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocatePublicVirtualInterfaceResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
