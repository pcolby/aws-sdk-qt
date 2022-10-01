// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatehitreviewstatusrequest.h"
#include "updatehitreviewstatusrequest_p.h"
#include "updatehitreviewstatusresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateHITReviewStatusRequest
 * \brief The UpdateHITReviewStatusRequest class provides an interface for MTurk UpdateHITReviewStatus requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateHITReviewStatus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateHITReviewStatusRequest::UpdateHITReviewStatusRequest(const UpdateHITReviewStatusRequest &other)
    : MTurkRequest(new UpdateHITReviewStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateHITReviewStatusRequest object.
 */
UpdateHITReviewStatusRequest::UpdateHITReviewStatusRequest()
    : MTurkRequest(new UpdateHITReviewStatusRequestPrivate(MTurkRequest::UpdateHITReviewStatusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateHITReviewStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateHITReviewStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateHITReviewStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHITReviewStatusResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::UpdateHITReviewStatusRequestPrivate
 * \brief The UpdateHITReviewStatusRequestPrivate class provides private implementation for UpdateHITReviewStatusRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateHITReviewStatusRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
UpdateHITReviewStatusRequestPrivate::UpdateHITReviewStatusRequestPrivate(
    const MTurkRequest::Action action, UpdateHITReviewStatusRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateHITReviewStatusRequest
 * class' copy constructor.
 */
UpdateHITReviewStatusRequestPrivate::UpdateHITReviewStatusRequestPrivate(
    const UpdateHITReviewStatusRequestPrivate &other, UpdateHITReviewStatusRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
