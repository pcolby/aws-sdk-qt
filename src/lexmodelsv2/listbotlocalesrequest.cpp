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

#include "listbotlocalesrequest.h"
#include "listbotlocalesrequest_p.h"
#include "listbotlocalesresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotLocalesRequest
 * \brief The ListBotLocalesRequest class provides an interface for LexModelsV2 ListBotLocales requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotLocales
 */

/*!
 * Constructs a copy of \a other.
 */
ListBotLocalesRequest::ListBotLocalesRequest(const ListBotLocalesRequest &other)
    : LexModelsV2Request(new ListBotLocalesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBotLocalesRequest object.
 */
ListBotLocalesRequest::ListBotLocalesRequest()
    : LexModelsV2Request(new ListBotLocalesRequestPrivate(LexModelsV2Request::ListBotLocalesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBotLocalesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBotLocalesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBotLocalesRequest::response(QNetworkReply * const reply) const
{
    return new ListBotLocalesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBotLocalesRequestPrivate
 * \brief The ListBotLocalesRequestPrivate class provides private implementation for ListBotLocalesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotLocalesRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBotLocalesRequestPrivate::ListBotLocalesRequestPrivate(
    const LexModelsV2Request::Action action, ListBotLocalesRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBotLocalesRequest
 * class' copy constructor.
 */
ListBotLocalesRequestPrivate::ListBotLocalesRequestPrivate(
    const ListBotLocalesRequestPrivate &other, ListBotLocalesRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
