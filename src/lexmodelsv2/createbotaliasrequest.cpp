// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbotaliasrequest.h"
#include "createbotaliasrequest_p.h"
#include "createbotaliasresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotAliasRequest
 * \brief The CreateBotAliasRequest class provides an interface for LexModelsV2 CreateBotAlias requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBotAlias
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBotAliasRequest::CreateBotAliasRequest(const CreateBotAliasRequest &other)
    : LexModelsV2Request(new CreateBotAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBotAliasRequest object.
 */
CreateBotAliasRequest::CreateBotAliasRequest()
    : LexModelsV2Request(new CreateBotAliasRequestPrivate(LexModelsV2Request::CreateBotAliasAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBotAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBotAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new CreateBotAliasResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateBotAliasRequestPrivate
 * \brief The CreateBotAliasRequestPrivate class provides private implementation for CreateBotAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotAliasRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateBotAliasRequestPrivate::CreateBotAliasRequestPrivate(
    const LexModelsV2Request::Action action, CreateBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBotAliasRequest
 * class' copy constructor.
 */
CreateBotAliasRequestPrivate::CreateBotAliasRequestPrivate(
    const CreateBotAliasRequestPrivate &other, CreateBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
