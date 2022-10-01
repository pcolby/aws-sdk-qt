// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "grantpermissionsrequest.h"
#include "grantpermissionsrequest_p.h"
#include "grantpermissionsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GrantPermissionsRequest
 * \brief The GrantPermissionsRequest class provides an interface for LakeFormation GrantPermissions requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::grantPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
GrantPermissionsRequest::GrantPermissionsRequest(const GrantPermissionsRequest &other)
    : LakeFormationRequest(new GrantPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GrantPermissionsRequest object.
 */
GrantPermissionsRequest::GrantPermissionsRequest()
    : LakeFormationRequest(new GrantPermissionsRequestPrivate(LakeFormationRequest::GrantPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool GrantPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GrantPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GrantPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new GrantPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GrantPermissionsRequestPrivate
 * \brief The GrantPermissionsRequestPrivate class provides private implementation for GrantPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GrantPermissionsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GrantPermissionsRequestPrivate::GrantPermissionsRequestPrivate(
    const LakeFormationRequest::Action action, GrantPermissionsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GrantPermissionsRequest
 * class' copy constructor.
 */
GrantPermissionsRequestPrivate::GrantPermissionsRequestPrivate(
    const GrantPermissionsRequestPrivate &other, GrantPermissionsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
