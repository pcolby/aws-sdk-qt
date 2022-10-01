// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperimentsrequest.h"
#include "listexperimentsrequest_p.h"
#include "listexperimentsresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::ListExperimentsRequest
 * \brief The ListExperimentsRequest class provides an interface for Evidently ListExperiments requests.
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
 * \sa EvidentlyClient::listExperiments
 */

/*!
 * Constructs a copy of \a other.
 */
ListExperimentsRequest::ListExperimentsRequest(const ListExperimentsRequest &other)
    : EvidentlyRequest(new ListExperimentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExperimentsRequest object.
 */
ListExperimentsRequest::ListExperimentsRequest()
    : EvidentlyRequest(new ListExperimentsRequestPrivate(EvidentlyRequest::ListExperimentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExperimentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExperimentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExperimentsRequest::response(QNetworkReply * const reply) const
{
    return new ListExperimentsResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::ListExperimentsRequestPrivate
 * \brief The ListExperimentsRequestPrivate class provides private implementation for ListExperimentsRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a ListExperimentsRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
ListExperimentsRequestPrivate::ListExperimentsRequestPrivate(
    const EvidentlyRequest::Action action, ListExperimentsRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExperimentsRequest
 * class' copy constructor.
 */
ListExperimentsRequestPrivate::ListExperimentsRequestPrivate(
    const ListExperimentsRequestPrivate &other, ListExperimentsRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
