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

#include "deleteslottyperequest.h"
#include "deleteslottyperequest_p.h"
#include "deleteslottyperesponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeRequest
 * \brief The DeleteSlotTypeRequest class provides an interface for LexModelBuilding DeleteSlotType requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteSlotType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSlotTypeRequest::DeleteSlotTypeRequest(const DeleteSlotTypeRequest &other)
    : LexModelBuildingRequest(new DeleteSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSlotTypeRequest object.
 */
DeleteSlotTypeRequest::DeleteSlotTypeRequest()
    : LexModelBuildingRequest(new DeleteSlotTypeRequestPrivate(LexModelBuildingRequest::DeleteSlotTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSlotTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSlotTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSlotTypeResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeRequestPrivate
 * \brief The DeleteSlotTypeRequestPrivate class provides private implementation for DeleteSlotTypeRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteSlotTypeRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteSlotTypeRequestPrivate::DeleteSlotTypeRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteSlotTypeRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSlotTypeRequest
 * class' copy constructor.
 */
DeleteSlotTypeRequestPrivate::DeleteSlotTypeRequestPrivate(
    const DeleteSlotTypeRequestPrivate &other, DeleteSlotTypeRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
