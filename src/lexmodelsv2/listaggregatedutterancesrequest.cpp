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

#include "listaggregatedutterancesrequest.h"
#include "listaggregatedutterancesrequest_p.h"
#include "listaggregatedutterancesresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListAggregatedUtterancesRequest
 * \brief The ListAggregatedUtterancesRequest class provides an interface for LexModelsV2 ListAggregatedUtterances requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listAggregatedUtterances
 */

/*!
 * Constructs a copy of \a other.
 */
ListAggregatedUtterancesRequest::ListAggregatedUtterancesRequest(const ListAggregatedUtterancesRequest &other)
    : LexModelsV2Request(new ListAggregatedUtterancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAggregatedUtterancesRequest object.
 */
ListAggregatedUtterancesRequest::ListAggregatedUtterancesRequest()
    : LexModelsV2Request(new ListAggregatedUtterancesRequestPrivate(LexModelsV2Request::ListAggregatedUtterancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAggregatedUtterancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAggregatedUtterancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAggregatedUtterancesRequest::response(QNetworkReply * const reply) const
{
    return new ListAggregatedUtterancesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListAggregatedUtterancesRequestPrivate
 * \brief The ListAggregatedUtterancesRequestPrivate class provides private implementation for ListAggregatedUtterancesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListAggregatedUtterancesRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListAggregatedUtterancesRequestPrivate::ListAggregatedUtterancesRequestPrivate(
    const LexModelsV2Request::Action action, ListAggregatedUtterancesRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAggregatedUtterancesRequest
 * class' copy constructor.
 */
ListAggregatedUtterancesRequestPrivate::ListAggregatedUtterancesRequestPrivate(
    const ListAggregatedUtterancesRequestPrivate &other, ListAggregatedUtterancesRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
