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

#include "listattributegroupsrequest.h"
#include "listattributegroupsrequest_p.h"
#include "listattributegroupsresponse.h"
#include "appregistryrequest_p.h"

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::ListAttributeGroupsRequest
 * \brief The ListAttributeGroupsRequest class provides an interface for AppRegistry ListAttributeGroups requests.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::listAttributeGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttributeGroupsRequest::ListAttributeGroupsRequest(const ListAttributeGroupsRequest &other)
    : AppRegistryRequest(new ListAttributeGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttributeGroupsRequest object.
 */
ListAttributeGroupsRequest::ListAttributeGroupsRequest()
    : AppRegistryRequest(new ListAttributeGroupsRequestPrivate(AppRegistryRequest::ListAttributeGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttributeGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttributeGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttributeGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListAttributeGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::AppRegistry::ListAttributeGroupsRequestPrivate
 * \brief The ListAttributeGroupsRequestPrivate class provides private implementation for ListAttributeGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a ListAttributeGroupsRequestPrivate object for AppRegistry \a action,
 * with public implementation \a q.
 */
ListAttributeGroupsRequestPrivate::ListAttributeGroupsRequestPrivate(
    const AppRegistryRequest::Action action, ListAttributeGroupsRequest * const q)
    : AppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttributeGroupsRequest
 * class' copy constructor.
 */
ListAttributeGroupsRequestPrivate::ListAttributeGroupsRequestPrivate(
    const ListAttributeGroupsRequestPrivate &other, ListAttributeGroupsRequest * const q)
    : AppRegistryRequestPrivate(other, q)
{

}

} // namespace AppRegistry
} // namespace QtAws
