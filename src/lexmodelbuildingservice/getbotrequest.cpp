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

#include "getbotrequest.h"
#include "getbotrequest_p.h"
#include "getbotresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotRequest
 * \brief The GetBotRequest class provides an interface for LexModelBuilding GetBot requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBot
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotRequest::GetBotRequest(const GetBotRequest &other)
    : LexModelBuildingRequest(new GetBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotRequest object.
 */
GetBotRequest::GetBotRequest()
    : LexModelBuildingRequest(new GetBotRequestPrivate(LexModelBuildingRequest::GetBotAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotRequest::response(QNetworkReply * const reply) const
{
    return new GetBotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBotRequestPrivate
 * \brief The GetBotRequestPrivate class provides private implementation for GetBotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotRequestPrivate::GetBotRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotRequest
 * class' copy constructor.
 */
GetBotRequestPrivate::GetBotRequestPrivate(
    const GetBotRequestPrivate &other, GetBotRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
