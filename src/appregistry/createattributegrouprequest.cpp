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

#include "createattributegrouprequest.h"
#include "createattributegrouprequest_p.h"
#include "createattributegroupresponse.h"
#include "appregistryrequest_p.h"

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::CreateAttributeGroupRequest
 * \brief The CreateAttributeGroupRequest class provides an interface for AppRegistry CreateAttributeGroup requests.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::createAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAttributeGroupRequest::CreateAttributeGroupRequest(const CreateAttributeGroupRequest &other)
    : AppRegistryRequest(new CreateAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAttributeGroupRequest object.
 */
CreateAttributeGroupRequest::CreateAttributeGroupRequest()
    : AppRegistryRequest(new CreateAttributeGroupRequestPrivate(AppRegistryRequest::CreateAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AppRegistry::CreateAttributeGroupRequestPrivate
 * \brief The CreateAttributeGroupRequestPrivate class provides private implementation for CreateAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a CreateAttributeGroupRequestPrivate object for AppRegistry \a action,
 * with public implementation \a q.
 */
CreateAttributeGroupRequestPrivate::CreateAttributeGroupRequestPrivate(
    const AppRegistryRequest::Action action, CreateAttributeGroupRequest * const q)
    : AppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAttributeGroupRequest
 * class' copy constructor.
 */
CreateAttributeGroupRequestPrivate::CreateAttributeGroupRequestPrivate(
    const CreateAttributeGroupRequestPrivate &other, CreateAttributeGroupRequest * const q)
    : AppRegistryRequestPrivate(other, q)
{

}

} // namespace AppRegistry
} // namespace QtAws
