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

#include "listresourcesharepermissionsrequest.h"
#include "listresourcesharepermissionsrequest_p.h"
#include "listresourcesharepermissionsresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::ListResourceSharePermissionsRequest
 * \brief The ListResourceSharePermissionsRequest class provides an interface for RAM ListResourceSharePermissions requests.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resources
 *  associated with the resource share. The following principals are supported: AWS accounts, organizational units (OU) from
 *  AWS Organizations, and organizations from AWS
 * 
 *  Organizations>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/ram/latest/userguide/">AWS Resource Access Manager
 *  User
 *
 * \sa RamClient::listResourceSharePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceSharePermissionsRequest::ListResourceSharePermissionsRequest(const ListResourceSharePermissionsRequest &other)
    : RamRequest(new ListResourceSharePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceSharePermissionsRequest object.
 */
ListResourceSharePermissionsRequest::ListResourceSharePermissionsRequest()
    : RamRequest(new ListResourceSharePermissionsRequestPrivate(RamRequest::ListResourceSharePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceSharePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceSharePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceSharePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceSharePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::RAM::ListResourceSharePermissionsRequestPrivate
 * \brief The ListResourceSharePermissionsRequestPrivate class provides private implementation for ListResourceSharePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a ListResourceSharePermissionsRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
ListResourceSharePermissionsRequestPrivate::ListResourceSharePermissionsRequestPrivate(
    const RamRequest::Action action, ListResourceSharePermissionsRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceSharePermissionsRequest
 * class' copy constructor.
 */
ListResourceSharePermissionsRequestPrivate::ListResourceSharePermissionsRequestPrivate(
    const ListResourceSharePermissionsRequestPrivate &other, ListResourceSharePermissionsRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace RAM
} // namespace QtAws
