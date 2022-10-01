// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotaliasesrequest.h"
#include "getbotaliasesrequest_p.h"
#include "getbotaliasesresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasesRequest
 * \brief The GetBotAliasesRequest class provides an interface for LexModelBuilding GetBotAliases requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotAliases
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotAliasesRequest::GetBotAliasesRequest(const GetBotAliasesRequest &other)
    : LexModelBuildingRequest(new GetBotAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotAliasesRequest object.
 */
GetBotAliasesRequest::GetBotAliasesRequest()
    : LexModelBuildingRequest(new GetBotAliasesRequestPrivate(LexModelBuildingRequest::GetBotAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotAliasesRequest::response(QNetworkReply * const reply) const
{
    return new GetBotAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasesRequestPrivate
 * \brief The GetBotAliasesRequestPrivate class provides private implementation for GetBotAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotAliasesRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotAliasesRequestPrivate::GetBotAliasesRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotAliasesRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotAliasesRequest
 * class' copy constructor.
 */
GetBotAliasesRequestPrivate::GetBotAliasesRequestPrivate(
    const GetBotAliasesRequestPrivate &other, GetBotAliasesRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
