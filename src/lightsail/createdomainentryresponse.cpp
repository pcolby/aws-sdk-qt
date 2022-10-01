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

#include "createdomainentryresponse.h"
#include "createdomainentryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::CreateDomainEntryResponse
 * \brief The CreateDomainEntryResponse class provides an interace for Lightsail CreateDomainEntry responses.
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
 * \sa LightsailClient::createDomainEntry
 */

/*!
 * Constructs a CreateDomainEntryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDomainEntryResponse::CreateDomainEntryResponse(
        const CreateDomainEntryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateDomainEntryResponsePrivate(this), parent)
{
    setRequest(new CreateDomainEntryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDomainEntryRequest * CreateDomainEntryResponse::request() const
{
    Q_D(const CreateDomainEntryResponse);
    return static_cast<const CreateDomainEntryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail CreateDomainEntry \a response.
 */
void CreateDomainEntryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDomainEntryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::CreateDomainEntryResponsePrivate
 * \brief The CreateDomainEntryResponsePrivate class provides private implementation for CreateDomainEntryResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a CreateDomainEntryResponsePrivate object with public implementation \a q.
 */
CreateDomainEntryResponsePrivate::CreateDomainEntryResponsePrivate(
    CreateDomainEntryResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail CreateDomainEntry response element from \a xml.
 */
void CreateDomainEntryResponsePrivate::parseCreateDomainEntryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainEntryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
