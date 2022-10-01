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

#include "createpermissiongrouprequest.h"
#include "createpermissiongrouprequest_p.h"
#include "createpermissiongroupresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::CreatePermissionGroupRequest
 * \brief The CreatePermissionGroupRequest class provides an interface for FinspaceData CreatePermissionGroup requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::createPermissionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePermissionGroupRequest::CreatePermissionGroupRequest(const CreatePermissionGroupRequest &other)
    : FinspaceDataRequest(new CreatePermissionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePermissionGroupRequest object.
 */
CreatePermissionGroupRequest::CreatePermissionGroupRequest()
    : FinspaceDataRequest(new CreatePermissionGroupRequestPrivate(FinspaceDataRequest::CreatePermissionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePermissionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePermissionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePermissionGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreatePermissionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::CreatePermissionGroupRequestPrivate
 * \brief The CreatePermissionGroupRequestPrivate class provides private implementation for CreatePermissionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a CreatePermissionGroupRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
CreatePermissionGroupRequestPrivate::CreatePermissionGroupRequestPrivate(
    const FinspaceDataRequest::Action action, CreatePermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePermissionGroupRequest
 * class' copy constructor.
 */
CreatePermissionGroupRequestPrivate::CreatePermissionGroupRequestPrivate(
    const CreatePermissionGroupRequestPrivate &other, CreatePermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
