// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotaliasrequest.h"
#include "deletebotaliasrequest_p.h"
#include "deletebotaliasresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotAliasRequest
 * \brief The DeleteBotAliasRequest class provides an interface for LexModelBuilding DeleteBotAlias requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBotAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBotAliasRequest::DeleteBotAliasRequest(const DeleteBotAliasRequest &other)
    : LexModelBuildingRequest(new DeleteBotAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBotAliasRequest object.
 */
DeleteBotAliasRequest::DeleteBotAliasRequest()
    : LexModelBuildingRequest(new DeleteBotAliasRequestPrivate(LexModelBuildingRequest::DeleteBotAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBotAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBotAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotAliasResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotAliasRequestPrivate
 * \brief The DeleteBotAliasRequestPrivate class provides private implementation for DeleteBotAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotAliasRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteBotAliasRequestPrivate::DeleteBotAliasRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteBotAliasRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotAliasRequest
 * class' copy constructor.
 */
DeleteBotAliasRequestPrivate::DeleteBotAliasRequestPrivate(
    const DeleteBotAliasRequestPrivate &other, DeleteBotAliasRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
