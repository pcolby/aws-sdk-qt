// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfeaturesrequest.h"
#include "listfeaturesrequest_p.h"
#include "listfeaturesresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::ListFeaturesRequest
 * \brief The ListFeaturesRequest class provides an interface for Evidently ListFeatures requests.
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
 * \sa EvidentlyClient::listFeatures
 */

/*!
 * Constructs a copy of \a other.
 */
ListFeaturesRequest::ListFeaturesRequest(const ListFeaturesRequest &other)
    : EvidentlyRequest(new ListFeaturesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFeaturesRequest object.
 */
ListFeaturesRequest::ListFeaturesRequest()
    : EvidentlyRequest(new ListFeaturesRequestPrivate(EvidentlyRequest::ListFeaturesAction, this))
{

}

/*!
 * \reimp
 */
bool ListFeaturesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFeaturesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFeaturesRequest::response(QNetworkReply * const reply) const
{
    return new ListFeaturesResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::ListFeaturesRequestPrivate
 * \brief The ListFeaturesRequestPrivate class provides private implementation for ListFeaturesRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a ListFeaturesRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
ListFeaturesRequestPrivate::ListFeaturesRequestPrivate(
    const EvidentlyRequest::Action action, ListFeaturesRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFeaturesRequest
 * class' copy constructor.
 */
ListFeaturesRequestPrivate::ListFeaturesRequestPrivate(
    const ListFeaturesRequestPrivate &other, ListFeaturesRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
