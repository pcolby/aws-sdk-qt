/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbotaliasesrequest.h"
#include "getbotaliasesrequest_p.h"
#include "getbotaliasesresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotAliasesRequest
 * \brief The GetBotAliasesRequest class provides an interface for LexModelBuildingService GetBotAliases requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBotAliases
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotAliasesRequest::GetBotAliasesRequest(const GetBotAliasesRequest &other)
    : LexModelBuildingServiceRequest(new GetBotAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotAliasesRequest object.
 */
GetBotAliasesRequest::GetBotAliasesRequest()
    : LexModelBuildingServiceRequest(new GetBotAliasesRequestPrivate(LexModelBuildingServiceRequest::GetBotAliasesAction, this))
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
 * \class QtAws::LexModelBuildingService::GetBotAliasesRequestPrivate
 * \brief The GetBotAliasesRequestPrivate class provides private implementation for GetBotAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotAliasesRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetBotAliasesRequestPrivate::GetBotAliasesRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotAliasesRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
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
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
