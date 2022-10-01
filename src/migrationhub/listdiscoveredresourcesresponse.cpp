// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdiscoveredresourcesresponse.h"
#include "listdiscoveredresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListDiscoveredResourcesResponse
 * \brief The ListDiscoveredResourcesResponse class provides an interace for MigrationHub ListDiscoveredResources responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
 *
 * \sa MigrationHubClient::listDiscoveredResources
 */

/*!
 * Constructs a ListDiscoveredResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDiscoveredResourcesResponse::ListDiscoveredResourcesResponse(
        const ListDiscoveredResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ListDiscoveredResourcesResponsePrivate(this), parent)
{
    setRequest(new ListDiscoveredResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDiscoveredResourcesRequest * ListDiscoveredResourcesResponse::request() const
{
    Q_D(const ListDiscoveredResourcesResponse);
    return static_cast<const ListDiscoveredResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub ListDiscoveredResources \a response.
 */
void ListDiscoveredResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDiscoveredResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::ListDiscoveredResourcesResponsePrivate
 * \brief The ListDiscoveredResourcesResponsePrivate class provides private implementation for ListDiscoveredResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListDiscoveredResourcesResponsePrivate object with public implementation \a q.
 */
ListDiscoveredResourcesResponsePrivate::ListDiscoveredResourcesResponsePrivate(
    ListDiscoveredResourcesResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub ListDiscoveredResources response element from \a xml.
 */
void ListDiscoveredResourcesResponsePrivate::parseListDiscoveredResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDiscoveredResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
