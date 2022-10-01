// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehostedconnectionsresponse.h"
#include "describehostedconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeHostedConnectionsResponse
 * \brief The DescribeHostedConnectionsResponse class provides an interace for DirectConnect DescribeHostedConnections responses.
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
 * \sa DirectConnectClient::describeHostedConnections
 */

/*!
 * Constructs a DescribeHostedConnectionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHostedConnectionsResponse::DescribeHostedConnectionsResponse(
        const DescribeHostedConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeHostedConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeHostedConnectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHostedConnectionsRequest * DescribeHostedConnectionsResponse::request() const
{
    Q_D(const DescribeHostedConnectionsResponse);
    return static_cast<const DescribeHostedConnectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeHostedConnections \a response.
 */
void DescribeHostedConnectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHostedConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeHostedConnectionsResponsePrivate
 * \brief The DescribeHostedConnectionsResponsePrivate class provides private implementation for DescribeHostedConnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeHostedConnectionsResponsePrivate object with public implementation \a q.
 */
DescribeHostedConnectionsResponsePrivate::DescribeHostedConnectionsResponsePrivate(
    DescribeHostedConnectionsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeHostedConnections response element from \a xml.
 */
void DescribeHostedConnectionsResponsePrivate::parseDescribeHostedConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHostedConnectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
