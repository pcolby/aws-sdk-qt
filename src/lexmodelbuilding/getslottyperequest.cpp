// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getslottyperequest.h"
#include "getslottyperequest_p.h"
#include "getslottyperesponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypeRequest
 * \brief The GetSlotTypeRequest class provides an interface for LexModelBuilding GetSlotType requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getSlotType
 */

/*!
 * Constructs a copy of \a other.
 */
GetSlotTypeRequest::GetSlotTypeRequest(const GetSlotTypeRequest &other)
    : LexModelBuildingRequest(new GetSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSlotTypeRequest object.
 */
GetSlotTypeRequest::GetSlotTypeRequest()
    : LexModelBuildingRequest(new GetSlotTypeRequestPrivate(LexModelBuildingRequest::GetSlotTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetSlotTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSlotTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypeResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypeRequestPrivate
 * \brief The GetSlotTypeRequestPrivate class provides private implementation for GetSlotTypeRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetSlotTypeRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetSlotTypeRequestPrivate::GetSlotTypeRequestPrivate(
    const LexModelBuildingRequest::Action action, GetSlotTypeRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypeRequest
 * class' copy constructor.
 */
GetSlotTypeRequestPrivate::GetSlotTypeRequestPrivate(
    const GetSlotTypeRequestPrivate &other, GetSlotTypeRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
