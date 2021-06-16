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

#include "getslottyperequest.h"
#include "getslottyperequest_p.h"
#include "getslottyperesponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetSlotTypeRequest
 * \brief The GetSlotTypeRequest class provides an interface for LexModelBuildingService GetSlotType requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getSlotType
 */

/*!
 * Constructs a copy of \a other.
 */
GetSlotTypeRequest::GetSlotTypeRequest(const GetSlotTypeRequest &other)
    : LexModelBuildingServiceRequest(new GetSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSlotTypeRequest object.
 */
GetSlotTypeRequest::GetSlotTypeRequest()
    : LexModelBuildingServiceRequest(new GetSlotTypeRequestPrivate(LexModelBuildingServiceRequest::GetSlotTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetSlotTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSlotTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypeResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::GetSlotTypeRequestPrivate
 * \brief The GetSlotTypeRequestPrivate class provides private implementation for GetSlotTypeRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetSlotTypeRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetSlotTypeRequestPrivate::GetSlotTypeRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetSlotTypeRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypeRequest
 * class' copy constructor.
 */
GetSlotTypeRequestPrivate::GetSlotTypeRequestPrivate(
    const GetSlotTypeRequestPrivate &other, GetSlotTypeRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
