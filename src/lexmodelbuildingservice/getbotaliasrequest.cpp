/*
    Copyright 2013-2018 Paul Colby

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

#include "getbotaliasrequest.h"
#include "getbotaliasrequest_p.h"
#include "getbotaliasresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotAliasRequest
 * \brief The GetBotAliasRequest class provides an interface for LexModelBuildingService GetBotAlias requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBotAlias
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotAliasRequest::GetBotAliasRequest(const GetBotAliasRequest &other)
    : LexModelBuildingServiceRequest(new GetBotAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotAliasRequest object.
 */
GetBotAliasRequest::GetBotAliasRequest()
    : LexModelBuildingServiceRequest(new GetBotAliasRequestPrivate(LexModelBuildingServiceRequest::GetBotAliasAction, this))
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
 * \class QtAws::LexModelBuildingService::GetBotAliasRequestPrivate
 * \brief The GetBotAliasRequestPrivate class provides private implementation for GetBotAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotAliasRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetBotAliasRequestPrivate::GetBotAliasRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotAliasRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
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
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
