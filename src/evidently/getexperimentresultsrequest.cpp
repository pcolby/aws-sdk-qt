// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexperimentresultsrequest.h"
#include "getexperimentresultsrequest_p.h"
#include "getexperimentresultsresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetExperimentResultsRequest
 * \brief The GetExperimentResultsRequest class provides an interface for Evidently GetExperimentResults requests.
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
 * \sa EvidentlyClient::getExperimentResults
 */

/*!
 * Constructs a copy of \a other.
 */
GetExperimentResultsRequest::GetExperimentResultsRequest(const GetExperimentResultsRequest &other)
    : EvidentlyRequest(new GetExperimentResultsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExperimentResultsRequest object.
 */
GetExperimentResultsRequest::GetExperimentResultsRequest()
    : EvidentlyRequest(new GetExperimentResultsRequestPrivate(EvidentlyRequest::GetExperimentResultsAction, this))
{

}

/*!
 * \reimp
 */
bool GetExperimentResultsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExperimentResultsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExperimentResultsRequest::response(QNetworkReply * const reply) const
{
    return new GetExperimentResultsResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::GetExperimentResultsRequestPrivate
 * \brief The GetExperimentResultsRequestPrivate class provides private implementation for GetExperimentResultsRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetExperimentResultsRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
GetExperimentResultsRequestPrivate::GetExperimentResultsRequestPrivate(
    const EvidentlyRequest::Action action, GetExperimentResultsRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExperimentResultsRequest
 * class' copy constructor.
 */
GetExperimentResultsRequestPrivate::GetExperimentResultsRequestPrivate(
    const GetExperimentResultsRequestPrivate &other, GetExperimentResultsRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
