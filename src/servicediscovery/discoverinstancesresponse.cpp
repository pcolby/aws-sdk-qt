// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
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
    Q_D(const DiscoverInstancesResponse);
    return static_cast<const DiscoverInstancesRequest *>(d->request);
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
