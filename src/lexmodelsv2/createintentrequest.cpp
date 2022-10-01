// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createintentrequest.h"
#include "createintentrequest_p.h"
#include "createintentresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateIntentRequest
 * \brief The CreateIntentRequest class provides an interface for LexModelsV2 CreateIntent requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createIntent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIntentRequest::CreateIntentRequest(const CreateIntentRequest &other)
    : LexModelsV2Request(new CreateIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIntentRequest object.
 */
CreateIntentRequest::CreateIntentRequest()
    : LexModelsV2Request(new CreateIntentRequestPrivate(LexModelsV2Request::CreateIntentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIntentRequest::response(QNetworkReply * const reply) const
{
    return new CreateIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateIntentRequestPrivate
 * \brief The CreateIntentRequestPrivate class provides private implementation for CreateIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateIntentRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateIntentRequestPrivate::CreateIntentRequestPrivate(
    const LexModelsV2Request::Action action, CreateIntentRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIntentRequest
 * class' copy constructor.
 */
CreateIntentRequestPrivate::CreateIntentRequestPrivate(
    const CreateIntentRequestPrivate &other, CreateIntentRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
