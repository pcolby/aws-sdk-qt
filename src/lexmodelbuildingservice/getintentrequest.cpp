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

#include "getintentrequest.h"
#include "getintentrequest_p.h"
#include "getintentresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetIntentRequest
 * \brief The GetIntentRequest class provides an interface for LexModelBuildingService GetIntent requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getIntent
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntentRequest::GetIntentRequest(const GetIntentRequest &other)
    : LexModelBuildingServiceRequest(new GetIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntentRequest object.
 */
GetIntentRequest::GetIntentRequest()
    : LexModelBuildingServiceRequest(new GetIntentRequestPrivate(LexModelBuildingServiceRequest::GetIntentAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntentRequest::response(QNetworkReply * const reply) const
{
    return new GetIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::GetIntentRequestPrivate
 * \brief The GetIntentRequestPrivate class provides private implementation for GetIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetIntentRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetIntentRequestPrivate::GetIntentRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetIntentRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntentRequest
 * class' copy constructor.
 */
GetIntentRequestPrivate::GetIntentRequestPrivate(
    const GetIntentRequestPrivate &other, GetIntentRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
