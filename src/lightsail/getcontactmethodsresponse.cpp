// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactmethodsresponse.h"
#include "getcontactmethodsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetContactMethodsResponse
 * \brief The GetContactMethodsResponse class provides an interace for Lightsail GetContactMethods responses.
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
 * \sa LightsailClient::getContactMethods
 */

/*!
 * Constructs a GetContactMethodsResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactMethodsResponse::GetContactMethodsResponse(
        const GetContactMethodsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetContactMethodsResponsePrivate(this), parent)
{
    setRequest(new GetContactMethodsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactMethodsRequest * GetContactMethodsResponse::request() const
{
    Q_D(const GetContactMethodsResponse);
    return static_cast<const GetContactMethodsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail GetContactMethods \a response.
 */
void GetContactMethodsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactMethodsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::GetContactMethodsResponsePrivate
 * \brief The GetContactMethodsResponsePrivate class provides private implementation for GetContactMethodsResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetContactMethodsResponsePrivate object with public implementation \a q.
 */
GetContactMethodsResponsePrivate::GetContactMethodsResponsePrivate(
    GetContactMethodsResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail GetContactMethods response element from \a xml.
 */
void GetContactMethodsResponsePrivate::parseGetContactMethodsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactMethodsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
