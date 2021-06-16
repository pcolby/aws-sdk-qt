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

#include "updatebotaliasrequest.h"
#include "updatebotaliasrequest_p.h"
#include "updatebotaliasresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotAliasRequest
 * \brief The UpdateBotAliasRequest class provides an interface for LexModelsV2 UpdateBotAlias requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBotAlias
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBotAliasRequest::UpdateBotAliasRequest(const UpdateBotAliasRequest &other)
    : LexModelsV2Request(new UpdateBotAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBotAliasRequest object.
 */
UpdateBotAliasRequest::UpdateBotAliasRequest()
    : LexModelsV2Request(new UpdateBotAliasRequestPrivate(LexModelsV2Request::UpdateBotAliasAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBotAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBotAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBotAliasResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotAliasRequestPrivate
 * \brief The UpdateBotAliasRequestPrivate class provides private implementation for UpdateBotAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotAliasRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateBotAliasRequestPrivate::UpdateBotAliasRequestPrivate(
    const LexModelsV2Request::Action action, UpdateBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBotAliasRequest
 * class' copy constructor.
 */
UpdateBotAliasRequestPrivate::UpdateBotAliasRequestPrivate(
    const UpdateBotAliasRequestPrivate &other, UpdateBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
