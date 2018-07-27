/*
    Copyright 2013-2018 Paul Colby

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

#include "deregisterinstanceresponse.h"
#include "deregisterinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::DeregisterInstanceResponse
 * \brief The DeregisterInstanceResponse class provides an interace for ServiceDiscovery DeregisterInstance responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::deregisterInstance
 */

/*!
 * Constructs a DeregisterInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterInstanceResponse::DeregisterInstanceResponse(
        const DeregisterInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new DeregisterInstanceResponsePrivate(this), parent)
{
    setRequest(new DeregisterInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterInstanceRequest * DeregisterInstanceResponse::request() const
{
    Q_D(const DeregisterInstanceResponse);
    return static_cast<const DeregisterInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery DeregisterInstance \a response.
 */
void DeregisterInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::DeregisterInstanceResponsePrivate
 * \brief The DeregisterInstanceResponsePrivate class provides private implementation for DeregisterInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a DeregisterInstanceResponsePrivate object with public implementation \a q.
 */
DeregisterInstanceResponsePrivate::DeregisterInstanceResponsePrivate(
    DeregisterInstanceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery DeregisterInstance response element from \a xml.
 */
void DeregisterInstanceResponsePrivate::parseDeregisterInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
