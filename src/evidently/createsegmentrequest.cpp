// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsegmentrequest.h"
#include "createsegmentrequest_p.h"
#include "createsegmentresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::CreateSegmentRequest
 * \brief The CreateSegmentRequest class provides an interface for Evidently CreateSegment requests.
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
 * \sa EvidentlyClient::createSegment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSegmentRequest::CreateSegmentRequest(const CreateSegmentRequest &other)
    : EvidentlyRequest(new CreateSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSegmentRequest object.
 */
CreateSegmentRequest::CreateSegmentRequest()
    : EvidentlyRequest(new CreateSegmentRequestPrivate(EvidentlyRequest::CreateSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSegmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSegmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::CreateSegmentRequestPrivate
 * \brief The CreateSegmentRequestPrivate class provides private implementation for CreateSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a CreateSegmentRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
CreateSegmentRequestPrivate::CreateSegmentRequestPrivate(
    const EvidentlyRequest::Action action, CreateSegmentRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSegmentRequest
 * class' copy constructor.
 */
CreateSegmentRequestPrivate::CreateSegmentRequestPrivate(
    const CreateSegmentRequestPrivate &other, CreateSegmentRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
