/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describerouterconfigurationresponse.h"
#include "describerouterconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeRouterConfigurationResponse
 * \brief The DescribeRouterConfigurationResponse class provides an interace for DirectConnect DescribeRouterConfiguration responses.
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
 * \sa DirectConnectClient::describeRouterConfiguration
 */

/*!
 * Constructs a DescribeRouterConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRouterConfigurationResponse::DescribeRouterConfigurationResponse(
        const DescribeRouterConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeRouterConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeRouterConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRouterConfigurationRequest * DescribeRouterConfigurationResponse::request() const
{
    Q_D(const DescribeRouterConfigurationResponse);
    return static_cast<const DescribeRouterConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeRouterConfiguration \a response.
 */
void DescribeRouterConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRouterConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeRouterConfigurationResponsePrivate
 * \brief The DescribeRouterConfigurationResponsePrivate class provides private implementation for DescribeRouterConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeRouterConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeRouterConfigurationResponsePrivate::DescribeRouterConfigurationResponsePrivate(
    DescribeRouterConfigurationResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeRouterConfiguration response element from \a xml.
 */
void DescribeRouterConfigurationResponsePrivate::parseDescribeRouterConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRouterConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
