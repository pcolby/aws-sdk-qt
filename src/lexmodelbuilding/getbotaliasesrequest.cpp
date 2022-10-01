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
