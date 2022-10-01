// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbotaliasrequest.h"
#include "putbotaliasrequest_p.h"
#include "putbotaliasresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::PutBotAliasRequest
 * \brief The PutBotAliasRequest class provides an interface for LexModelBuilding PutBotAlias requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::putBotAlias
 */

/*!
 * Constructs a copy of \a other.
 */
PutBotAliasRequest::PutBotAliasRequest(const PutBotAliasRequest &other)
    : LexModelBuildingRequest(new PutBotAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBotAliasRequest object.
 */
PutBotAliasRequest::PutBotAliasRequest()
    : LexModelBuildingRequest(new PutBotAliasRequestPrivate(LexModelBuildingRequest::PutBotAliasAction, this))
{

}

/*!
 * \reimp
 */
bool PutBotAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBotAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new PutBotAliasResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::PutBotAliasRequestPrivate
 * \brief The PutBotAliasRequestPrivate class provides private implementation for PutBotAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a PutBotAliasRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
PutBotAliasRequestPrivate::PutBotAliasRequestPrivate(
    const LexModelBuildingRequest::Action action, PutBotAliasRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBotAliasRequest
 * class' copy constructor.
 */
PutBotAliasRequestPrivate::PutBotAliasRequestPrivate(
    const PutBotAliasRequestPrivate &other, PutBotAliasRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
