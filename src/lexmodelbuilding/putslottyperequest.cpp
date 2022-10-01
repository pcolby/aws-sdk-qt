// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putslottyperequest.h"
#include "putslottyperequest_p.h"
#include "putslottyperesponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::PutSlotTypeRequest
 * \brief The PutSlotTypeRequest class provides an interface for LexModelBuilding PutSlotType requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::putSlotType
 */

/*!
 * Constructs a copy of \a other.
 */
PutSlotTypeRequest::PutSlotTypeRequest(const PutSlotTypeRequest &other)
    : LexModelBuildingRequest(new PutSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSlotTypeRequest object.
 */
PutSlotTypeRequest::PutSlotTypeRequest()
    : LexModelBuildingRequest(new PutSlotTypeRequestPrivate(LexModelBuildingRequest::PutSlotTypeAction, this))
{

}

/*!
 * \reimp
 */
bool PutSlotTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutSlotTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new PutSlotTypeResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::PutSlotTypeRequestPrivate
 * \brief The PutSlotTypeRequestPrivate class provides private implementation for PutSlotTypeRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a PutSlotTypeRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
PutSlotTypeRequestPrivate::PutSlotTypeRequestPrivate(
    const LexModelBuildingRequest::Action action, PutSlotTypeRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutSlotTypeRequest
 * class' copy constructor.
 */
PutSlotTypeRequestPrivate::PutSlotTypeRequestPrivate(
    const PutSlotTypeRequestPrivate &other, PutSlotTypeRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
