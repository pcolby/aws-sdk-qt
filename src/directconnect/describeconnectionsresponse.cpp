// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconnectionsresponse.h"
#include "describeconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeConnectionsResponse
 * \brief The DescribeConnectionsResponse class provides an interace for DirectConnect DescribeConnections responses.
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
 * \sa DirectConnectClient::describeConnections
 */

/*!
 * Constructs a DescribeConnectionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConnectionsResponse::DescribeConnectionsResponse(
        const DescribeConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConnectionsRequest * DescribeConnectionsResponse::request() const
{
    Q_D(const DescribeConnectionsResponse);
    return static_cast<const DescribeConnectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeConnections \a response.
 */
void DescribeConnectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeConnectionsResponsePrivate
 * \brief The DescribeConnectionsResponsePrivate class provides private implementation for DescribeConnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeConnectionsResponsePrivate object with public implementation \a q.
 */
DescribeConnectionsResponsePrivate::DescribeConnectionsResponsePrivate(
    DescribeConnectionsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeConnections response element from \a xml.
 */
void DescribeConnectionsResponsePrivate::parseDescribeConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
