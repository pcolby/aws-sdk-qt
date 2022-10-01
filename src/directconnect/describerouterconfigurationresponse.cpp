// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
