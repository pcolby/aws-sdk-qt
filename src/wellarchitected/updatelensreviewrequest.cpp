// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelensreviewrequest.h"
#include "updatelensreviewrequest_p.h"
#include "updatelensreviewresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateLensReviewRequest
 * \brief The UpdateLensReviewRequest class provides an interface for WellArchitected UpdateLensReview requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::updateLensReview
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLensReviewRequest::UpdateLensReviewRequest(const UpdateLensReviewRequest &other)
    : WellArchitectedRequest(new UpdateLensReviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLensReviewRequest object.
 */
UpdateLensReviewRequest::UpdateLensReviewRequest()
    : WellArchitectedRequest(new UpdateLensReviewRequestPrivate(WellArchitectedRequest::UpdateLensReviewAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLensReviewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLensReviewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLensReviewRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLensReviewResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::UpdateLensReviewRequestPrivate
 * \brief The UpdateLensReviewRequestPrivate class provides private implementation for UpdateLensReviewRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateLensReviewRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
UpdateLensReviewRequestPrivate::UpdateLensReviewRequestPrivate(
    const WellArchitectedRequest::Action action, UpdateLensReviewRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLensReviewRequest
 * class' copy constructor.
 */
UpdateLensReviewRequestPrivate::UpdateLensReviewRequestPrivate(
    const UpdateLensReviewRequestPrivate &other, UpdateLensReviewRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
