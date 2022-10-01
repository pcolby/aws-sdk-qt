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

#include "confirmtransitvirtualinterfaceresponse.h"
#include "confirmtransitvirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmTransitVirtualInterfaceResponse
 * \brief The ConfirmTransitVirtualInterfaceResponse class provides an interace for DirectConnect ConfirmTransitVirtualInterface responses.
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
 * \sa DirectConnectClient::confirmTransitVirtualInterface
 */

/*!
 * Constructs a ConfirmTransitVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
ConfirmTransitVirtualInterfaceResponse::ConfirmTransitVirtualInterfaceResponse(
        const ConfirmTransitVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new ConfirmTransitVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new ConfirmTransitVirtualInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfirmTransitVirtualInterfaceRequest * ConfirmTransitVirtualInterfaceResponse::request() const
{
    Q_D(const ConfirmTransitVirtualInterfaceResponse);
    return static_cast<const ConfirmTransitVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect ConfirmTransitVirtualInterface \a response.
 */
void ConfirmTransitVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfirmTransitVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::ConfirmTransitVirtualInterfaceResponsePrivate
 * \brief The ConfirmTransitVirtualInterfaceResponsePrivate class provides private implementation for ConfirmTransitVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmTransitVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
ConfirmTransitVirtualInterfaceResponsePrivate::ConfirmTransitVirtualInterfaceResponsePrivate(
    ConfirmTransitVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect ConfirmTransitVirtualInterface response element from \a xml.
 */
void ConfirmTransitVirtualInterfaceResponsePrivate::parseConfirmTransitVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmTransitVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
