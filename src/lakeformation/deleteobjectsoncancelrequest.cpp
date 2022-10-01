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

#include "deleteobjectsoncancelrequest.h"
#include "deleteobjectsoncancelrequest_p.h"
#include "deleteobjectsoncancelresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteObjectsOnCancelRequest
 * \brief The DeleteObjectsOnCancelRequest class provides an interface for LakeFormation DeleteObjectsOnCancel requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deleteObjectsOnCancel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectsOnCancelRequest::DeleteObjectsOnCancelRequest(const DeleteObjectsOnCancelRequest &other)
    : LakeFormationRequest(new DeleteObjectsOnCancelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectsOnCancelRequest object.
 */
DeleteObjectsOnCancelRequest::DeleteObjectsOnCancelRequest()
    : LakeFormationRequest(new DeleteObjectsOnCancelRequestPrivate(LakeFormationRequest::DeleteObjectsOnCancelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectsOnCancelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectsOnCancelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectsOnCancelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectsOnCancelResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::DeleteObjectsOnCancelRequestPrivate
 * \brief The DeleteObjectsOnCancelRequestPrivate class provides private implementation for DeleteObjectsOnCancelRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteObjectsOnCancelRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
DeleteObjectsOnCancelRequestPrivate::DeleteObjectsOnCancelRequestPrivate(
    const LakeFormationRequest::Action action, DeleteObjectsOnCancelRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectsOnCancelRequest
 * class' copy constructor.
 */
DeleteObjectsOnCancelRequestPrivate::DeleteObjectsOnCancelRequestPrivate(
    const DeleteObjectsOnCancelRequestPrivate &other, DeleteObjectsOnCancelRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
