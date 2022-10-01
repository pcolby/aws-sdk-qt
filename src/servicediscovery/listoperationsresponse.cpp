// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoperationsresponse.h"
#include "listoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ListOperationsResponse
 * \brief The ListOperationsResponse class provides an interace for ServiceDiscovery ListOperations responses.
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
 * \sa ServiceDiscoveryClient::listOperations
 */

/*!
 * Constructs a ListOperationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOperationsResponse::ListOperationsResponse(
        const ListOperationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new ListOperationsResponsePrivate(this), parent)
{
    setRequest(new ListOperationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOperationsRequest * ListOperationsResponse::request() const
{
    Q_D(const ListOperationsResponse);
    return static_cast<const ListOperationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery ListOperations \a response.
 */
void ListOperationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOperationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::ListOperationsResponsePrivate
 * \brief The ListOperationsResponsePrivate class provides private implementation for ListOperationsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ListOperationsResponsePrivate object with public implementation \a q.
 */
ListOperationsResponsePrivate::ListOperationsResponsePrivate(
    ListOperationsResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery ListOperations response element from \a xml.
 */
void ListOperationsResponsePrivate::parseListOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOperationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
