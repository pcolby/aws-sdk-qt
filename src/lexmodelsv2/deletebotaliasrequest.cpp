// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
