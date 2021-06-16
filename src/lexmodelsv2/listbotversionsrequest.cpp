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

#include "listbotversionsrequest.h"
#include "listbotversionsrequest_p.h"
#include "listbotversionsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotVersionsRequest
 * \brief The ListBotVersionsRequest class provides an interface for LexModelsV2 ListBotVersions requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListBotVersionsRequest::ListBotVersionsRequest(const ListBotVersionsRequest &other)
    : LexModelsV2Request(new ListBotVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBotVersionsRequest object.
 */
ListBotVersionsRequest::ListBotVersionsRequest()
    : LexModelsV2Request(new ListBotVersionsRequestPrivate(LexModelsV2Request::ListBotVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBotVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBotVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBotVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListBotVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBotVersionsRequestPrivate
 * \brief The ListBotVersionsRequestPrivate class provides private implementation for ListBotVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotVersionsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBotVersionsRequestPrivate::ListBotVersionsRequestPrivate(
    const LexModelsV2Request::Action action, ListBotVersionsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBotVersionsRequest
 * class' copy constructor.
 */
ListBotVersionsRequestPrivate::ListBotVersionsRequestPrivate(
    const ListBotVersionsRequestPrivate &other, ListBotVersionsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
