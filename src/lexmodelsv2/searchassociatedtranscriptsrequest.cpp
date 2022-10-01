// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchassociatedtranscriptsrequest.h"
#include "searchassociatedtranscriptsrequest_p.h"
#include "searchassociatedtranscriptsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::SearchAssociatedTranscriptsRequest
 * \brief The SearchAssociatedTranscriptsRequest class provides an interface for LexModelsV2 SearchAssociatedTranscripts requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::searchAssociatedTranscripts
 */

/*!
 * Constructs a copy of \a other.
 */
SearchAssociatedTranscriptsRequest::SearchAssociatedTranscriptsRequest(const SearchAssociatedTranscriptsRequest &other)
    : LexModelsV2Request(new SearchAssociatedTranscriptsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchAssociatedTranscriptsRequest object.
 */
SearchAssociatedTranscriptsRequest::SearchAssociatedTranscriptsRequest()
    : LexModelsV2Request(new SearchAssociatedTranscriptsRequestPrivate(LexModelsV2Request::SearchAssociatedTranscriptsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchAssociatedTranscriptsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchAssociatedTranscriptsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchAssociatedTranscriptsRequest::response(QNetworkReply * const reply) const
{
    return new SearchAssociatedTranscriptsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::SearchAssociatedTranscriptsRequestPrivate
 * \brief The SearchAssociatedTranscriptsRequestPrivate class provides private implementation for SearchAssociatedTranscriptsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a SearchAssociatedTranscriptsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
SearchAssociatedTranscriptsRequestPrivate::SearchAssociatedTranscriptsRequestPrivate(
    const LexModelsV2Request::Action action, SearchAssociatedTranscriptsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchAssociatedTranscriptsRequest
 * class' copy constructor.
 */
SearchAssociatedTranscriptsRequestPrivate::SearchAssociatedTranscriptsRequestPrivate(
    const SearchAssociatedTranscriptsRequestPrivate &other, SearchAssociatedTranscriptsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
