// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
