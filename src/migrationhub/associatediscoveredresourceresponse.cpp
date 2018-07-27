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

#include "associatediscoveredresourceresponse.h"
#include "associatediscoveredresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::AssociateDiscoveredResourceResponse
 * \brief The AssociateDiscoveredResourceResponse class provides an interace for MigrationHub AssociateDiscoveredResource responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::associateDiscoveredResource
 */

/*!
 * Constructs a AssociateDiscoveredResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDiscoveredResourceResponse::AssociateDiscoveredResourceResponse(
        const AssociateDiscoveredResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new AssociateDiscoveredResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateDiscoveredResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDiscoveredResourceRequest * AssociateDiscoveredResourceResponse::request() const
{
    Q_D(const AssociateDiscoveredResourceResponse);
    return static_cast<const AssociateDiscoveredResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub AssociateDiscoveredResource \a response.
 */
void AssociateDiscoveredResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDiscoveredResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::AssociateDiscoveredResourceResponsePrivate
 * \brief The AssociateDiscoveredResourceResponsePrivate class provides private implementation for AssociateDiscoveredResourceResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a AssociateDiscoveredResourceResponsePrivate object with public implementation \a q.
 */
AssociateDiscoveredResourceResponsePrivate::AssociateDiscoveredResourceResponsePrivate(
    AssociateDiscoveredResourceResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub AssociateDiscoveredResource response element from \a xml.
 */
void AssociateDiscoveredResourceResponsePrivate::parseAssociateDiscoveredResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDiscoveredResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
