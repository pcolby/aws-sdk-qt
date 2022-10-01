// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintentversionrequest.h"
#include "deleteintentversionrequest_p.h"
#include "deleteintentversionresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentVersionRequest
 * \brief The DeleteIntentVersionRequest class provides an interface for LexModelBuilding DeleteIntentVersion requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteIntentVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntentVersionRequest::DeleteIntentVersionRequest(const DeleteIntentVersionRequest &other)
    : LexModelBuildingRequest(new DeleteIntentVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntentVersionRequest object.
 */
DeleteIntentVersionRequest::DeleteIntentVersionRequest()
    : LexModelBuildingRequest(new DeleteIntentVersionRequestPrivate(LexModelBuildingRequest::DeleteIntentVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntentVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntentVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntentVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntentVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentVersionRequestPrivate
 * \brief The DeleteIntentVersionRequestPrivate class provides private implementation for DeleteIntentVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteIntentVersionRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteIntentVersionRequestPrivate::DeleteIntentVersionRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteIntentVersionRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntentVersionRequest
 * class' copy constructor.
 */
DeleteIntentVersionRequestPrivate::DeleteIntentVersionRequestPrivate(
    const DeleteIntentVersionRequestPrivate &other, DeleteIntentVersionRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
