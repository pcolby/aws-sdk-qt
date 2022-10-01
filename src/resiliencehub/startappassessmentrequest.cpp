// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startappassessmentrequest.h"
#include "startappassessmentrequest_p.h"
#include "startappassessmentresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::StartAppAssessmentRequest
 * \brief The StartAppAssessmentRequest class provides an interface for ResilienceHub StartAppAssessment requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::startAppAssessment
 */

/*!
 * Constructs a copy of \a other.
 */
StartAppAssessmentRequest::StartAppAssessmentRequest(const StartAppAssessmentRequest &other)
    : ResilienceHubRequest(new StartAppAssessmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartAppAssessmentRequest object.
 */
StartAppAssessmentRequest::StartAppAssessmentRequest()
    : ResilienceHubRequest(new StartAppAssessmentRequestPrivate(ResilienceHubRequest::StartAppAssessmentAction, this))
{

}

/*!
 * \reimp
 */
bool StartAppAssessmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartAppAssessmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartAppAssessmentRequest::response(QNetworkReply * const reply) const
{
    return new StartAppAssessmentResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::StartAppAssessmentRequestPrivate
 * \brief The StartAppAssessmentRequestPrivate class provides private implementation for StartAppAssessmentRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a StartAppAssessmentRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
StartAppAssessmentRequestPrivate::StartAppAssessmentRequestPrivate(
    const ResilienceHubRequest::Action action, StartAppAssessmentRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartAppAssessmentRequest
 * class' copy constructor.
 */
StartAppAssessmentRequestPrivate::StartAppAssessmentRequestPrivate(
    const StartAppAssessmentRequestPrivate &other, StartAppAssessmentRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
