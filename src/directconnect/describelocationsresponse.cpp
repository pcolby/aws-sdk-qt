// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationsresponse.h"
#include "describelocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeLocationsResponse
 * \brief The DescribeLocationsResponse class provides an interace for DirectConnect DescribeLocations responses.
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
 * \sa DirectConnectClient::describeLocations
 */

/*!
 * Constructs a DescribeLocationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationsResponse::DescribeLocationsResponse(
        const DescribeLocationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeLocationsResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationsRequest * DescribeLocationsResponse::request() const
{
    Q_D(const DescribeLocationsResponse);
    return static_cast<const DescribeLocationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeLocations \a response.
 */
void DescribeLocationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeLocationsResponsePrivate
 * \brief The DescribeLocationsResponsePrivate class provides private implementation for DescribeLocationsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeLocationsResponsePrivate object with public implementation \a q.
 */
DescribeLocationsResponsePrivate::DescribeLocationsResponsePrivate(
    DescribeLocationsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeLocations response element from \a xml.
 */
void DescribeLocationsResponsePrivate::parseDescribeLocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
