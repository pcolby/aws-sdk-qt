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

#include "searchdatabasesbylftagsrequest.h"
#include "searchdatabasesbylftagsrequest_p.h"
#include "searchdatabasesbylftagsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::SearchDatabasesByLFTagsRequest
 * \brief The SearchDatabasesByLFTagsRequest class provides an interface for LakeFormation SearchDatabasesByLFTags requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::searchDatabasesByLFTags
 */

/*!
 * Constructs a copy of \a other.
 */
SearchDatabasesByLFTagsRequest::SearchDatabasesByLFTagsRequest(const SearchDatabasesByLFTagsRequest &other)
    : LakeFormationRequest(new SearchDatabasesByLFTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchDatabasesByLFTagsRequest object.
 */
SearchDatabasesByLFTagsRequest::SearchDatabasesByLFTagsRequest()
    : LakeFormationRequest(new SearchDatabasesByLFTagsRequestPrivate(LakeFormationRequest::SearchDatabasesByLFTagsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchDatabasesByLFTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchDatabasesByLFTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchDatabasesByLFTagsRequest::response(QNetworkReply * const reply) const
{
    return new SearchDatabasesByLFTagsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::SearchDatabasesByLFTagsRequestPrivate
 * \brief The SearchDatabasesByLFTagsRequestPrivate class provides private implementation for SearchDatabasesByLFTagsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a SearchDatabasesByLFTagsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
SearchDatabasesByLFTagsRequestPrivate::SearchDatabasesByLFTagsRequestPrivate(
    const LakeFormationRequest::Action action, SearchDatabasesByLFTagsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchDatabasesByLFTagsRequest
 * class' copy constructor.
 */
SearchDatabasesByLFTagsRequestPrivate::SearchDatabasesByLFTagsRequestPrivate(
    const SearchDatabasesByLFTagsRequestPrivate &other, SearchDatabasesByLFTagsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
