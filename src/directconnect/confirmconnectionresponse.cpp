// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmconnectionresponse.h"
#include "confirmconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmConnectionResponse
 * \brief The ConfirmConnectionResponse class provides an interace for DirectConnect ConfirmConnection responses.
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
 * \sa DirectConnectClient::confirmConnection
 */

/*!
 * Constructs a ConfirmConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
ConfirmConnectionResponse::ConfirmConnectionResponse(
        const ConfirmConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new ConfirmConnectionResponsePrivate(this), parent)
{
    setRequest(new ConfirmConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfirmConnectionRequest * ConfirmConnectionResponse::request() const
{
    Q_D(const ConfirmConnectionResponse);
    return static_cast<const ConfirmConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect ConfirmConnection \a response.
 */
void ConfirmConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfirmConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::ConfirmConnectionResponsePrivate
 * \brief The ConfirmConnectionResponsePrivate class provides private implementation for ConfirmConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmConnectionResponsePrivate object with public implementation \a q.
 */
ConfirmConnectionResponsePrivate::ConfirmConnectionResponsePrivate(
    ConfirmConnectionResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect ConfirmConnection response element from \a xml.
 */
void ConfirmConnectionResponsePrivate::parseConfirmConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
