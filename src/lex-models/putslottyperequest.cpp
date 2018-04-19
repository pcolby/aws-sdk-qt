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

#include "putslottyperequest.h"
#include "putslottyperequest_p.h"
#include "putslottyperesponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::PutSlotTypeRequest
 * \brief The PutSlotTypeRequest class provides an interface for LexModelBuildingService PutSlotType requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::putSlotType
 */

/*!
 * Constructs a copy of \a other.
 */
PutSlotTypeRequest::PutSlotTypeRequest(const PutSlotTypeRequest &other)
    : LexModelBuildingServiceRequest(new PutSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSlotTypeRequest object.
 */
PutSlotTypeRequest::PutSlotTypeRequest()
    : LexModelBuildingServiceRequest(new PutSlotTypeRequestPrivate(LexModelBuildingServiceRequest::PutSlotTypeAction, this))
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
 * \class QtAws::LexModelBuildingService::PutSlotTypeRequestPrivate
 * \brief The PutSlotTypeRequestPrivate class provides private implementation for PutSlotTypeRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a PutSlotTypeRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
PutSlotTypeRequestPrivate::PutSlotTypeRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, PutSlotTypeRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
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
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
