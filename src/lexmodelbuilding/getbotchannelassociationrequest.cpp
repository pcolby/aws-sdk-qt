// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
