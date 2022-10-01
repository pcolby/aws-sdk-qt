// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesegmentrequest.h"
#include "deletesegmentrequest_p.h"
#include "deletesegmentresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::DeleteSegmentRequest
 * \brief The DeleteSegmentRequest class provides an interface for Evidently DeleteSegment requests.
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
 * \sa EvidentlyClient::deleteSegment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSegmentRequest::DeleteSegmentRequest(const DeleteSegmentRequest &other)
    : EvidentlyRequest(new DeleteSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSegmentRequest object.
 */
DeleteSegmentRequest::DeleteSegmentRequest()
    : EvidentlyRequest(new DeleteSegmentRequestPrivate(EvidentlyRequest::DeleteSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSegmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSegmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::DeleteSegmentRequestPrivate
 * \brief The DeleteSegmentRequestPrivate class provides private implementation for DeleteSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a DeleteSegmentRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
DeleteSegmentRequestPrivate::DeleteSegmentRequestPrivate(
    const EvidentlyRequest::Action action, DeleteSegmentRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSegmentRequest
 * class' copy constructor.
 */
DeleteSegmentRequestPrivate::DeleteSegmentRequestPrivate(
    const DeleteSegmentRequestPrivate &other, DeleteSegmentRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
