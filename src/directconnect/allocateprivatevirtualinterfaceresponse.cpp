// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "allocateprivatevirtualinterfaceresponse.h"
#include "allocateprivatevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocatePrivateVirtualInterfaceResponse
 * \brief The AllocatePrivateVirtualInterfaceResponse class provides an interace for DirectConnect AllocatePrivateVirtualInterface responses.
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
 * \sa DirectConnectClient::allocatePrivateVirtualInterface
 */

/*!
 * Constructs a AllocatePrivateVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
AllocatePrivateVirtualInterfaceResponse::AllocatePrivateVirtualInterfaceResponse(
        const AllocatePrivateVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AllocatePrivateVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new AllocatePrivateVirtualInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AllocatePrivateVirtualInterfaceRequest * AllocatePrivateVirtualInterfaceResponse::request() const
{
    Q_D(const AllocatePrivateVirtualInterfaceResponse);
    return static_cast<const AllocatePrivateVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect AllocatePrivateVirtualInterface \a response.
 */
void AllocatePrivateVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AllocatePrivateVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::AllocatePrivateVirtualInterfaceResponsePrivate
 * \brief The AllocatePrivateVirtualInterfaceResponsePrivate class provides private implementation for AllocatePrivateVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AllocatePrivateVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
AllocatePrivateVirtualInterfaceResponsePrivate::AllocatePrivateVirtualInterfaceResponsePrivate(
    AllocatePrivateVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect AllocatePrivateVirtualInterface response element from \a xml.
 */
void AllocatePrivateVirtualInterfaceResponsePrivate::parseAllocatePrivateVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocatePrivateVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
