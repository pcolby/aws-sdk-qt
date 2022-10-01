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

#include "putbotrequest.h"
#include "putbotrequest_p.h"
#include "putbotresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::PutBotRequest
 * \brief The PutBotRequest class provides an interface for LexModelBuilding PutBot requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::putBot
 */

/*!
 * Constructs a copy of \a other.
 */
PutBotRequest::PutBotRequest(const PutBotRequest &other)
    : LexModelBuildingRequest(new PutBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBotRequest object.
 */
PutBotRequest::PutBotRequest()
    : LexModelBuildingRequest(new PutBotRequestPrivate(LexModelBuildingRequest::PutBotAction, this))
{

}

/*!
 * \reimp
 */
bool PutBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBotRequest::response(QNetworkReply * const reply) const
{
    return new PutBotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::PutBotRequestPrivate
 * \brief The PutBotRequestPrivate class provides private implementation for PutBotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a PutBotRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
PutBotRequestPrivate::PutBotRequestPrivate(
    const LexModelBuildingRequest::Action action, PutBotRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBotRequest
 * class' copy constructor.
 */
PutBotRequestPrivate::PutBotRequestPrivate(
    const PutBotRequestPrivate &other, PutBotRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
