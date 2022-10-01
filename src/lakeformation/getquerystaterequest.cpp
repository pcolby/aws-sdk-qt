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

#include "getquerystaterequest.h"
#include "getquerystaterequest_p.h"
#include "getquerystateresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetQueryStateRequest
 * \brief The GetQueryStateRequest class provides an interface for LakeFormation GetQueryState requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getQueryState
 */

/*!
 * Constructs a copy of \a other.
 */
GetQueryStateRequest::GetQueryStateRequest(const GetQueryStateRequest &other)
    : LakeFormationRequest(new GetQueryStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQueryStateRequest object.
 */
GetQueryStateRequest::GetQueryStateRequest()
    : LakeFormationRequest(new GetQueryStateRequestPrivate(LakeFormationRequest::GetQueryStateAction, this))
{

}

/*!
 * \reimp
 */
bool GetQueryStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQueryStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQueryStateRequest::response(QNetworkReply * const reply) const
{
    return new GetQueryStateResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetQueryStateRequestPrivate
 * \brief The GetQueryStateRequestPrivate class provides private implementation for GetQueryStateRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetQueryStateRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetQueryStateRequestPrivate::GetQueryStateRequestPrivate(
    const LakeFormationRequest::Action action, GetQueryStateRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQueryStateRequest
 * class' copy constructor.
 */
GetQueryStateRequestPrivate::GetQueryStateRequestPrivate(
    const GetQueryStateRequestPrivate &other, GetQueryStateRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
