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

#include "listassociatedattributegroupsresponse.h"
#include "listassociatedattributegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedAttributeGroupsResponse
 * \brief The ListAssociatedAttributeGroupsResponse class provides an interace for ServiceCatalogAppRegistry ListAssociatedAttributeGroups responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAssociatedAttributeGroups
 */

/*!
 * Constructs a ListAssociatedAttributeGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociatedAttributeGroupsResponse::ListAssociatedAttributeGroupsResponse(
        const ListAssociatedAttributeGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new ListAssociatedAttributeGroupsResponsePrivate(this), parent)
{
    setRequest(new ListAssociatedAttributeGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociatedAttributeGroupsRequest * ListAssociatedAttributeGroupsResponse::request() const
{
    Q_D(const ListAssociatedAttributeGroupsResponse);
    return static_cast<const ListAssociatedAttributeGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry ListAssociatedAttributeGroups \a response.
 */
void ListAssociatedAttributeGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociatedAttributeGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedAttributeGroupsResponsePrivate
 * \brief The ListAssociatedAttributeGroupsResponsePrivate class provides private implementation for ListAssociatedAttributeGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAssociatedAttributeGroupsResponsePrivate object with public implementation \a q.
 */
ListAssociatedAttributeGroupsResponsePrivate::ListAssociatedAttributeGroupsResponsePrivate(
    ListAssociatedAttributeGroupsResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry ListAssociatedAttributeGroups response element from \a xml.
 */
void ListAssociatedAttributeGroupsResponsePrivate::parseListAssociatedAttributeGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociatedAttributeGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
