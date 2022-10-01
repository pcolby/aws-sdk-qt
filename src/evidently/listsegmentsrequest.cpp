// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsegmentsrequest.h"
#include "listsegmentsrequest_p.h"
#include "listsegmentsresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::ListSegmentsRequest
 * \brief The ListSegmentsRequest class provides an interface for Evidently ListSegments requests.
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
 * \sa EvidentlyClient::listSegments
 */

/*!
 * Constructs a copy of \a other.
 */
ListSegmentsRequest::ListSegmentsRequest(const ListSegmentsRequest &other)
    : EvidentlyRequest(new ListSegmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSegmentsRequest object.
 */
ListSegmentsRequest::ListSegmentsRequest()
    : EvidentlyRequest(new ListSegmentsRequestPrivate(EvidentlyRequest::ListSegmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSegmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSegmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSegmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListSegmentsResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::ListSegmentsRequestPrivate
 * \brief The ListSegmentsRequestPrivate class provides private implementation for ListSegmentsRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a ListSegmentsRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
ListSegmentsRequestPrivate::ListSegmentsRequestPrivate(
    const EvidentlyRequest::Action action, ListSegmentsRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSegmentsRequest
 * class' copy constructor.
 */
ListSegmentsRequestPrivate::ListSegmentsRequestPrivate(
    const ListSegmentsRequestPrivate &other, ListSegmentsRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
