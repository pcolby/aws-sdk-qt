// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createslotrequest.h"
#include "createslotrequest_p.h"
#include "createslotresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateSlotRequest
 * \brief The CreateSlotRequest class provides an interface for LexModelsV2 CreateSlot requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createSlot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSlotRequest::CreateSlotRequest(const CreateSlotRequest &other)
    : LexModelsV2Request(new CreateSlotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSlotRequest object.
 */
CreateSlotRequest::CreateSlotRequest()
    : LexModelsV2Request(new CreateSlotRequestPrivate(LexModelsV2Request::CreateSlotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSlotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSlotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSlotRequest::response(QNetworkReply * const reply) const
{
    return new CreateSlotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateSlotRequestPrivate
 * \brief The CreateSlotRequestPrivate class provides private implementation for CreateSlotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateSlotRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateSlotRequestPrivate::CreateSlotRequestPrivate(
    const LexModelsV2Request::Action action, CreateSlotRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSlotRequest
 * class' copy constructor.
 */
CreateSlotRequestPrivate::CreateSlotRequestPrivate(
    const CreateSlotRequestPrivate &other, CreateSlotRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
