// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
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
