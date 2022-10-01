// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateconnectionwithlagresponse.h"
#include "associateconnectionwithlagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AssociateConnectionWithLagResponse
 * \brief The AssociateConnectionWithLagResponse class provides an interace for DirectConnect AssociateConnectionWithLag responses.
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
 * \sa DirectConnectClient::associateConnectionWithLag
 */

/*!
 * Constructs a AssociateConnectionWithLagResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateConnectionWithLagResponse::AssociateConnectionWithLagResponse(
        const AssociateConnectionWithLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AssociateConnectionWithLagResponsePrivate(this), parent)
{
    setRequest(new AssociateConnectionWithLagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateConnectionWithLagRequest * AssociateConnectionWithLagResponse::request() const
{
    Q_D(const AssociateConnectionWithLagResponse);
    return static_cast<const AssociateConnectionWithLagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect AssociateConnectionWithLag \a response.
 */
void AssociateConnectionWithLagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateConnectionWithLagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::AssociateConnectionWithLagResponsePrivate
 * \brief The AssociateConnectionWithLagResponsePrivate class provides private implementation for AssociateConnectionWithLagResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AssociateConnectionWithLagResponsePrivate object with public implementation \a q.
 */
AssociateConnectionWithLagResponsePrivate::AssociateConnectionWithLagResponsePrivate(
    AssociateConnectionWithLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect AssociateConnectionWithLag response element from \a xml.
 */
void AssociateConnectionWithLagResponsePrivate::parseAssociateConnectionWithLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateConnectionWithLagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
