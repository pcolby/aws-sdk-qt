// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "allocatestaticipresponse.h"
#include "allocatestaticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::AllocateStaticIpResponse
 * \brief The AllocateStaticIpResponse class provides an interace for Lightsail AllocateStaticIp responses.
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
 * \sa LightsailClient::allocateStaticIp
 */

/*!
 * Constructs a AllocateStaticIpResponse object for \a reply to \a request, with parent \a parent.
 */
AllocateStaticIpResponse::AllocateStaticIpResponse(
        const AllocateStaticIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new AllocateStaticIpResponsePrivate(this), parent)
{
    setRequest(new AllocateStaticIpRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AllocateStaticIpRequest * AllocateStaticIpResponse::request() const
{
    Q_D(const AllocateStaticIpResponse);
    return static_cast<const AllocateStaticIpRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail AllocateStaticIp \a response.
 */
void AllocateStaticIpResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AllocateStaticIpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::AllocateStaticIpResponsePrivate
 * \brief The AllocateStaticIpResponsePrivate class provides private implementation for AllocateStaticIpResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a AllocateStaticIpResponsePrivate object with public implementation \a q.
 */
AllocateStaticIpResponsePrivate::AllocateStaticIpResponsePrivate(
    AllocateStaticIpResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail AllocateStaticIp response element from \a xml.
 */
void AllocateStaticIpResponsePrivate::parseAllocateStaticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateStaticIpResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
