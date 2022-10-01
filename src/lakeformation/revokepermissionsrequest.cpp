// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revokepermissionsrequest.h"
#include "revokepermissionsrequest_p.h"
#include "revokepermissionsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RevokePermissionsRequest
 * \brief The RevokePermissionsRequest class provides an interface for LakeFormation RevokePermissions requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::revokePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
RevokePermissionsRequest::RevokePermissionsRequest(const RevokePermissionsRequest &other)
    : LakeFormationRequest(new RevokePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokePermissionsRequest object.
 */
RevokePermissionsRequest::RevokePermissionsRequest()
    : LakeFormationRequest(new RevokePermissionsRequestPrivate(LakeFormationRequest::RevokePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool RevokePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new RevokePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::RevokePermissionsRequestPrivate
 * \brief The RevokePermissionsRequestPrivate class provides private implementation for RevokePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RevokePermissionsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
RevokePermissionsRequestPrivate::RevokePermissionsRequestPrivate(
    const LakeFormationRequest::Action action, RevokePermissionsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokePermissionsRequest
 * class' copy constructor.
 */
RevokePermissionsRequestPrivate::RevokePermissionsRequestPrivate(
    const RevokePermissionsRequestPrivate &other, RevokePermissionsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
