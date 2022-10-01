// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateintentrequest.h"
#include "updateintentrequest_p.h"
#include "updateintentresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateIntentRequest
 * \brief The UpdateIntentRequest class provides an interface for LexModelsV2 UpdateIntent requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateIntent
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIntentRequest::UpdateIntentRequest(const UpdateIntentRequest &other)
    : LexModelsV2Request(new UpdateIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIntentRequest object.
 */
UpdateIntentRequest::UpdateIntentRequest()
    : LexModelsV2Request(new UpdateIntentRequestPrivate(LexModelsV2Request::UpdateIntentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIntentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateIntentRequestPrivate
 * \brief The UpdateIntentRequestPrivate class provides private implementation for UpdateIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateIntentRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateIntentRequestPrivate::UpdateIntentRequestPrivate(
    const LexModelsV2Request::Action action, UpdateIntentRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIntentRequest
 * class' copy constructor.
 */
UpdateIntentRequestPrivate::UpdateIntentRequestPrivate(
    const UpdateIntentRequestPrivate &other, UpdateIntentRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
