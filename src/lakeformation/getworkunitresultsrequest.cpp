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

#include "getworkunitresultsrequest.h"
#include "getworkunitresultsrequest_p.h"
#include "getworkunitresultsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetWorkUnitResultsRequest
 * \brief The GetWorkUnitResultsRequest class provides an interface for LakeFormation GetWorkUnitResults requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getWorkUnitResults
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkUnitResultsRequest::GetWorkUnitResultsRequest(const GetWorkUnitResultsRequest &other)
    : LakeFormationRequest(new GetWorkUnitResultsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkUnitResultsRequest object.
 */
GetWorkUnitResultsRequest::GetWorkUnitResultsRequest()
    : LakeFormationRequest(new GetWorkUnitResultsRequestPrivate(LakeFormationRequest::GetWorkUnitResultsAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkUnitResultsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkUnitResultsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkUnitResultsRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkUnitResultsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetWorkUnitResultsRequestPrivate
 * \brief The GetWorkUnitResultsRequestPrivate class provides private implementation for GetWorkUnitResultsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetWorkUnitResultsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetWorkUnitResultsRequestPrivate::GetWorkUnitResultsRequestPrivate(
    const LakeFormationRequest::Action action, GetWorkUnitResultsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkUnitResultsRequest
 * class' copy constructor.
 */
GetWorkUnitResultsRequestPrivate::GetWorkUnitResultsRequestPrivate(
    const GetWorkUnitResultsRequestPrivate &other, GetWorkUnitResultsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
