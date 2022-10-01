// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
