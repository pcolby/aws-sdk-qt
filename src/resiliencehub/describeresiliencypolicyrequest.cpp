// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresiliencypolicyrequest.h"
#include "describeresiliencypolicyrequest_p.h"
#include "describeresiliencypolicyresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeResiliencyPolicyRequest
 * \brief The DescribeResiliencyPolicyRequest class provides an interface for ResilienceHub DescribeResiliencyPolicy requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeResiliencyPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeResiliencyPolicyRequest::DescribeResiliencyPolicyRequest(const DescribeResiliencyPolicyRequest &other)
    : ResilienceHubRequest(new DescribeResiliencyPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeResiliencyPolicyRequest object.
 */
DescribeResiliencyPolicyRequest::DescribeResiliencyPolicyRequest()
    : ResilienceHubRequest(new DescribeResiliencyPolicyRequestPrivate(ResilienceHubRequest::DescribeResiliencyPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeResiliencyPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeResiliencyPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeResiliencyPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResiliencyPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::DescribeResiliencyPolicyRequestPrivate
 * \brief The DescribeResiliencyPolicyRequestPrivate class provides private implementation for DescribeResiliencyPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeResiliencyPolicyRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
DescribeResiliencyPolicyRequestPrivate::DescribeResiliencyPolicyRequestPrivate(
    const ResilienceHubRequest::Action action, DescribeResiliencyPolicyRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeResiliencyPolicyRequest
 * class' copy constructor.
 */
DescribeResiliencyPolicyRequestPrivate::DescribeResiliencyPolicyRequestPrivate(
    const DescribeResiliencyPolicyRequestPrivate &other, DescribeResiliencyPolicyRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
