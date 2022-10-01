// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtransitvirtualinterfaceresponse.h"
#include "createtransitvirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateTransitVirtualInterfaceResponse
 * \brief The CreateTransitVirtualInterfaceResponse class provides an interace for DirectConnect CreateTransitVirtualInterface responses.
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
 * \sa DirectConnectClient::createTransitVirtualInterface
 */

/*!
 * Constructs a CreateTransitVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTransitVirtualInterfaceResponse::CreateTransitVirtualInterfaceResponse(
        const CreateTransitVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateTransitVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new CreateTransitVirtualInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTransitVirtualInterfaceRequest * CreateTransitVirtualInterfaceResponse::request() const
{
    Q_D(const CreateTransitVirtualInterfaceResponse);
    return static_cast<const CreateTransitVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreateTransitVirtualInterface \a response.
 */
void CreateTransitVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTransitVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreateTransitVirtualInterfaceResponsePrivate
 * \brief The CreateTransitVirtualInterfaceResponsePrivate class provides private implementation for CreateTransitVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateTransitVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
CreateTransitVirtualInterfaceResponsePrivate::CreateTransitVirtualInterfaceResponsePrivate(
    CreateTransitVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreateTransitVirtualInterface response element from \a xml.
 */
void CreateTransitVirtualInterfaceResponsePrivate::parseCreateTransitVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTransitVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
