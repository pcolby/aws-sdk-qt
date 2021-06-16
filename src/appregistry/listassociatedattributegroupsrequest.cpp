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

#include "listassociatedattributegroupsrequest.h"
#include "listassociatedattributegroupsrequest_p.h"
#include "listassociatedattributegroupsresponse.h"
#include "appregistryrequest_p.h"

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::ListAssociatedAttributeGroupsRequest
 * \brief The ListAssociatedAttributeGroupsRequest class provides an interface for AppRegistry ListAssociatedAttributeGroups requests.
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
 * Constructs a copy of \a other.
 */
ListAssociatedAttributeGroupsRequest::ListAssociatedAttributeGroupsRequest(const ListAssociatedAttributeGroupsRequest &other)
    : AppRegistryRequest(new ListAssociatedAttributeGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociatedAttributeGroupsRequest object.
 */
ListAssociatedAttributeGroupsRequest::ListAssociatedAttributeGroupsRequest()
    : AppRegistryRequest(new ListAssociatedAttributeGroupsRequestPrivate(AppRegistryRequest::ListAssociatedAttributeGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociatedAttributeGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociatedAttributeGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociatedAttributeGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedAttributeGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::AppRegistry::ListAssociatedAttributeGroupsRequestPrivate
 * \brief The ListAssociatedAttributeGroupsRequestPrivate class provides private implementation for ListAssociatedAttributeGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a ListAssociatedAttributeGroupsRequestPrivate object for AppRegistry \a action,
 * with public implementation \a q.
 */
ListAssociatedAttributeGroupsRequestPrivate::ListAssociatedAttributeGroupsRequestPrivate(
    const AppRegistryRequest::Action action, ListAssociatedAttributeGroupsRequest * const q)
    : AppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedAttributeGroupsRequest
 * class' copy constructor.
 */
ListAssociatedAttributeGroupsRequestPrivate::ListAssociatedAttributeGroupsRequestPrivate(
    const ListAssociatedAttributeGroupsRequestPrivate &other, ListAssociatedAttributeGroupsRequest * const q)
    : AppRegistryRequestPrivate(other, q)
{

}

} // namespace AppRegistry
} // namespace QtAws
