// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappassessmentrequest.h"
#include "describeappassessmentrequest_p.h"
#include "describeappassessmentresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeAppAssessmentRequest
 * \brief The DescribeAppAssessmentRequest class provides an interface for ResilienceHub DescribeAppAssessment requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeAppAssessment
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppAssessmentRequest::DescribeAppAssessmentRequest(const DescribeAppAssessmentRequest &other)
    : ResilienceHubRequest(new DescribeAppAssessmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppAssessmentRequest object.
 */
DescribeAppAssessmentRequest::DescribeAppAssessmentRequest()
    : ResilienceHubRequest(new DescribeAppAssessmentRequestPrivate(ResilienceHubRequest::DescribeAppAssessmentAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppAssessmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppAssessmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppAssessmentRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppAssessmentResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::DescribeAppAssessmentRequestPrivate
 * \brief The DescribeAppAssessmentRequestPrivate class provides private implementation for DescribeAppAssessmentRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeAppAssessmentRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
DescribeAppAssessmentRequestPrivate::DescribeAppAssessmentRequestPrivate(
    const ResilienceHubRequest::Action action, DescribeAppAssessmentRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppAssessmentRequest
 * class' copy constructor.
 */
DescribeAppAssessmentRequestPrivate::DescribeAppAssessmentRequestPrivate(
    const DescribeAppAssessmentRequestPrivate &other, DescribeAppAssessmentRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
