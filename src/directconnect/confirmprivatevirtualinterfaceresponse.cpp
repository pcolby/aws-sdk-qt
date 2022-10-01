// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmprivatevirtualinterfaceresponse.h"
#include "confirmprivatevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmPrivateVirtualInterfaceResponse
 * \brief The ConfirmPrivateVirtualInterfaceResponse class provides an interace for DirectConnect ConfirmPrivateVirtualInterface responses.
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
 * \sa DirectConnectClient::confirmPrivateVirtualInterface
 */

/*!
 * Constructs a ConfirmPrivateVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
ConfirmPrivateVirtualInterfaceResponse::ConfirmPrivateVirtualInterfaceResponse(
        const ConfirmPrivateVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new ConfirmPrivateVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new ConfirmPrivateVirtualInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfirmPrivateVirtualInterfaceRequest * ConfirmPrivateVirtualInterfaceResponse::request() const
{
    Q_D(const ConfirmPrivateVirtualInterfaceResponse);
    return static_cast<const ConfirmPrivateVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect ConfirmPrivateVirtualInterface \a response.
 */
void ConfirmPrivateVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfirmPrivateVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::ConfirmPrivateVirtualInterfaceResponsePrivate
 * \brief The ConfirmPrivateVirtualInterfaceResponsePrivate class provides private implementation for ConfirmPrivateVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmPrivateVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
ConfirmPrivateVirtualInterfaceResponsePrivate::ConfirmPrivateVirtualInterfaceResponsePrivate(
    ConfirmPrivateVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect ConfirmPrivateVirtualInterface response element from \a xml.
 */
void ConfirmPrivateVirtualInterfaceResponsePrivate::parseConfirmPrivateVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmPrivateVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
