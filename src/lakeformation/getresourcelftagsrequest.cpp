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

#include "getresourcelftagsrequest.h"
#include "getresourcelftagsrequest_p.h"
#include "getresourcelftagsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetResourceLFTagsRequest
 * \brief The GetResourceLFTagsRequest class provides an interface for LakeFormation GetResourceLFTags requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getResourceLFTags
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceLFTagsRequest::GetResourceLFTagsRequest(const GetResourceLFTagsRequest &other)
    : LakeFormationRequest(new GetResourceLFTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceLFTagsRequest object.
 */
GetResourceLFTagsRequest::GetResourceLFTagsRequest()
    : LakeFormationRequest(new GetResourceLFTagsRequestPrivate(LakeFormationRequest::GetResourceLFTagsAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceLFTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceLFTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceLFTagsRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceLFTagsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetResourceLFTagsRequestPrivate
 * \brief The GetResourceLFTagsRequestPrivate class provides private implementation for GetResourceLFTagsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetResourceLFTagsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetResourceLFTagsRequestPrivate::GetResourceLFTagsRequestPrivate(
    const LakeFormationRequest::Action action, GetResourceLFTagsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceLFTagsRequest
 * class' copy constructor.
 */
GetResourceLFTagsRequestPrivate::GetResourceLFTagsRequestPrivate(
    const GetResourceLFTagsRequestPrivate &other, GetResourceLFTagsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
