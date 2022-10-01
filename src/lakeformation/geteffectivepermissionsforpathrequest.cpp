// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geteffectivepermissionsforpathrequest.h"
#include "geteffectivepermissionsforpathrequest_p.h"
#include "geteffectivepermissionsforpathresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetEffectivePermissionsForPathRequest
 * \brief The GetEffectivePermissionsForPathRequest class provides an interface for LakeFormation GetEffectivePermissionsForPath requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getEffectivePermissionsForPath
 */

/*!
 * Constructs a copy of \a other.
 */
GetEffectivePermissionsForPathRequest::GetEffectivePermissionsForPathRequest(const GetEffectivePermissionsForPathRequest &other)
    : LakeFormationRequest(new GetEffectivePermissionsForPathRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEffectivePermissionsForPathRequest object.
 */
GetEffectivePermissionsForPathRequest::GetEffectivePermissionsForPathRequest()
    : LakeFormationRequest(new GetEffectivePermissionsForPathRequestPrivate(LakeFormationRequest::GetEffectivePermissionsForPathAction, this))
{

}

/*!
 * \reimp
 */
bool GetEffectivePermissionsForPathRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEffectivePermissionsForPathResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEffectivePermissionsForPathRequest::response(QNetworkReply * const reply) const
{
    return new GetEffectivePermissionsForPathResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetEffectivePermissionsForPathRequestPrivate
 * \brief The GetEffectivePermissionsForPathRequestPrivate class provides private implementation for GetEffectivePermissionsForPathRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetEffectivePermissionsForPathRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetEffectivePermissionsForPathRequestPrivate::GetEffectivePermissionsForPathRequestPrivate(
    const LakeFormationRequest::Action action, GetEffectivePermissionsForPathRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEffectivePermissionsForPathRequest
 * class' copy constructor.
 */
GetEffectivePermissionsForPathRequestPrivate::GetEffectivePermissionsForPathRequestPrivate(
    const GetEffectivePermissionsForPathRequestPrivate &other, GetEffectivePermissionsForPathRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
