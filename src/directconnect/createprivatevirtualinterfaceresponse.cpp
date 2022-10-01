// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprivatevirtualinterfaceresponse.h"
#include "createprivatevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreatePrivateVirtualInterfaceResponse
 * \brief The CreatePrivateVirtualInterfaceResponse class provides an interace for DirectConnect CreatePrivateVirtualInterface responses.
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
 * \sa DirectConnectClient::createPrivateVirtualInterface
 */

/*!
 * Constructs a CreatePrivateVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePrivateVirtualInterfaceResponse::CreatePrivateVirtualInterfaceResponse(
        const CreatePrivateVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreatePrivateVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new CreatePrivateVirtualInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePrivateVirtualInterfaceRequest * CreatePrivateVirtualInterfaceResponse::request() const
{
    Q_D(const CreatePrivateVirtualInterfaceResponse);
    return static_cast<const CreatePrivateVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreatePrivateVirtualInterface \a response.
 */
void CreatePrivateVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePrivateVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreatePrivateVirtualInterfaceResponsePrivate
 * \brief The CreatePrivateVirtualInterfaceResponsePrivate class provides private implementation for CreatePrivateVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreatePrivateVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
CreatePrivateVirtualInterfaceResponsePrivate::CreatePrivateVirtualInterfaceResponsePrivate(
    CreatePrivateVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreatePrivateVirtualInterface response element from \a xml.
 */
void CreatePrivateVirtualInterfaceResponsePrivate::parseCreatePrivateVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePrivateVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
