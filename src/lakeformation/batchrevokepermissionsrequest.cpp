// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
