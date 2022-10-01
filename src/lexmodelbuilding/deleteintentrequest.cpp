// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintentrequest.h"
#include "deleteintentrequest_p.h"
#include "deleteintentresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentRequest
 * \brief The DeleteIntentRequest class provides an interface for LexModelBuilding DeleteIntent requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteIntent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntentRequest::DeleteIntentRequest(const DeleteIntentRequest &other)
    : LexModelBuildingRequest(new DeleteIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntentRequest object.
 */
DeleteIntentRequest::DeleteIntentRequest()
    : LexModelBuildingRequest(new DeleteIntentRequestPrivate(LexModelBuildingRequest::DeleteIntentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentRequestPrivate
 * \brief The DeleteIntentRequestPrivate class provides private implementation for DeleteIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteIntentRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteIntentRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntentRequest
 * class' copy constructor.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const DeleteIntentRequestPrivate &other, DeleteIntentRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
