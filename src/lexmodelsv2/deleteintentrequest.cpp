// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintentrequest.h"
#include "deleteintentrequest_p.h"
#include "deleteintentresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteIntentRequest
 * \brief The DeleteIntentRequest class provides an interface for LexModelsV2 DeleteIntent requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteIntent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntentRequest::DeleteIntentRequest(const DeleteIntentRequest &other)
    : LexModelsV2Request(new DeleteIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntentRequest object.
 */
DeleteIntentRequest::DeleteIntentRequest()
    : LexModelsV2Request(new DeleteIntentRequestPrivate(LexModelsV2Request::DeleteIntentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteIntentRequestPrivate
 * \brief The DeleteIntentRequestPrivate class provides private implementation for DeleteIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteIntentRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const LexModelsV2Request::Action action, DeleteIntentRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntentRequest
 * class' copy constructor.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const DeleteIntentRequestPrivate &other, DeleteIntentRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
