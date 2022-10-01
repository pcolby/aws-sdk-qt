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

#include "listassociatedresourcesresponse.h"
#include "listassociatedresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedResourcesResponse
 * \brief The ListAssociatedResourcesResponse class provides an interace for ServiceCatalogAppRegistry ListAssociatedResources responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAssociatedResources
 */

/*!
 * Constructs a ListAssociatedResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociatedResourcesResponse::ListAssociatedResourcesResponse(
        const ListAssociatedResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new ListAssociatedResourcesResponsePrivate(this), parent)
{
    setRequest(new ListAssociatedResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociatedResourcesRequest * ListAssociatedResourcesResponse::request() const
{
    Q_D(const ListAssociatedResourcesResponse);
    return static_cast<const ListAssociatedResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry ListAssociatedResources \a response.
 */
void ListAssociatedResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociatedResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedResourcesResponsePrivate
 * \brief The ListAssociatedResourcesResponsePrivate class provides private implementation for ListAssociatedResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAssociatedResourcesResponsePrivate object with public implementation \a q.
 */
ListAssociatedResourcesResponsePrivate::ListAssociatedResourcesResponsePrivate(
    ListAssociatedResourcesResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry ListAssociatedResources response element from \a xml.
 */
void ListAssociatedResourcesResponsePrivate::parseListAssociatedResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociatedResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
