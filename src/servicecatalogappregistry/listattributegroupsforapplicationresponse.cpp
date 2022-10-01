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

#include "listattributegroupsforapplicationresponse.h"
#include "listattributegroupsforapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsForApplicationResponse
 * \brief The ListAttributeGroupsForApplicationResponse class provides an interace for ServiceCatalogAppRegistry ListAttributeGroupsForApplication responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAttributeGroupsForApplication
 */

/*!
 * Constructs a ListAttributeGroupsForApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
ListAttributeGroupsForApplicationResponse::ListAttributeGroupsForApplicationResponse(
        const ListAttributeGroupsForApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new ListAttributeGroupsForApplicationResponsePrivate(this), parent)
{
    setRequest(new ListAttributeGroupsForApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAttributeGroupsForApplicationRequest * ListAttributeGroupsForApplicationResponse::request() const
{
    Q_D(const ListAttributeGroupsForApplicationResponse);
    return static_cast<const ListAttributeGroupsForApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry ListAttributeGroupsForApplication \a response.
 */
void ListAttributeGroupsForApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttributeGroupsForApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsForApplicationResponsePrivate
 * \brief The ListAttributeGroupsForApplicationResponsePrivate class provides private implementation for ListAttributeGroupsForApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAttributeGroupsForApplicationResponsePrivate object with public implementation \a q.
 */
ListAttributeGroupsForApplicationResponsePrivate::ListAttributeGroupsForApplicationResponsePrivate(
    ListAttributeGroupsForApplicationResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry ListAttributeGroupsForApplication response element from \a xml.
 */
void ListAttributeGroupsForApplicationResponsePrivate::parseListAttributeGroupsForApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttributeGroupsForApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
