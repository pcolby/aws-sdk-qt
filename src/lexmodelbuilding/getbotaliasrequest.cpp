// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotaliasrequest.h"
#include "getbotaliasrequest_p.h"
#include "getbotaliasresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasRequest
 * \brief The GetBotAliasRequest class provides an interface for LexModelBuilding GetBotAlias requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotAlias
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotAliasRequest::GetBotAliasRequest(const GetBotAliasRequest &other)
    : LexModelBuildingRequest(new GetBotAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotAliasRequest object.
 */
GetBotAliasRequest::GetBotAliasRequest()
    : LexModelBuildingRequest(new GetBotAliasRequestPrivate(LexModelBuildingRequest::GetBotAliasAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new GetBotAliasResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasRequestPrivate
 * \brief The GetBotAliasRequestPrivate class provides private implementation for GetBotAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotAliasRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotAliasRequestPrivate::GetBotAliasRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotAliasRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotAliasRequest
 * class' copy constructor.
 */
GetBotAliasRequestPrivate::GetBotAliasRequestPrivate(
    const GetBotAliasRequestPrivate &other, GetBotAliasRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
