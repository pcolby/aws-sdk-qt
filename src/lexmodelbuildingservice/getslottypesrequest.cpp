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

#include "getslottypesrequest.h"
#include "getslottypesrequest_p.h"
#include "getslottypesresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypesRequest
 * \brief The GetSlotTypesRequest class provides an interface for LexModelBuilding GetSlotTypes requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getSlotTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetSlotTypesRequest::GetSlotTypesRequest(const GetSlotTypesRequest &other)
    : LexModelBuildingRequest(new GetSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSlotTypesRequest object.
 */
GetSlotTypesRequest::GetSlotTypesRequest()
    : LexModelBuildingRequest(new GetSlotTypesRequestPrivate(LexModelBuildingRequest::GetSlotTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSlotTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSlotTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSlotTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypesRequestPrivate
 * \brief The GetSlotTypesRequestPrivate class provides private implementation for GetSlotTypesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetSlotTypesRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetSlotTypesRequestPrivate::GetSlotTypesRequestPrivate(
    const LexModelBuildingRequest::Action action, GetSlotTypesRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypesRequest
 * class' copy constructor.
 */
GetSlotTypesRequestPrivate::GetSlotTypesRequestPrivate(
    const GetSlotTypesRequestPrivate &other, GetSlotTypesRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
