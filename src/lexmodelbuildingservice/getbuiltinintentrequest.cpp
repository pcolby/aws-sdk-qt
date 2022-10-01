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

#include "getbuiltinintentrequest.h"
#include "getbuiltinintentrequest_p.h"
#include "getbuiltinintentresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentRequest
 * \brief The GetBuiltinIntentRequest class provides an interface for LexModelBuilding GetBuiltinIntent requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBuiltinIntent
 */

/*!
 * Constructs a copy of \a other.
 */
GetBuiltinIntentRequest::GetBuiltinIntentRequest(const GetBuiltinIntentRequest &other)
    : LexModelBuildingRequest(new GetBuiltinIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBuiltinIntentRequest object.
 */
GetBuiltinIntentRequest::GetBuiltinIntentRequest()
    : LexModelBuildingRequest(new GetBuiltinIntentRequestPrivate(LexModelBuildingRequest::GetBuiltinIntentAction, this))
{

}

/*!
 * \reimp
 */
bool GetBuiltinIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBuiltinIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBuiltinIntentRequest::response(QNetworkReply * const reply) const
{
    return new GetBuiltinIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentRequestPrivate
 * \brief The GetBuiltinIntentRequestPrivate class provides private implementation for GetBuiltinIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBuiltinIntentRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBuiltinIntentRequestPrivate::GetBuiltinIntentRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBuiltinIntentRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBuiltinIntentRequest
 * class' copy constructor.
 */
GetBuiltinIntentRequestPrivate::GetBuiltinIntentRequestPrivate(
    const GetBuiltinIntentRequestPrivate &other, GetBuiltinIntentRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
