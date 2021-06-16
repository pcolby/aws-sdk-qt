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

#include "deletecontainerimageresponse.h"
#include "deletecontainerimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::DeleteContainerImageResponse
 * \brief The DeleteContainerImageResponse class provides an interace for Lightsail DeleteContainerImage responses.
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
 * \sa LightsailClient::deleteContainerImage
 */

/*!
 * Constructs a DeleteContainerImageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContainerImageResponse::DeleteContainerImageResponse(
        const DeleteContainerImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteContainerImageResponsePrivate(this), parent)
{
    setRequest(new DeleteContainerImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContainerImageRequest * DeleteContainerImageResponse::request() const
{
    Q_D(const DeleteContainerImageResponse);
    return static_cast<const DeleteContainerImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail DeleteContainerImage \a response.
 */
void DeleteContainerImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContainerImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::DeleteContainerImageResponsePrivate
 * \brief The DeleteContainerImageResponsePrivate class provides private implementation for DeleteContainerImageResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a DeleteContainerImageResponsePrivate object with public implementation \a q.
 */
DeleteContainerImageResponsePrivate::DeleteContainerImageResponsePrivate(
    DeleteContainerImageResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail DeleteContainerImage response element from \a xml.
 */
void DeleteContainerImageResponsePrivate::parseDeleteContainerImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContainerImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
