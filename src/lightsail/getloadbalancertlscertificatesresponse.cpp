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
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, a managed database, SSD-based
 *  storage, data transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail
 *  servers through the Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
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
