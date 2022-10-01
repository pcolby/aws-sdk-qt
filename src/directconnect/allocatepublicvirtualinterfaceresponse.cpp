// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "allocatepublicvirtualinterfaceresponse.h"
#include "allocatepublicvirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocatePublicVirtualInterfaceResponse
 * \brief The AllocatePublicVirtualInterfaceResponse class provides an interace for DirectConnect AllocatePublicVirtualInterface responses.
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
 * \sa DirectConnectClient::allocatePublicVirtualInterface
 */

/*!
 * Constructs a AllocatePublicVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const AllocatePublicVirtualInterfaceRequest * AllocatePublicVirtualInterfaceResponse::request() const
{
    Q_D(const AllocatePublicVirtualInterfaceResponse);
    return static_cast<const AllocatePublicVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect AllocatePublicVirtualInterface \a response.
 */
void AllocatePublicVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AllocatePublicVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::AllocatePublicVirtualInterfaceResponsePrivate
 * \brief The AllocatePublicVirtualInterfaceResponsePrivate class provides private implementation for AllocatePublicVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AllocatePublicVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
AllocatePublicVirtualInterfaceResponsePrivate::AllocatePublicVirtualInterfaceResponsePrivate(
    AllocatePublicVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect AllocatePublicVirtualInterface response element from \a xml.
 */
void AllocatePublicVirtualInterfaceResponsePrivate::parseAllocatePublicVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocatePublicVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
