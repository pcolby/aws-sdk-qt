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

#include "discoverinstancesresponse.h"
#include "discoverinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::DiscoverInstancesResponse
 * \brief The DiscoverInstancesResponse class provides an interace for ServiceDiscovery DiscoverInstances responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  With AWS Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications
 *  run in. When an instance becomes available, you can call the AWS Cloud Map API to register the instance with AWS Cloud
 *  Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health check.
 *  Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up
 *  to eight healthy records.
 *
 * \sa ServiceDiscoveryClient::discoverInstances
 */

/*!
 * Constructs a DiscoverInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DiscoverInstancesResponse::DiscoverInstancesResponse(
        const DiscoverInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new DiscoverInstancesResponsePrivate(this), parent)
{
    setRequest(new DiscoverInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DiscoverInstancesRequest * DiscoverInstancesResponse::request() const
{
    return static_cast<const DiscoverInstancesRequest *>(ServiceDiscoveryResponse::request());
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery DiscoverInstances \a response.
 */
void DiscoverInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DiscoverInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::DiscoverInstancesResponsePrivate
 * \brief The DiscoverInstancesResponsePrivate class provides private implementation for DiscoverInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a DiscoverInstancesResponsePrivate object with public implementation \a q.
 */
DiscoverInstancesResponsePrivate::DiscoverInstancesResponsePrivate(
    DiscoverInstancesResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery DiscoverInstances response element from \a xml.
 */
void DiscoverInstancesResponsePrivate::parseDiscoverInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DiscoverInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
