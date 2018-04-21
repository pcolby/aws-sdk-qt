/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createslottypeversionrequest.h"
#include "createslottypeversionrequest_p.h"
#include "createslottypeversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::CreateSlotTypeVersionRequest
 * \brief The CreateSlotTypeVersionRequest class provides an interface for LexModelBuildingService CreateSlotTypeVersion requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::createSlotTypeVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSlotTypeVersionRequest::CreateSlotTypeVersionRequest(const CreateSlotTypeVersionRequest &other)
    : LexModelBuildingServiceRequest(new CreateSlotTypeVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSlotTypeVersionRequest object.
 */
CreateSlotTypeVersionRequest::CreateSlotTypeVersionRequest()
    : LexModelBuildingServiceRequest(new CreateSlotTypeVersionRequestPrivate(LexModelBuildingServiceRequest::CreateSlotTypeVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSlotTypeVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSlotTypeVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSlotTypeVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSlotTypeVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::CreateSlotTypeVersionRequestPrivate
 * \brief The CreateSlotTypeVersionRequestPrivate class provides private implementation for CreateSlotTypeVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a CreateSlotTypeVersionRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
CreateSlotTypeVersionRequestPrivate::CreateSlotTypeVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, CreateSlotTypeVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSlotTypeVersionRequest
 * class' copy constructor.
 */
CreateSlotTypeVersionRequestPrivate::CreateSlotTypeVersionRequestPrivate(
    const CreateSlotTypeVersionRequestPrivate &other, CreateSlotTypeVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
