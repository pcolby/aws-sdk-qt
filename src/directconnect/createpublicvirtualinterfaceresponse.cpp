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

#include "createpublicvirtualinterfaceresponse.h"
#include "createpublicvirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreatePublicVirtualInterfaceResponse
 *
 * @brief  Handles DirectConnect CreatePublicVirtualInterface responses.
 *
 * @see    DirectConnectClient::createPublicVirtualInterface
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePublicVirtualInterfaceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreatePublicVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new CreatePublicVirtualInterfaceRequest(request));
    setReply(reply);
}

const CreatePublicVirtualInterfaceRequest * CreatePublicVirtualInterfaceResponse::request() const
{
    Q_D(const CreatePublicVirtualInterfaceResponse);
    return static_cast<const CreatePublicVirtualInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect CreatePublicVirtualInterface response.
 *
 * @param  response  Response to parse.
 */
void CreatePublicVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePublicVirtualInterfaceResponsePrivate
 *
 * @brief  Private implementation for CreatePublicVirtualInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePublicVirtualInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePublicVirtualInterfaceResponse instance.
 */
CreatePublicVirtualInterfaceResponsePrivate::CreatePublicVirtualInterfaceResponsePrivate(
    CreatePublicVirtualInterfaceQueueResponse * const q) : CreatePublicVirtualInterfacePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect CreatePublicVirtualInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePublicVirtualInterfaceResponsePrivate::CreatePublicVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePublicVirtualInterfaceResponse"));
    /// @todo
}
