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

#include "getintentsrequest.h"
#include "getintentsrequest_p.h"
#include "getintentsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetIntentsRequest
 * \brief The GetIntentsRequest class provides an interface for LexModelBuilding GetIntents requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getIntents
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntentsRequest::GetIntentsRequest(const GetIntentsRequest &other)
    : LexModelBuildingRequest(new GetIntentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntentsRequest object.
 */
GetIntentsRequest::GetIntentsRequest()
    : LexModelBuildingRequest(new GetIntentsRequestPrivate(LexModelBuildingRequest::GetIntentsAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntentsRequest::response(QNetworkReply * const reply) const
{
    return new GetIntentsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetIntentsRequestPrivate
 * \brief The GetIntentsRequestPrivate class provides private implementation for GetIntentsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetIntentsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetIntentsRequestPrivate::GetIntentsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetIntentsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntentsRequest
 * class' copy constructor.
 */
GetIntentsRequestPrivate::GetIntentsRequestPrivate(
    const GetIntentsRequestPrivate &other, GetIntentsRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
