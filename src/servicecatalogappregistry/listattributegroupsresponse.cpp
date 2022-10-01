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

#include "listattributegroupsresponse.h"
#include "listattributegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsResponse
 * \brief The ListAttributeGroupsResponse class provides an interace for ServiceCatalogAppRegistry ListAttributeGroups responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAttributeGroups
 */

/*!
 * Constructs a ListAttributeGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAttributeGroupsResponse::ListAttributeGroupsResponse(
        const ListAttributeGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new ListAttributeGroupsResponsePrivate(this), parent)
{
    setRequest(new ListAttributeGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAttributeGroupsRequest * ListAttributeGroupsResponse::request() const
{
    Q_D(const ListAttributeGroupsResponse);
    return static_cast<const ListAttributeGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry ListAttributeGroups \a response.
 */
void ListAttributeGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttributeGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsResponsePrivate
 * \brief The ListAttributeGroupsResponsePrivate class provides private implementation for ListAttributeGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAttributeGroupsResponsePrivate object with public implementation \a q.
 */
ListAttributeGroupsResponsePrivate::ListAttributeGroupsResponsePrivate(
    ListAttributeGroupsResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry ListAttributeGroups response element from \a xml.
 */
void ListAttributeGroupsResponsePrivate::parseListAttributeGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttributeGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
