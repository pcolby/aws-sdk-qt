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

#include "deletevirtualinterfaceresponse.h"
#include "deletevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DeleteVirtualInterfaceResponse
 *
 * @brief  Handles DirectConnect DeleteVirtualInterface responses.
 *
 * @see    DirectConnectClient::deleteVirtualInterface
 */

/**
 * @brief  Constructs a new DeleteVirtualInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVirtualInterfaceResponse::DeleteVirtualInterfaceResponse(
        const DeleteVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new DeleteVirtualInterfaceRequest(request));
    setReply(reply);
}

const DeleteVirtualInterfaceRequest * DeleteVirtualInterfaceResponse::request() const
{
    Q_D(const DeleteVirtualInterfaceResponse);
    return static_cast<const DeleteVirtualInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DeleteVirtualInterface response.
 *
 * @param  response  Response to parse.
 */
void DeleteVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVirtualInterfaceResponsePrivate
 *
 * @brief  Private implementation for DeleteVirtualInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVirtualInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVirtualInterfaceResponse instance.
 */
DeleteVirtualInterfaceResponsePrivate::DeleteVirtualInterfaceResponsePrivate(
    DeleteVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DeleteVirtualInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVirtualInterfaceResponsePrivate::parseDeleteVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVirtualInterfaceResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
