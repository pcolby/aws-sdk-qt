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
