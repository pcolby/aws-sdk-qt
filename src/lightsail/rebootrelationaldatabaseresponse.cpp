// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootrelationaldatabaseresponse.h"
#include "rebootrelationaldatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::RebootRelationalDatabaseResponse
 * \brief The RebootRelationalDatabaseResponse class provides an interace for Lightsail RebootRelationalDatabase responses.
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
 * \sa LightsailClient::rebootRelationalDatabase
 */

/*!
 * Constructs a RebootRelationalDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
RebootRelationalDatabaseResponse::RebootRelationalDatabaseResponse(
        const RebootRelationalDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new RebootRelationalDatabaseResponsePrivate(this), parent)
{
    setRequest(new RebootRelationalDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootRelationalDatabaseRequest * RebootRelationalDatabaseResponse::request() const
{
    Q_D(const RebootRelationalDatabaseResponse);
    return static_cast<const RebootRelationalDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail RebootRelationalDatabase \a response.
 */
void RebootRelationalDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootRelationalDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::RebootRelationalDatabaseResponsePrivate
 * \brief The RebootRelationalDatabaseResponsePrivate class provides private implementation for RebootRelationalDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a RebootRelationalDatabaseResponsePrivate object with public implementation \a q.
 */
RebootRelationalDatabaseResponsePrivate::RebootRelationalDatabaseResponsePrivate(
    RebootRelationalDatabaseResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail RebootRelationalDatabase response element from \a xml.
 */
void RebootRelationalDatabaseResponsePrivate::parseRebootRelationalDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootRelationalDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
