/*
    Copyright 2013-2020 Paul Colby

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

#include "getbotchannelassociationsrequest.h"
#include "getbotchannelassociationsrequest_p.h"
#include "getbotchannelassociationsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotChannelAssociationsRequest
 * \brief The GetBotChannelAssociationsRequest class provides an interface for LexModelBuildingService GetBotChannelAssociations requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBotChannelAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotChannelAssociationsRequest::GetBotChannelAssociationsRequest(const GetBotChannelAssociationsRequest &other)
    : LexModelBuildingServiceRequest(new GetBotChannelAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotChannelAssociationsRequest object.
 */
GetBotChannelAssociationsRequest::GetBotChannelAssociationsRequest()
    : LexModelBuildingServiceRequest(new GetBotChannelAssociationsRequestPrivate(LexModelBuildingServiceRequest::GetBotChannelAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotChannelAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotChannelAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotChannelAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new GetBotChannelAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::GetBotChannelAssociationsRequestPrivate
 * \brief The GetBotChannelAssociationsRequestPrivate class provides private implementation for GetBotChannelAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotChannelAssociationsRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetBotChannelAssociationsRequestPrivate::GetBotChannelAssociationsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotChannelAssociationsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotChannelAssociationsRequest
 * class' copy constructor.
 */
GetBotChannelAssociationsRequestPrivate::GetBotChannelAssociationsRequestPrivate(
    const GetBotChannelAssociationsRequestPrivate &other, GetBotChannelAssociationsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
