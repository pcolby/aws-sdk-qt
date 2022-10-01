// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "allocateconnectiononinterconnectresponse.h"
#include "allocateconnectiononinterconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocateConnectionOnInterconnectResponse
 * \brief The AllocateConnectionOnInterconnectResponse class provides an interace for DirectConnect AllocateConnectionOnInterconnect responses.
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
 * \sa DirectConnectClient::allocateConnectionOnInterconnect
 */

/*!
 * Constructs a AllocateConnectionOnInterconnectResponse object for \a reply to \a request, with parent \a parent.
 */
AllocateConnectionOnInterconnectResponse::AllocateConnectionOnInterconnectResponse(
        const AllocateConnectionOnInterconnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AllocateConnectionOnInterconnectResponsePrivate(this), parent)
{
    setRequest(new AllocateConnectionOnInterconnectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AllocateConnectionOnInterconnectRequest * AllocateConnectionOnInterconnectResponse::request() const
{
    Q_D(const AllocateConnectionOnInterconnectResponse);
    return static_cast<const AllocateConnectionOnInterconnectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect AllocateConnectionOnInterconnect \a response.
 */
void AllocateConnectionOnInterconnectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AllocateConnectionOnInterconnectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::AllocateConnectionOnInterconnectResponsePrivate
 * \brief The AllocateConnectionOnInterconnectResponsePrivate class provides private implementation for AllocateConnectionOnInterconnectResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AllocateConnectionOnInterconnectResponsePrivate object with public implementation \a q.
 */
AllocateConnectionOnInterconnectResponsePrivate::AllocateConnectionOnInterconnectResponsePrivate(
    AllocateConnectionOnInterconnectResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect AllocateConnectionOnInterconnect response element from \a xml.
 */
void AllocateConnectionOnInterconnectResponsePrivate::parseAllocateConnectionOnInterconnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateConnectionOnInterconnectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
