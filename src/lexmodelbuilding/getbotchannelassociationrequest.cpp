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

#include "getbotchannelassociationrequest.h"
#include "getbotchannelassociationrequest_p.h"
#include "getbotchannelassociationresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotChannelAssociationRequest
 * \brief The GetBotChannelAssociationRequest class provides an interface for LexModelBuilding GetBotChannelAssociation requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotChannelAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotChannelAssociationRequest::GetBotChannelAssociationRequest(const GetBotChannelAssociationRequest &other)
    : LexModelBuildingRequest(new GetBotChannelAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotChannelAssociationRequest object.
 */
GetBotChannelAssociationRequest::GetBotChannelAssociationRequest()
    : LexModelBuildingRequest(new GetBotChannelAssociationRequestPrivate(LexModelBuildingRequest::GetBotChannelAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotChannelAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotChannelAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotChannelAssociationRequest::response(QNetworkReply * const reply) const
{
    return new GetBotChannelAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBotChannelAssociationRequestPrivate
 * \brief The GetBotChannelAssociationRequestPrivate class provides private implementation for GetBotChannelAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotChannelAssociationRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotChannelAssociationRequestPrivate::GetBotChannelAssociationRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotChannelAssociationRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotChannelAssociationRequest
 * class' copy constructor.
 */
GetBotChannelAssociationRequestPrivate::GetBotChannelAssociationRequestPrivate(
    const GetBotChannelAssociationRequestPrivate &other, GetBotChannelAssociationRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
