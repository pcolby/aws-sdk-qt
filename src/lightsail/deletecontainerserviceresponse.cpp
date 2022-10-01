// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontainerserviceresponse.h"
#include "deletecontainerserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::DeleteContainerServiceResponse
 * \brief The DeleteContainerServiceResponse class provides an interace for Lightsail DeleteContainerService responses.
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
 * \sa LightsailClient::deleteContainerService
 */

/*!
 * Constructs a DeleteContainerServiceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContainerServiceResponse::DeleteContainerServiceResponse(
        const DeleteContainerServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteContainerServiceResponsePrivate(this), parent)
{
    setRequest(new DeleteContainerServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContainerServiceRequest * DeleteContainerServiceResponse::request() const
{
    Q_D(const DeleteContainerServiceResponse);
    return static_cast<const DeleteContainerServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail DeleteContainerService \a response.
 */
void DeleteContainerServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContainerServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::DeleteContainerServiceResponsePrivate
 * \brief The DeleteContainerServiceResponsePrivate class provides private implementation for DeleteContainerServiceResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a DeleteContainerServiceResponsePrivate object with public implementation \a q.
 */
DeleteContainerServiceResponsePrivate::DeleteContainerServiceResponsePrivate(
    DeleteContainerServiceResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail DeleteContainerService response element from \a xml.
 */
void DeleteContainerServiceResponsePrivate::parseDeleteContainerServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContainerServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
