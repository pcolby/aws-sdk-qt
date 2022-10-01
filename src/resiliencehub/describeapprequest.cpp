// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapprequest.h"
#include "describeapprequest_p.h"
#include "describeappresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeAppRequest
 * \brief The DescribeAppRequest class provides an interface for ResilienceHub DescribeApp requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeApp
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppRequest::DescribeAppRequest(const DescribeAppRequest &other)
    : ResilienceHubRequest(new DescribeAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppRequest object.
 */
DescribeAppRequest::DescribeAppRequest()
    : ResilienceHubRequest(new DescribeAppRequestPrivate(ResilienceHubRequest::DescribeAppAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::DescribeAppRequestPrivate
 * \brief The DescribeAppRequestPrivate class provides private implementation for DescribeAppRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeAppRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
DescribeAppRequestPrivate::DescribeAppRequestPrivate(
    const ResilienceHubRequest::Action action, DescribeAppRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppRequest
 * class' copy constructor.
 */
DescribeAppRequestPrivate::DescribeAppRequestPrivate(
    const DescribeAppRequestPrivate &other, DescribeAppRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
