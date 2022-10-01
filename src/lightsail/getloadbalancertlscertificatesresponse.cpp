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

#include "getloadbalancertlscertificatesresponse.h"
#include "getloadbalancertlscertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetLoadBalancerTlsCertificatesResponse
 * \brief The GetLoadBalancerTlsCertificatesResponse class provides an interace for Lightsail GetLoadBalancerTlsCertificates responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (Amazon Web Services) for developers who
 *  need to build websites or web applications. It includes everything you need to launch your project quickly - instances
 *  (virtual private servers), container services, storage buckets, managed databases, SSD-based block storage, static IP
 *  addresses, load balancers, content delivery network (CDN) distributions, DNS management of registered domains, and
 *  resource snapshots (backups) - for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
 *  Lightsail Developer
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Lightsail service, see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints
 *  and Quotas</a> in the <i>Amazon Web Services General
 *
 * \sa LightsailClient::getLoadBalancerTlsCertificates
 */

/*!
 * Constructs a GetLoadBalancerTlsCertificatesResponse object for \a reply to \a request, with parent \a parent.
 */
GetLoadBalancerTlsCertificatesResponse::GetLoadBalancerTlsCertificatesResponse(
        const GetLoadBalancerTlsCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetLoadBalancerTlsCertificatesResponsePrivate(this), parent)
{
    setRequest(new GetLoadBalancerTlsCertificatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLoadBalancerTlsCertificatesRequest * GetLoadBalancerTlsCertificatesResponse::request() const
{
    Q_D(const GetLoadBalancerTlsCertificatesResponse);
    return static_cast<const GetLoadBalancerTlsCertificatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail GetLoadBalancerTlsCertificates \a response.
 */
void GetLoadBalancerTlsCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLoadBalancerTlsCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::GetLoadBalancerTlsCertificatesResponsePrivate
 * \brief The GetLoadBalancerTlsCertificatesResponsePrivate class provides private implementation for GetLoadBalancerTlsCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetLoadBalancerTlsCertificatesResponsePrivate object with public implementation \a q.
 */
GetLoadBalancerTlsCertificatesResponsePrivate::GetLoadBalancerTlsCertificatesResponsePrivate(
    GetLoadBalancerTlsCertificatesResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail GetLoadBalancerTlsCertificates response element from \a xml.
 */
void GetLoadBalancerTlsCertificatesResponsePrivate::parseGetLoadBalancerTlsCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoadBalancerTlsCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
