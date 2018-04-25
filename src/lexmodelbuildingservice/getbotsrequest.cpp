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

#include "getbotsrequest.h"
#include "getbotsrequest_p.h"
#include "getbotsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotsRequest
 * \brief The GetBotsRequest class provides an interface for LexModelBuildingService GetBots requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBots
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotsRequest::GetBotsRequest(const GetBotsRequest &other)
    : LexModelBuildingServiceRequest(new GetBotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotsRequest object.
 */
GetBotsRequest::GetBotsRequest()
    : LexModelBuildingServiceRequest(new GetBotsRequestPrivate(LexModelBuildingServiceRequest::GetBotsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotsRequest::response(QNetworkReply * const reply) const
{
    return new GetBotsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::GetBotsRequestPrivate
 * \brief The GetBotsRequestPrivate class provides private implementation for GetBotsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotsRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetBotsRequestPrivate::GetBotsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotsRequest
 * class' copy constructor.
 */
GetBotsRequestPrivate::GetBotsRequestPrivate(
    const GetBotsRequestPrivate &other, GetBotsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
