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

#include "associatevirtualinterfaceresponse.h"
#include "associatevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  AssociateVirtualInterfaceResponse
 *
 * @brief  Handles DirectConnect AssociateVirtualInterface responses.
 *
 * @see    DirectConnectClient::associateVirtualInterface
 */

/**
 * @brief  Constructs a new AssociateVirtualInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateVirtualInterfaceResponse::AssociateVirtualInterfaceResponse(
        const AssociateVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AssociateVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new AssociateVirtualInterfaceRequest(request));
    setReply(reply);
}

const AssociateVirtualInterfaceRequest * AssociateVirtualInterfaceResponse::request() const
{
    Q_D(const AssociateVirtualInterfaceResponse);
    return static_cast<const AssociateVirtualInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect AssociateVirtualInterface response.
 *
 * @param  response  Response to parse.
 */
void AssociateVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateVirtualInterfaceResponsePrivate
 *
 * @brief  Private implementation for AssociateVirtualInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateVirtualInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateVirtualInterfaceResponse instance.
 */
AssociateVirtualInterfaceResponsePrivate::AssociateVirtualInterfaceResponsePrivate(
    AssociateVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect AssociateVirtualInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateVirtualInterfaceResponsePrivate::AssociateVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateVirtualInterfaceResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
