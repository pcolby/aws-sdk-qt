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

#include "createslottyperequest.h"
#include "createslottyperequest_p.h"
#include "createslottyperesponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateSlotTypeRequest
 * \brief The CreateSlotTypeRequest class provides an interface for LexModelsV2 CreateSlotType requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createSlotType
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSlotTypeRequest::CreateSlotTypeRequest(const CreateSlotTypeRequest &other)
    : LexModelsV2Request(new CreateSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSlotTypeRequest object.
 */
CreateSlotTypeRequest::CreateSlotTypeRequest()
    : LexModelsV2Request(new CreateSlotTypeRequestPrivate(LexModelsV2Request::CreateSlotTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSlotTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSlotTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateSlotTypeResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateSlotTypeRequestPrivate
 * \brief The CreateSlotTypeRequestPrivate class provides private implementation for CreateSlotTypeRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateSlotTypeRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateSlotTypeRequestPrivate::CreateSlotTypeRequestPrivate(
    const LexModelsV2Request::Action action, CreateSlotTypeRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSlotTypeRequest
 * class' copy constructor.
 */
CreateSlotTypeRequestPrivate::CreateSlotTypeRequestPrivate(
    const CreateSlotTypeRequestPrivate &other, CreateSlotTypeRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
