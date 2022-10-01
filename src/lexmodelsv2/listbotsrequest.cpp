// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbotsrequest.h"
#include "listbotsrequest_p.h"
#include "listbotsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotsRequest
 * \brief The ListBotsRequest class provides an interface for LexModelsV2 ListBots requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBots
 */

/*!
 * Constructs a copy of \a other.
 */
ListBotsRequest::ListBotsRequest(const ListBotsRequest &other)
    : LexModelsV2Request(new ListBotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBotsRequest object.
 */
ListBotsRequest::ListBotsRequest()
    : LexModelsV2Request(new ListBotsRequestPrivate(LexModelsV2Request::ListBotsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBotsRequest::response(QNetworkReply * const reply) const
{
    return new ListBotsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBotsRequestPrivate
 * \brief The ListBotsRequestPrivate class provides private implementation for ListBotsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBotsRequestPrivate::ListBotsRequestPrivate(
    const LexModelsV2Request::Action action, ListBotsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBotsRequest
 * class' copy constructor.
 */
ListBotsRequestPrivate::ListBotsRequestPrivate(
    const ListBotsRequestPrivate &other, ListBotsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
