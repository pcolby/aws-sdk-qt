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

#include "getworkunitsrequest.h"
#include "getworkunitsrequest_p.h"
#include "getworkunitsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetWorkUnitsRequest
 * \brief The GetWorkUnitsRequest class provides an interface for LakeFormation GetWorkUnits requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getWorkUnits
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkUnitsRequest::GetWorkUnitsRequest(const GetWorkUnitsRequest &other)
    : LakeFormationRequest(new GetWorkUnitsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkUnitsRequest object.
 */
GetWorkUnitsRequest::GetWorkUnitsRequest()
    : LakeFormationRequest(new GetWorkUnitsRequestPrivate(LakeFormationRequest::GetWorkUnitsAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkUnitsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkUnitsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkUnitsRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkUnitsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetWorkUnitsRequestPrivate
 * \brief The GetWorkUnitsRequestPrivate class provides private implementation for GetWorkUnitsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetWorkUnitsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetWorkUnitsRequestPrivate::GetWorkUnitsRequestPrivate(
    const LakeFormationRequest::Action action, GetWorkUnitsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkUnitsRequest
 * class' copy constructor.
 */
GetWorkUnitsRequestPrivate::GetWorkUnitsRequestPrivate(
    const GetWorkUnitsRequestPrivate &other, GetWorkUnitsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
