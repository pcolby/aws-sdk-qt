// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotrequest.h"
#include "deletebotrequest_p.h"
#include "deletebotresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotRequest
 * \brief The DeleteBotRequest class provides an interface for LexModelBuilding DeleteBot requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBot
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBotRequest::DeleteBotRequest(const DeleteBotRequest &other)
    : LexModelBuildingRequest(new DeleteBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBotRequest object.
 */
DeleteBotRequest::DeleteBotRequest()
    : LexModelBuildingRequest(new DeleteBotRequestPrivate(LexModelBuildingRequest::DeleteBotAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotRequestPrivate
 * \brief The DeleteBotRequestPrivate class provides private implementation for DeleteBotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteBotRequestPrivate::DeleteBotRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteBotRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotRequest
 * class' copy constructor.
 */
DeleteBotRequestPrivate::DeleteBotRequestPrivate(
    const DeleteBotRequestPrivate &other, DeleteBotRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
