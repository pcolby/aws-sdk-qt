// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsegmentreferencesrequest.h"
#include "listsegmentreferencesrequest_p.h"
#include "listsegmentreferencesresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::ListSegmentReferencesRequest
 * \brief The ListSegmentReferencesRequest class provides an interface for Evidently ListSegmentReferences requests.
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
 * \sa EvidentlyClient::listSegmentReferences
 */

/*!
 * Constructs a copy of \a other.
 */
ListSegmentReferencesRequest::ListSegmentReferencesRequest(const ListSegmentReferencesRequest &other)
    : EvidentlyRequest(new ListSegmentReferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSegmentReferencesRequest object.
 */
ListSegmentReferencesRequest::ListSegmentReferencesRequest()
    : EvidentlyRequest(new ListSegmentReferencesRequestPrivate(EvidentlyRequest::ListSegmentReferencesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSegmentReferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSegmentReferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSegmentReferencesRequest::response(QNetworkReply * const reply) const
{
    return new ListSegmentReferencesResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::ListSegmentReferencesRequestPrivate
 * \brief The ListSegmentReferencesRequestPrivate class provides private implementation for ListSegmentReferencesRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a ListSegmentReferencesRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
ListSegmentReferencesRequestPrivate::ListSegmentReferencesRequestPrivate(
    const EvidentlyRequest::Action action, ListSegmentReferencesRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSegmentReferencesRequest
 * class' copy constructor.
 */
ListSegmentReferencesRequestPrivate::ListSegmentReferencesRequestPrivate(
    const ListSegmentReferencesRequestPrivate &other, ListSegmentReferencesRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
