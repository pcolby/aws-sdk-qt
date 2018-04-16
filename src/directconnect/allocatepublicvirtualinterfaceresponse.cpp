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

#include "allocatepublicvirtualinterfaceresponse.h"
#include "allocatepublicvirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocatePublicVirtualInterfaceResponse
 *
 * \brief The AllocatePublicVirtualInterfaceResponse class encapsulates DirectConnect AllocatePublicVirtualInterface responses.
 *
 * \ingroup DirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::allocatePublicVirtualInterface
 */

/*!
 * @brief  Constructs a new AllocatePublicVirtualInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocatePublicVirtualInterfaceResponse::AllocatePublicVirtualInterfaceResponse(
        const AllocatePublicVirtualInterfaceRequest &request,
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

/*!
 * @brief  Parse a DirectConnect AllocatePublicVirtualInterface response.
 *
 * @param  response  Response to parse.
 */
void AllocatePublicVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(AllocatePublicVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AllocatePublicVirtualInterfaceResponsePrivate
 *
 * \brief Private implementation for AllocatePublicVirtualInterfaceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AllocatePublicVirtualInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AllocatePublicVirtualInterfaceResponse instance.
 */
AllocatePublicVirtualInterfaceResponsePrivate::AllocatePublicVirtualInterfaceResponsePrivate(
    AllocatePublicVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DirectConnect AllocatePublicVirtualInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AllocatePublicVirtualInterfaceResponsePrivate::parseAllocatePublicVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocatePublicVirtualInterfaceResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
