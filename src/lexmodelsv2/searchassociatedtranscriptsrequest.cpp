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
