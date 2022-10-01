// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
