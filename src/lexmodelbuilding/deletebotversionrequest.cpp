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
