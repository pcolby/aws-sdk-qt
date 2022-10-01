// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentrequest.h"
#include "getsegmentrequest_p.h"
#include "getsegmentresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetSegmentRequest
 * \brief The GetSegmentRequest class provides an interface for Evidently GetSegment requests.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::getSegment
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentRequest::GetSegmentRequest(const GetSegmentRequest &other)
    : EvidentlyRequest(new GetSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentRequest object.
 */
GetSegmentRequest::GetSegmentRequest()
    : EvidentlyRequest(new GetSegmentRequestPrivate(EvidentlyRequest::GetSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::GetSegmentRequestPrivate
 * \brief The GetSegmentRequestPrivate class provides private implementation for GetSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetSegmentRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
GetSegmentRequestPrivate::GetSegmentRequestPrivate(
    const EvidentlyRequest::Action action, GetSegmentRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentRequest
 * class' copy constructor.
 */
GetSegmentRequestPrivate::GetSegmentRequestPrivate(
    const GetSegmentRequestPrivate &other, GetSegmentRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
