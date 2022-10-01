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

#include "getbotversionsrequest.h"
#include "getbotversionsrequest_p.h"
#include "getbotversionsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotVersionsRequest
 * \brief The GetBotVersionsRequest class provides an interface for LexModelBuilding GetBotVersions requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotVersionsRequest::GetBotVersionsRequest(const GetBotVersionsRequest &other)
    : LexModelBuildingRequest(new GetBotVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotVersionsRequest object.
 */
GetBotVersionsRequest::GetBotVersionsRequest()
    : LexModelBuildingRequest(new GetBotVersionsRequestPrivate(LexModelBuildingRequest::GetBotVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetBotVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBotVersionsRequestPrivate
 * \brief The GetBotVersionsRequestPrivate class provides private implementation for GetBotVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotVersionsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotVersionsRequestPrivate::GetBotVersionsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotVersionsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotVersionsRequest
 * class' copy constructor.
 */
GetBotVersionsRequestPrivate::GetBotVersionsRequestPrivate(
    const GetBotVersionsRequestPrivate &other, GetBotVersionsRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
