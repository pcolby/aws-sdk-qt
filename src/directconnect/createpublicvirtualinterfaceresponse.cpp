// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpublicvirtualinterfaceresponse.h"
#include "createpublicvirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreatePublicVirtualInterfaceResponse
 * \brief The CreatePublicVirtualInterfaceResponse class provides an interace for DirectConnect CreatePublicVirtualInterface responses.
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
 * \sa DirectConnectClient::createPublicVirtualInterface
 */

/*!
 * Constructs a CreatePublicVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePublicVirtualInterfaceResponse::CreatePublicVirtualInterfaceResponse(
        const CreatePublicVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreatePublicVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new CreatePublicVirtualInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePublicVirtualInterfaceRequest * CreatePublicVirtualInterfaceResponse::request() const
{
    Q_D(const CreatePublicVirtualInterfaceResponse);
    return static_cast<const CreatePublicVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreatePublicVirtualInterface \a response.
 */
void CreatePublicVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePublicVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreatePublicVirtualInterfaceResponsePrivate
 * \brief The CreatePublicVirtualInterfaceResponsePrivate class provides private implementation for CreatePublicVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreatePublicVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
CreatePublicVirtualInterfaceResponsePrivate::CreatePublicVirtualInterfaceResponsePrivate(
    CreatePublicVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreatePublicVirtualInterface response element from \a xml.
 */
void CreatePublicVirtualInterfaceResponsePrivate::parseCreatePublicVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePublicVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
