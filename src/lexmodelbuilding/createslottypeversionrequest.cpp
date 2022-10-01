// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createslottypeversionrequest.h"
#include "createslottypeversionrequest_p.h"
#include "createslottypeversionresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::CreateSlotTypeVersionRequest
 * \brief The CreateSlotTypeVersionRequest class provides an interface for LexModelBuilding CreateSlotTypeVersion requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::createSlotTypeVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSlotTypeVersionRequest::CreateSlotTypeVersionRequest(const CreateSlotTypeVersionRequest &other)
    : LexModelBuildingRequest(new CreateSlotTypeVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSlotTypeVersionRequest object.
 */
CreateSlotTypeVersionRequest::CreateSlotTypeVersionRequest()
    : LexModelBuildingRequest(new CreateSlotTypeVersionRequestPrivate(LexModelBuildingRequest::CreateSlotTypeVersionAction, this))
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
 * \class QtAws::LexModelBuilding::CreateSlotTypeVersionRequestPrivate
 * \brief The CreateSlotTypeVersionRequestPrivate class provides private implementation for CreateSlotTypeVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a CreateSlotTypeVersionRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
CreateSlotTypeVersionRequestPrivate::CreateSlotTypeVersionRequestPrivate(
    const LexModelBuildingRequest::Action action, CreateSlotTypeVersionRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
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
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
