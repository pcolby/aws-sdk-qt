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
