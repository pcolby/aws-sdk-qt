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

#include "listassociatedresourcesrequest.h"
#include "listassociatedresourcesrequest_p.h"
#include "listassociatedresourcesresponse.h"
#include "appregistryrequest_p.h"

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::ListAssociatedResourcesRequest
 * \brief The ListAssociatedResourcesRequest class provides an interface for AppRegistry ListAssociatedResources requests.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::listAssociatedResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociatedResourcesRequest::ListAssociatedResourcesRequest(const ListAssociatedResourcesRequest &other)
    : AppRegistryRequest(new ListAssociatedResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociatedResourcesRequest object.
 */
ListAssociatedResourcesRequest::ListAssociatedResourcesRequest()
    : AppRegistryRequest(new ListAssociatedResourcesRequestPrivate(AppRegistryRequest::ListAssociatedResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociatedResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociatedResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociatedResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::AppRegistry::ListAssociatedResourcesRequestPrivate
 * \brief The ListAssociatedResourcesRequestPrivate class provides private implementation for ListAssociatedResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a ListAssociatedResourcesRequestPrivate object for AppRegistry \a action,
 * with public implementation \a q.
 */
ListAssociatedResourcesRequestPrivate::ListAssociatedResourcesRequestPrivate(
    const AppRegistryRequest::Action action, ListAssociatedResourcesRequest * const q)
    : AppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedResourcesRequest
 * class' copy constructor.
 */
ListAssociatedResourcesRequestPrivate::ListAssociatedResourcesRequestPrivate(
    const ListAssociatedResourcesRequestPrivate &other, ListAssociatedResourcesRequest * const q)
    : AppRegistryRequestPrivate(other, q)
{

}

} // namespace AppRegistry
} // namespace QtAws
