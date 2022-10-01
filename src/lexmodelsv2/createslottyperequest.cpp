// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
