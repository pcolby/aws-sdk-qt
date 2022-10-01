// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creatediskresponse.h"
#include "creatediskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::CreateDiskResponse
 * \brief The CreateDiskResponse class provides an interace for Lightsail CreateDisk responses.
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
 * \sa LightsailClient::createDisk
 */

/*!
 * Constructs a CreateDiskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDiskResponse::CreateDiskResponse(
        const CreateDiskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateDiskResponsePrivate(this), parent)
{
    setRequest(new CreateDiskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDiskRequest * CreateDiskResponse::request() const
{
    Q_D(const CreateDiskResponse);
    return static_cast<const CreateDiskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail CreateDisk \a response.
 */
void CreateDiskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDiskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::CreateDiskResponsePrivate
 * \brief The CreateDiskResponsePrivate class provides private implementation for CreateDiskResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a CreateDiskResponsePrivate object with public implementation \a q.
 */
CreateDiskResponsePrivate::CreateDiskResponsePrivate(
    CreateDiskResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail CreateDisk response element from \a xml.
 */
void CreateDiskResponsePrivate::parseCreateDiskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDiskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
