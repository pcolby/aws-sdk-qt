// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotversionrequest.h"
#include "deletebotversionrequest_p.h"
#include "deletebotversionresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotVersionRequest
 * \brief The DeleteBotVersionRequest class provides an interface for LexModelBuilding DeleteBotVersion requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBotVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBotVersionRequest::DeleteBotVersionRequest(const DeleteBotVersionRequest &other)
    : LexModelBuildingRequest(new DeleteBotVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBotVersionRequest object.
 */
DeleteBotVersionRequest::DeleteBotVersionRequest()
    : LexModelBuildingRequest(new DeleteBotVersionRequestPrivate(LexModelBuildingRequest::DeleteBotVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBotVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBotVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBotVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotVersionRequestPrivate
 * \brief The DeleteBotVersionRequestPrivate class provides private implementation for DeleteBotVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotVersionRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteBotVersionRequestPrivate::DeleteBotVersionRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteBotVersionRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotVersionRequest
 * class' copy constructor.
 */
DeleteBotVersionRequestPrivate::DeleteBotVersionRequestPrivate(
    const DeleteBotVersionRequestPrivate &other, DeleteBotVersionRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
