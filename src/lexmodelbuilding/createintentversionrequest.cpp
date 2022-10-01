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

#include "createintentversionrequest.h"
#include "createintentversionrequest_p.h"
#include "createintentversionresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::CreateIntentVersionRequest
 * \brief The CreateIntentVersionRequest class provides an interface for LexModelBuilding CreateIntentVersion requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::createIntentVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIntentVersionRequest::CreateIntentVersionRequest(const CreateIntentVersionRequest &other)
    : LexModelBuildingRequest(new CreateIntentVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIntentVersionRequest object.
 */
CreateIntentVersionRequest::CreateIntentVersionRequest()
    : LexModelBuildingRequest(new CreateIntentVersionRequestPrivate(LexModelBuildingRequest::CreateIntentVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIntentVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIntentVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIntentVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateIntentVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::CreateIntentVersionRequestPrivate
 * \brief The CreateIntentVersionRequestPrivate class provides private implementation for CreateIntentVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a CreateIntentVersionRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
CreateIntentVersionRequestPrivate::CreateIntentVersionRequestPrivate(
    const LexModelBuildingRequest::Action action, CreateIntentVersionRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIntentVersionRequest
 * class' copy constructor.
 */
CreateIntentVersionRequestPrivate::CreateIntentVersionRequestPrivate(
    const CreateIntentVersionRequestPrivate &other, CreateIntentVersionRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
