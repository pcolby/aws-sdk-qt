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

#include "getslottypesrequest.h"
#include "getslottypesrequest_p.h"
#include "getslottypesresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetSlotTypesRequest
 * \brief The GetSlotTypesRequest class provides an interface for LexModelBuildingService GetSlotTypes requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getSlotTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetSlotTypesRequest::GetSlotTypesRequest(const GetSlotTypesRequest &other)
    : LexModelBuildingServiceRequest(new GetSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSlotTypesRequest object.
 */
GetSlotTypesRequest::GetSlotTypesRequest()
    : LexModelBuildingServiceRequest(new GetSlotTypesRequestPrivate(LexModelBuildingServiceRequest::GetSlotTypesAction, this))
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
 * \class QtAws::LexModelBuildingService::GetSlotTypesRequestPrivate
 * \brief The GetSlotTypesRequestPrivate class provides private implementation for GetSlotTypesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetSlotTypesRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetSlotTypesRequestPrivate::GetSlotTypesRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetSlotTypesRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
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
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
