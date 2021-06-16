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

#include "getslottypeversionsrequest.h"
#include "getslottypeversionsrequest_p.h"
#include "getslottypeversionsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetSlotTypeVersionsRequest
 * \brief The GetSlotTypeVersionsRequest class provides an interface for LexModelBuildingService GetSlotTypeVersions requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getSlotTypeVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetSlotTypeVersionsRequest::GetSlotTypeVersionsRequest(const GetSlotTypeVersionsRequest &other)
    : LexModelBuildingServiceRequest(new GetSlotTypeVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSlotTypeVersionsRequest object.
 */
GetSlotTypeVersionsRequest::GetSlotTypeVersionsRequest()
    : LexModelBuildingServiceRequest(new GetSlotTypeVersionsRequestPrivate(LexModelBuildingServiceRequest::GetSlotTypeVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSlotTypeVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSlotTypeVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSlotTypeVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypeVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::GetSlotTypeVersionsRequestPrivate
 * \brief The GetSlotTypeVersionsRequestPrivate class provides private implementation for GetSlotTypeVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetSlotTypeVersionsRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetSlotTypeVersionsRequestPrivate::GetSlotTypeVersionsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetSlotTypeVersionsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypeVersionsRequest
 * class' copy constructor.
 */
GetSlotTypeVersionsRequestPrivate::GetSlotTypeVersionsRequestPrivate(
    const GetSlotTypeVersionsRequestPrivate &other, GetSlotTypeVersionsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
