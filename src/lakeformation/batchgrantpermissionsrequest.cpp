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

#include "batchgrantpermissionsrequest.h"
#include "batchgrantpermissionsrequest_p.h"
#include "batchgrantpermissionsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::BatchGrantPermissionsRequest
 * \brief The BatchGrantPermissionsRequest class provides an interface for LakeFormation BatchGrantPermissions requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::batchGrantPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGrantPermissionsRequest::BatchGrantPermissionsRequest(const BatchGrantPermissionsRequest &other)
    : LakeFormationRequest(new BatchGrantPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGrantPermissionsRequest object.
 */
BatchGrantPermissionsRequest::BatchGrantPermissionsRequest()
    : LakeFormationRequest(new BatchGrantPermissionsRequestPrivate(LakeFormationRequest::BatchGrantPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGrantPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGrantPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGrantPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGrantPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::BatchGrantPermissionsRequestPrivate
 * \brief The BatchGrantPermissionsRequestPrivate class provides private implementation for BatchGrantPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a BatchGrantPermissionsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
BatchGrantPermissionsRequestPrivate::BatchGrantPermissionsRequestPrivate(
    const LakeFormationRequest::Action action, BatchGrantPermissionsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGrantPermissionsRequest
 * class' copy constructor.
 */
BatchGrantPermissionsRequestPrivate::BatchGrantPermissionsRequestPrivate(
    const BatchGrantPermissionsRequestPrivate &other, BatchGrantPermissionsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
