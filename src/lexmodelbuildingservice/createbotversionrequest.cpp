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

#include "createbotversionrequest.h"
#include "createbotversionrequest_p.h"
#include "createbotversionresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::CreateBotVersionRequest
 * \brief The CreateBotVersionRequest class provides an interface for LexModelBuilding CreateBotVersion requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::createBotVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBotVersionRequest::CreateBotVersionRequest(const CreateBotVersionRequest &other)
    : LexModelBuildingRequest(new CreateBotVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBotVersionRequest object.
 */
CreateBotVersionRequest::CreateBotVersionRequest()
    : LexModelBuildingRequest(new CreateBotVersionRequestPrivate(LexModelBuildingRequest::CreateBotVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBotVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBotVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBotVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateBotVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::CreateBotVersionRequestPrivate
 * \brief The CreateBotVersionRequestPrivate class provides private implementation for CreateBotVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a CreateBotVersionRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
CreateBotVersionRequestPrivate::CreateBotVersionRequestPrivate(
    const LexModelBuildingRequest::Action action, CreateBotVersionRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBotVersionRequest
 * class' copy constructor.
 */
CreateBotVersionRequestPrivate::CreateBotVersionRequestPrivate(
    const CreateBotVersionRequestPrivate &other, CreateBotVersionRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
