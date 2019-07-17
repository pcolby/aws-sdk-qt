/*
    Copyright 2013-2019 Paul Colby

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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
