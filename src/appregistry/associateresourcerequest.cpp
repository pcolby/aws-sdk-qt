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

#include "associateresourcerequest.h"
#include "associateresourcerequest_p.h"
#include "associateresourceresponse.h"
#include "appregistryrequest_p.h"

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::AssociateResourceRequest
 * \brief The AssociateResourceRequest class provides an interface for AppRegistry AssociateResource requests.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::associateResource
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateResourceRequest::AssociateResourceRequest(const AssociateResourceRequest &other)
    : AppRegistryRequest(new AssociateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateResourceRequest object.
 */
AssociateResourceRequest::AssociateResourceRequest()
    : AppRegistryRequest(new AssociateResourceRequestPrivate(AppRegistryRequest::AssociateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateResourceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::AppRegistry::AssociateResourceRequestPrivate
 * \brief The AssociateResourceRequestPrivate class provides private implementation for AssociateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a AssociateResourceRequestPrivate object for AppRegistry \a action,
 * with public implementation \a q.
 */
AssociateResourceRequestPrivate::AssociateResourceRequestPrivate(
    const AppRegistryRequest::Action action, AssociateResourceRequest * const q)
    : AppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateResourceRequest
 * class' copy constructor.
 */
AssociateResourceRequestPrivate::AssociateResourceRequestPrivate(
    const AssociateResourceRequestPrivate &other, AssociateResourceRequest * const q)
    : AppRegistryRequestPrivate(other, q)
{

}

} // namespace AppRegistry
} // namespace QtAws
