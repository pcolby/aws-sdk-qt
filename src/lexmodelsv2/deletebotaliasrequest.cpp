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

#include "deletebotaliasrequest.h"
#include "deletebotaliasrequest_p.h"
#include "deletebotaliasresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotAliasRequest
 * \brief The DeleteBotAliasRequest class provides an interface for LexModelsV2 DeleteBotAlias requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBotAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBotAliasRequest::DeleteBotAliasRequest(const DeleteBotAliasRequest &other)
    : LexModelsV2Request(new DeleteBotAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBotAliasRequest object.
 */
DeleteBotAliasRequest::DeleteBotAliasRequest()
    : LexModelsV2Request(new DeleteBotAliasRequestPrivate(LexModelsV2Request::DeleteBotAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBotAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBotAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotAliasResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotAliasRequestPrivate
 * \brief The DeleteBotAliasRequestPrivate class provides private implementation for DeleteBotAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotAliasRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteBotAliasRequestPrivate::DeleteBotAliasRequestPrivate(
    const LexModelsV2Request::Action action, DeleteBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotAliasRequest
 * class' copy constructor.
 */
DeleteBotAliasRequestPrivate::DeleteBotAliasRequestPrivate(
    const DeleteBotAliasRequestPrivate &other, DeleteBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
