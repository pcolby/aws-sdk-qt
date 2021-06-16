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
