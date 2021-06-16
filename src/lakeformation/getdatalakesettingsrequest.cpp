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

#include "getdatalakesettingsrequest.h"
#include "getdatalakesettingsrequest_p.h"
#include "getdatalakesettingsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetDataLakeSettingsRequest
 * \brief The GetDataLakeSettingsRequest class provides an interface for LakeFormation GetDataLakeSettings requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::getDataLakeSettings
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataLakeSettingsRequest::GetDataLakeSettingsRequest(const GetDataLakeSettingsRequest &other)
    : LakeFormationRequest(new GetDataLakeSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataLakeSettingsRequest object.
 */
GetDataLakeSettingsRequest::GetDataLakeSettingsRequest()
    : LakeFormationRequest(new GetDataLakeSettingsRequestPrivate(LakeFormationRequest::GetDataLakeSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataLakeSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataLakeSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataLakeSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetDataLakeSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetDataLakeSettingsRequestPrivate
 * \brief The GetDataLakeSettingsRequestPrivate class provides private implementation for GetDataLakeSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetDataLakeSettingsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetDataLakeSettingsRequestPrivate::GetDataLakeSettingsRequestPrivate(
    const LakeFormationRequest::Action action, GetDataLakeSettingsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataLakeSettingsRequest
 * class' copy constructor.
 */
GetDataLakeSettingsRequestPrivate::GetDataLakeSettingsRequestPrivate(
    const GetDataLakeSettingsRequestPrivate &other, GetDataLakeSettingsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
