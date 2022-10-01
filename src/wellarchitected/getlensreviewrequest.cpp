// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlensreviewrequest.h"
#include "getlensreviewrequest_p.h"
#include "getlensreviewresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetLensReviewRequest
 * \brief The GetLensReviewRequest class provides an interface for WellArchitected GetLensReview requests.
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
 * \sa WellArchitectedClient::getLensReview
 */

/*!
 * Constructs a copy of \a other.
 */
GetLensReviewRequest::GetLensReviewRequest(const GetLensReviewRequest &other)
    : WellArchitectedRequest(new GetLensReviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLensReviewRequest object.
 */
GetLensReviewRequest::GetLensReviewRequest()
    : WellArchitectedRequest(new GetLensReviewRequestPrivate(WellArchitectedRequest::GetLensReviewAction, this))
{

}

/*!
 * \reimp
 */
bool GetLensReviewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLensReviewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLensReviewRequest::response(QNetworkReply * const reply) const
{
    return new GetLensReviewResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::GetLensReviewRequestPrivate
 * \brief The GetLensReviewRequestPrivate class provides private implementation for GetLensReviewRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetLensReviewRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
GetLensReviewRequestPrivate::GetLensReviewRequestPrivate(
    const WellArchitectedRequest::Action action, GetLensReviewRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLensReviewRequest
 * class' copy constructor.
 */
GetLensReviewRequestPrivate::GetLensReviewRequestPrivate(
    const GetLensReviewRequestPrivate &other, GetLensReviewRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
