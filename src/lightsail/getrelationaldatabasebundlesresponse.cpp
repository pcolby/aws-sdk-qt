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

#include "getrelationaldatabasebundlesresponse.h"
#include "getrelationaldatabasebundlesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetRelationalDatabaseBundlesResponse
 * \brief The GetRelationalDatabaseBundlesResponse class provides an interace for Lightsail GetRelationalDatabaseBundles responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (AWS) for developers who need to build
 *  websites or web applications. It includes everything you need to launch your project quickly - instances (virtual
 *  private servers), container services, managed databases, SSD-based block storage, static IP addresses, load balancers,
 *  content delivery network (CDN) distributions, DNS management of registered domains, and resource snapshots (backups) -
 *  for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported AWS Regions, endpoints, and service quotas of the Lightsail service,
 *  see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints and Quotas</a> in
 *  the <i>AWS General
 *
 * \sa LightsailClient::getRelationalDatabaseBundles
 */

/*!
 * Constructs a GetRelationalDatabaseBundlesResponse object for \a reply to \a request, with parent \a parent.
 */
GetRelationalDatabaseBundlesResponse::GetRelationalDatabaseBundlesResponse(
        const GetRelationalDatabaseBundlesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetRelationalDatabaseBundlesResponsePrivate(this), parent)
{
    setRequest(new GetRelationalDatabaseBundlesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRelationalDatabaseBundlesRequest * GetRelationalDatabaseBundlesResponse::request() const
{
    Q_D(const GetRelationalDatabaseBundlesResponse);
    return static_cast<const GetRelationalDatabaseBundlesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail GetRelationalDatabaseBundles \a response.
 */
void GetRelationalDatabaseBundlesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRelationalDatabaseBundlesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::GetRelationalDatabaseBundlesResponsePrivate
 * \brief The GetRelationalDatabaseBundlesResponsePrivate class provides private implementation for GetRelationalDatabaseBundlesResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetRelationalDatabaseBundlesResponsePrivate object with public implementation \a q.
 */
GetRelationalDatabaseBundlesResponsePrivate::GetRelationalDatabaseBundlesResponsePrivate(
    GetRelationalDatabaseBundlesResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail GetRelationalDatabaseBundles response element from \a xml.
 */
void GetRelationalDatabaseBundlesResponsePrivate::parseGetRelationalDatabaseBundlesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRelationalDatabaseBundlesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
