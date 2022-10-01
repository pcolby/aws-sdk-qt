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

#include "batchrevokepermissionsrequest.h"
#include "batchrevokepermissionsrequest_p.h"
#include "batchrevokepermissionsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::BatchRevokePermissionsRequest
 * \brief The BatchRevokePermissionsRequest class provides an interface for LakeFormation BatchRevokePermissions requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::batchRevokePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
BatchRevokePermissionsRequest::BatchRevokePermissionsRequest(const BatchRevokePermissionsRequest &other)
    : LakeFormationRequest(new BatchRevokePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchRevokePermissionsRequest object.
 */
BatchRevokePermissionsRequest::BatchRevokePermissionsRequest()
    : LakeFormationRequest(new BatchRevokePermissionsRequestPrivate(LakeFormationRequest::BatchRevokePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchRevokePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchRevokePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchRevokePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new BatchRevokePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::BatchRevokePermissionsRequestPrivate
 * \brief The BatchRevokePermissionsRequestPrivate class provides private implementation for BatchRevokePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a BatchRevokePermissionsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
BatchRevokePermissionsRequestPrivate::BatchRevokePermissionsRequestPrivate(
    const LakeFormationRequest::Action action, BatchRevokePermissionsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchRevokePermissionsRequest
 * class' copy constructor.
 */
BatchRevokePermissionsRequestPrivate::BatchRevokePermissionsRequestPrivate(
    const BatchRevokePermissionsRequestPrivate &other, BatchRevokePermissionsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
