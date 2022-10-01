// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateexpirationforhitrequest.h"
#include "updateexpirationforhitrequest_p.h"
#include "updateexpirationforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateExpirationForHITRequest
 * \brief The UpdateExpirationForHITRequest class provides an interface for MTurk UpdateExpirationForHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateExpirationForHIT
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateExpirationForHITRequest::UpdateExpirationForHITRequest(const UpdateExpirationForHITRequest &other)
    : MTurkRequest(new UpdateExpirationForHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateExpirationForHITRequest object.
 */
UpdateExpirationForHITRequest::UpdateExpirationForHITRequest()
    : MTurkRequest(new UpdateExpirationForHITRequestPrivate(MTurkRequest::UpdateExpirationForHITAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateExpirationForHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateExpirationForHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateExpirationForHITRequest::response(QNetworkReply * const reply) const
{
    return new UpdateExpirationForHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::UpdateExpirationForHITRequestPrivate
 * \brief The UpdateExpirationForHITRequestPrivate class provides private implementation for UpdateExpirationForHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateExpirationForHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
UpdateExpirationForHITRequestPrivate::UpdateExpirationForHITRequestPrivate(
    const MTurkRequest::Action action, UpdateExpirationForHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateExpirationForHITRequest
 * class' copy constructor.
 */
UpdateExpirationForHITRequestPrivate::UpdateExpirationForHITRequestPrivate(
    const UpdateExpirationForHITRequestPrivate &other, UpdateExpirationForHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
