/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletevirtualinterfaceresponse.h"
#include "deletevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteVirtualInterfaceResponse
 * \brief The DeleteVirtualInterfaceResponse class provides an interace for DirectConnect DeleteVirtualInterface responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::deleteVirtualInterface
 */

/*!
 * Constructs a DeleteVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const DeleteVirtualInterfaceRequest * DeleteVirtualInterfaceResponse::request() const
{
    Q_D(const DeleteVirtualInterfaceResponse);
    return static_cast<const DeleteVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DeleteVirtualInterface \a response.
 */
void DeleteVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DeleteVirtualInterfaceResponsePrivate
 * \brief The DeleteVirtualInterfaceResponsePrivate class provides private implementation for DeleteVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
DeleteVirtualInterfaceResponsePrivate::DeleteVirtualInterfaceResponsePrivate(
    DeleteVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DeleteVirtualInterface response element from \a xml.
 */
void DeleteVirtualInterfaceResponsePrivate::parseDeleteVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
