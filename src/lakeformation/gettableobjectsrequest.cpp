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

#include "gettableobjectsrequest.h"
#include "gettableobjectsrequest_p.h"
#include "gettableobjectsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetTableObjectsRequest
 * \brief The GetTableObjectsRequest class provides an interface for LakeFormation GetTableObjects requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getTableObjects
 */

/*!
 * Constructs a copy of \a other.
 */
GetTableObjectsRequest::GetTableObjectsRequest(const GetTableObjectsRequest &other)
    : LakeFormationRequest(new GetTableObjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTableObjectsRequest object.
 */
GetTableObjectsRequest::GetTableObjectsRequest()
    : LakeFormationRequest(new GetTableObjectsRequestPrivate(LakeFormationRequest::GetTableObjectsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableObjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTableObjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableObjectsRequest::response(QNetworkReply * const reply) const
{
    return new GetTableObjectsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetTableObjectsRequestPrivate
 * \brief The GetTableObjectsRequestPrivate class provides private implementation for GetTableObjectsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetTableObjectsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetTableObjectsRequestPrivate::GetTableObjectsRequestPrivate(
    const LakeFormationRequest::Action action, GetTableObjectsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTableObjectsRequest
 * class' copy constructor.
 */
GetTableObjectsRequestPrivate::GetTableObjectsRequestPrivate(
    const GetTableObjectsRequestPrivate &other, GetTableObjectsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
