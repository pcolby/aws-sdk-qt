// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotchannelassociationrequest.h"
#include "deletebotchannelassociationrequest_p.h"
#include "deletebotchannelassociationresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotChannelAssociationRequest
 * \brief The DeleteBotChannelAssociationRequest class provides an interface for LexModelBuilding DeleteBotChannelAssociation requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBotChannelAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBotChannelAssociationRequest::DeleteBotChannelAssociationRequest(const DeleteBotChannelAssociationRequest &other)
    : LexModelBuildingRequest(new DeleteBotChannelAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBotChannelAssociationRequest object.
 */
DeleteBotChannelAssociationRequest::DeleteBotChannelAssociationRequest()
    : LexModelBuildingRequest(new DeleteBotChannelAssociationRequestPrivate(LexModelBuildingRequest::DeleteBotChannelAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBotChannelAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBotChannelAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBotChannelAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotChannelAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotChannelAssociationRequestPrivate
 * \brief The DeleteBotChannelAssociationRequestPrivate class provides private implementation for DeleteBotChannelAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotChannelAssociationRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteBotChannelAssociationRequestPrivate::DeleteBotChannelAssociationRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteBotChannelAssociationRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotChannelAssociationRequest
 * class' copy constructor.
 */
DeleteBotChannelAssociationRequestPrivate::DeleteBotChannelAssociationRequestPrivate(
    const DeleteBotChannelAssociationRequestPrivate &other, DeleteBotChannelAssociationRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
