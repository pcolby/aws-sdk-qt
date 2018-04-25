/*
    Copyright 2013-2018 Paul Colby

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

#include "getintentversionsrequest.h"
#include "getintentversionsrequest_p.h"
#include "getintentversionsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetIntentVersionsRequest
 * \brief The GetIntentVersionsRequest class provides an interface for LexModelBuildingService GetIntentVersions requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getIntentVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntentVersionsRequest::GetIntentVersionsRequest(const GetIntentVersionsRequest &other)
    : LexModelBuildingServiceRequest(new GetIntentVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntentVersionsRequest object.
 */
GetIntentVersionsRequest::GetIntentVersionsRequest()
    : LexModelBuildingServiceRequest(new GetIntentVersionsRequestPrivate(LexModelBuildingServiceRequest::GetIntentVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntentVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntentVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntentVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetIntentVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::GetIntentVersionsRequestPrivate
 * \brief The GetIntentVersionsRequestPrivate class provides private implementation for GetIntentVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetIntentVersionsRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetIntentVersionsRequestPrivate::GetIntentVersionsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetIntentVersionsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntentVersionsRequest
 * class' copy constructor.
 */
GetIntentVersionsRequestPrivate::GetIntentVersionsRequestPrivate(
    const GetIntentVersionsRequestPrivate &other, GetIntentVersionsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
