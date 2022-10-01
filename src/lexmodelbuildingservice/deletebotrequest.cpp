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
