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

#include "listlftagsrequest.h"
#include "listlftagsrequest_p.h"
#include "listlftagsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListLFTagsRequest
 * \brief The ListLFTagsRequest class provides an interface for LakeFormation ListLFTags requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::listLFTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListLFTagsRequest::ListLFTagsRequest(const ListLFTagsRequest &other)
    : LakeFormationRequest(new ListLFTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLFTagsRequest object.
 */
ListLFTagsRequest::ListLFTagsRequest()
    : LakeFormationRequest(new ListLFTagsRequestPrivate(LakeFormationRequest::ListLFTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLFTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLFTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLFTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListLFTagsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::ListLFTagsRequestPrivate
 * \brief The ListLFTagsRequestPrivate class provides private implementation for ListLFTagsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListLFTagsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
ListLFTagsRequestPrivate::ListLFTagsRequestPrivate(
    const LakeFormationRequest::Action action, ListLFTagsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLFTagsRequest
 * class' copy constructor.
 */
ListLFTagsRequestPrivate::ListLFTagsRequestPrivate(
    const ListLFTagsRequestPrivate &other, ListLFTagsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
