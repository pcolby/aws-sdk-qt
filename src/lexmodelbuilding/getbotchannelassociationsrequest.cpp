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

#include "getbotchannelassociationsrequest.h"
#include "getbotchannelassociationsrequest_p.h"
#include "getbotchannelassociationsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotChannelAssociationsRequest
 * \brief The GetBotChannelAssociationsRequest class provides an interface for LexModelBuilding GetBotChannelAssociations requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotChannelAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotChannelAssociationsRequest::GetBotChannelAssociationsRequest(const GetBotChannelAssociationsRequest &other)
    : LexModelBuildingRequest(new GetBotChannelAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotChannelAssociationsRequest object.
 */
GetBotChannelAssociationsRequest::GetBotChannelAssociationsRequest()
    : LexModelBuildingRequest(new GetBotChannelAssociationsRequestPrivate(LexModelBuildingRequest::GetBotChannelAssociationsAction, this))
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
 * \class QtAws::LexModelBuilding::GetBotChannelAssociationsRequestPrivate
 * \brief The GetBotChannelAssociationsRequestPrivate class provides private implementation for GetBotChannelAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotChannelAssociationsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotChannelAssociationsRequestPrivate::GetBotChannelAssociationsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotChannelAssociationsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
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
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
