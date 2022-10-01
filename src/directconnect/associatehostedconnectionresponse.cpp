// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatehostedconnectionresponse.h"
#include "associatehostedconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AssociateHostedConnectionResponse
 * \brief The AssociateHostedConnectionResponse class provides an interace for DirectConnect AssociateHostedConnection responses.
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
 * \sa DirectConnectClient::associateHostedConnection
 */

/*!
 * Constructs a AssociateHostedConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateHostedConnectionResponse::AssociateHostedConnectionResponse(
        const AssociateHostedConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AssociateHostedConnectionResponsePrivate(this), parent)
{
    setRequest(new AssociateHostedConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateHostedConnectionRequest * AssociateHostedConnectionResponse::request() const
{
    Q_D(const AssociateHostedConnectionResponse);
    return static_cast<const AssociateHostedConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect AssociateHostedConnection \a response.
 */
void AssociateHostedConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateHostedConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::AssociateHostedConnectionResponsePrivate
 * \brief The AssociateHostedConnectionResponsePrivate class provides private implementation for AssociateHostedConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AssociateHostedConnectionResponsePrivate object with public implementation \a q.
 */
AssociateHostedConnectionResponsePrivate::AssociateHostedConnectionResponsePrivate(
    AssociateHostedConnectionResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect AssociateHostedConnection response element from \a xml.
 */
void AssociateHostedConnectionResponsePrivate::parseAssociateHostedConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateHostedConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
