// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteslottypeversionrequest.h"
#include "deleteslottypeversionrequest_p.h"
#include "deleteslottypeversionresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeVersionRequest
 * \brief The DeleteSlotTypeVersionRequest class provides an interface for LexModelBuilding DeleteSlotTypeVersion requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteSlotTypeVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSlotTypeVersionRequest::DeleteSlotTypeVersionRequest(const DeleteSlotTypeVersionRequest &other)
    : LexModelBuildingRequest(new DeleteSlotTypeVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSlotTypeVersionRequest object.
 */
DeleteSlotTypeVersionRequest::DeleteSlotTypeVersionRequest()
    : LexModelBuildingRequest(new DeleteSlotTypeVersionRequestPrivate(LexModelBuildingRequest::DeleteSlotTypeVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSlotTypeVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSlotTypeVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSlotTypeVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSlotTypeVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeVersionRequestPrivate
 * \brief The DeleteSlotTypeVersionRequestPrivate class provides private implementation for DeleteSlotTypeVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteSlotTypeVersionRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteSlotTypeVersionRequestPrivate::DeleteSlotTypeVersionRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteSlotTypeVersionRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSlotTypeVersionRequest
 * class' copy constructor.
 */
DeleteSlotTypeVersionRequestPrivate::DeleteSlotTypeVersionRequestPrivate(
    const DeleteSlotTypeVersionRequestPrivate &other, DeleteSlotTypeVersionRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
