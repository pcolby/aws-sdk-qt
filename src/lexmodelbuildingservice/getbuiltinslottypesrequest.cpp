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

#include "getbuiltinslottypesrequest.h"
#include "getbuiltinslottypesrequest_p.h"
#include "getbuiltinslottypesresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinSlotTypesRequest
 * \brief The GetBuiltinSlotTypesRequest class provides an interface for LexModelBuilding GetBuiltinSlotTypes requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBuiltinSlotTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetBuiltinSlotTypesRequest::GetBuiltinSlotTypesRequest(const GetBuiltinSlotTypesRequest &other)
    : LexModelBuildingRequest(new GetBuiltinSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBuiltinSlotTypesRequest object.
 */
GetBuiltinSlotTypesRequest::GetBuiltinSlotTypesRequest()
    : LexModelBuildingRequest(new GetBuiltinSlotTypesRequestPrivate(LexModelBuildingRequest::GetBuiltinSlotTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetBuiltinSlotTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBuiltinSlotTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBuiltinSlotTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetBuiltinSlotTypesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinSlotTypesRequestPrivate
 * \brief The GetBuiltinSlotTypesRequestPrivate class provides private implementation for GetBuiltinSlotTypesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBuiltinSlotTypesRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBuiltinSlotTypesRequestPrivate::GetBuiltinSlotTypesRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBuiltinSlotTypesRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBuiltinSlotTypesRequest
 * class' copy constructor.
 */
GetBuiltinSlotTypesRequestPrivate::GetBuiltinSlotTypesRequestPrivate(
    const GetBuiltinSlotTypesRequestPrivate &other, GetBuiltinSlotTypesRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
