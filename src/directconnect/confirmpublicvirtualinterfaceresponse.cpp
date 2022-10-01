// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmpublicvirtualinterfaceresponse.h"
#include "confirmpublicvirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmPublicVirtualInterfaceResponse
 * \brief The ConfirmPublicVirtualInterfaceResponse class provides an interace for DirectConnect ConfirmPublicVirtualInterface responses.
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
 * \sa DirectConnectClient::confirmPublicVirtualInterface
 */

/*!
 * Constructs a ConfirmPublicVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
ConfirmPublicVirtualInterfaceResponse::ConfirmPublicVirtualInterfaceResponse(
        const ConfirmPublicVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new ConfirmPublicVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new ConfirmPublicVirtualInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfirmPublicVirtualInterfaceRequest * ConfirmPublicVirtualInterfaceResponse::request() const
{
    Q_D(const ConfirmPublicVirtualInterfaceResponse);
    return static_cast<const ConfirmPublicVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect ConfirmPublicVirtualInterface \a response.
 */
void ConfirmPublicVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfirmPublicVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::ConfirmPublicVirtualInterfaceResponsePrivate
 * \brief The ConfirmPublicVirtualInterfaceResponsePrivate class provides private implementation for ConfirmPublicVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmPublicVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
ConfirmPublicVirtualInterfaceResponsePrivate::ConfirmPublicVirtualInterfaceResponsePrivate(
    ConfirmPublicVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect ConfirmPublicVirtualInterface response element from \a xml.
 */
void ConfirmPublicVirtualInterfaceResponsePrivate::parseConfirmPublicVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmPublicVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
