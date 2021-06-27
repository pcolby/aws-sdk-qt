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
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::ListAssociatedAttributeGroupsResponse
 * \brief The ListAssociatedAttributeGroupsResponse class provides an interace for AppRegistry ListAssociatedAttributeGroups responses.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::listAssociatedAttributeGroups
 */

/*!
 * Constructs a ListAssociatedAttributeGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociatedAttributeGroupsResponse::ListAssociatedAttributeGroupsResponse(
        const ListAssociatedAttributeGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRegistryResponse(new ListAssociatedAttributeGroupsResponsePrivate(this), parent)
{
    setRequest(new ListAssociatedAttributeGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociatedAttributeGroupsRequest * ListAssociatedAttributeGroupsResponse::request() const
{
    return static_cast<const ListAssociatedAttributeGroupsRequest *>(AppRegistryResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppRegistry ListAssociatedAttributeGroups \a response.
 */
void ListAssociatedAttributeGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociatedAttributeGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRegistry::ListAssociatedAttributeGroupsResponsePrivate
 * \brief The ListAssociatedAttributeGroupsResponsePrivate class provides private implementation for ListAssociatedAttributeGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a ListAssociatedAttributeGroupsResponsePrivate object with public implementation \a q.
 */
ListAssociatedAttributeGroupsResponsePrivate::ListAssociatedAttributeGroupsResponsePrivate(
    ListAssociatedAttributeGroupsResponse * const q) : AppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a AppRegistry ListAssociatedAttributeGroups response element from \a xml.
 */
void ListAssociatedAttributeGroupsResponsePrivate::parseListAssociatedAttributeGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociatedAttributeGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRegistry
} // namespace QtAws
