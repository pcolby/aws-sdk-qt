// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchtablesbylftagsrequest.h"
#include "searchtablesbylftagsrequest_p.h"
#include "searchtablesbylftagsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::SearchTablesByLFTagsRequest
 * \brief The SearchTablesByLFTagsRequest class provides an interface for LakeFormation SearchTablesByLFTags requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::searchTablesByLFTags
 */

/*!
 * Constructs a copy of \a other.
 */
SearchTablesByLFTagsRequest::SearchTablesByLFTagsRequest(const SearchTablesByLFTagsRequest &other)
    : LakeFormationRequest(new SearchTablesByLFTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchTablesByLFTagsRequest object.
 */
SearchTablesByLFTagsRequest::SearchTablesByLFTagsRequest()
    : LakeFormationRequest(new SearchTablesByLFTagsRequestPrivate(LakeFormationRequest::SearchTablesByLFTagsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchTablesByLFTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchTablesByLFTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchTablesByLFTagsRequest::response(QNetworkReply * const reply) const
{
    return new SearchTablesByLFTagsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::SearchTablesByLFTagsRequestPrivate
 * \brief The SearchTablesByLFTagsRequestPrivate class provides private implementation for SearchTablesByLFTagsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a SearchTablesByLFTagsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
SearchTablesByLFTagsRequestPrivate::SearchTablesByLFTagsRequestPrivate(
    const LakeFormationRequest::Action action, SearchTablesByLFTagsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchTablesByLFTagsRequest
 * class' copy constructor.
 */
SearchTablesByLFTagsRequestPrivate::SearchTablesByLFTagsRequestPrivate(
    const SearchTablesByLFTagsRequestPrivate &other, SearchTablesByLFTagsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
