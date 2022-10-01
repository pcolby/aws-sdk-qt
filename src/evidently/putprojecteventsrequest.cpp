// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putprojecteventsrequest.h"
#include "putprojecteventsrequest_p.h"
#include "putprojecteventsresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::PutProjectEventsRequest
 * \brief The PutProjectEventsRequest class provides an interface for Evidently PutProjectEvents requests.
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
 * \sa EvidentlyClient::putProjectEvents
 */

/*!
 * Constructs a copy of \a other.
 */
PutProjectEventsRequest::PutProjectEventsRequest(const PutProjectEventsRequest &other)
    : EvidentlyRequest(new PutProjectEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutProjectEventsRequest object.
 */
PutProjectEventsRequest::PutProjectEventsRequest()
    : EvidentlyRequest(new PutProjectEventsRequestPrivate(EvidentlyRequest::PutProjectEventsAction, this))
{

}

/*!
 * \reimp
 */
bool PutProjectEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutProjectEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutProjectEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutProjectEventsResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::PutProjectEventsRequestPrivate
 * \brief The PutProjectEventsRequestPrivate class provides private implementation for PutProjectEventsRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a PutProjectEventsRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
PutProjectEventsRequestPrivate::PutProjectEventsRequestPrivate(
    const EvidentlyRequest::Action action, PutProjectEventsRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutProjectEventsRequest
 * class' copy constructor.
 */
PutProjectEventsRequestPrivate::PutProjectEventsRequestPrivate(
    const PutProjectEventsRequestPrivate &other, PutProjectEventsRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
