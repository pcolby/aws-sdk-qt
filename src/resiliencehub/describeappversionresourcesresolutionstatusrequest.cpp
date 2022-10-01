// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappversionresourcesresolutionstatusrequest.h"
#include "describeappversionresourcesresolutionstatusrequest_p.h"
#include "describeappversionresourcesresolutionstatusresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeAppVersionResourcesResolutionStatusRequest
 * \brief The DescribeAppVersionResourcesResolutionStatusRequest class provides an interface for ResilienceHub DescribeAppVersionResourcesResolutionStatus requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeAppVersionResourcesResolutionStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppVersionResourcesResolutionStatusRequest::DescribeAppVersionResourcesResolutionStatusRequest(const DescribeAppVersionResourcesResolutionStatusRequest &other)
    : ResilienceHubRequest(new DescribeAppVersionResourcesResolutionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppVersionResourcesResolutionStatusRequest object.
 */
DescribeAppVersionResourcesResolutionStatusRequest::DescribeAppVersionResourcesResolutionStatusRequest()
    : ResilienceHubRequest(new DescribeAppVersionResourcesResolutionStatusRequestPrivate(ResilienceHubRequest::DescribeAppVersionResourcesResolutionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppVersionResourcesResolutionStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppVersionResourcesResolutionStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppVersionResourcesResolutionStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppVersionResourcesResolutionStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::DescribeAppVersionResourcesResolutionStatusRequestPrivate
 * \brief The DescribeAppVersionResourcesResolutionStatusRequestPrivate class provides private implementation for DescribeAppVersionResourcesResolutionStatusRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeAppVersionResourcesResolutionStatusRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
DescribeAppVersionResourcesResolutionStatusRequestPrivate::DescribeAppVersionResourcesResolutionStatusRequestPrivate(
    const ResilienceHubRequest::Action action, DescribeAppVersionResourcesResolutionStatusRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppVersionResourcesResolutionStatusRequest
 * class' copy constructor.
 */
DescribeAppVersionResourcesResolutionStatusRequestPrivate::DescribeAppVersionResourcesResolutionStatusRequestPrivate(
    const DescribeAppVersionResourcesResolutionStatusRequestPrivate &other, DescribeAppVersionResourcesResolutionStatusRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
