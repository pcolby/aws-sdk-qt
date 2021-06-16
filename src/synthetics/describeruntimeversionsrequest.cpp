/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeruntimeversionsrequest.h"
#include "describeruntimeversionsrequest_p.h"
#include "describeruntimeversionsresponse.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::DescribeRuntimeVersionsRequest
 * \brief The DescribeRuntimeVersionsRequest class provides an interface for Synthetics DescribeRuntimeVersions requests.
 *
 * \inmodule QtAwsSynthetics
 *
 *  <fullname>Amazon CloudWatch Synthetics</fullname>
 * 
 *  You can use Amazon CloudWatch Synthetics to continually monitor your services. You can create and manage
 *  <i>canaries</i>, which are modular, lightweight scripts that monitor your endpoints and APIs from the outside-in. You
 *  can set up your canaries to run 24 hours a day, once per minute. The canaries help you check the availability and
 *  latency of your web services and troubleshoot anomalies by investigating load time data, screenshots of the UI, logs,
 *  and metrics. The canaries seamlessly integrate with CloudWatch ServiceLens to help you trace the causes of impacted
 *  nodes in your applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ServiceLens.html">Using ServiceLens to Monitor the
 *  Health of Your Applications</a> in the <i>Amazon CloudWatch User
 * 
 *  Guide</i>>
 * 
 *  Before you create and manage canaries, be aware of the security considerations. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
 *  Considerations for Synthetics
 *
 * \sa SyntheticsClient::describeRuntimeVersions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRuntimeVersionsRequest::DescribeRuntimeVersionsRequest(const DescribeRuntimeVersionsRequest &other)
    : SyntheticsRequest(new DescribeRuntimeVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRuntimeVersionsRequest object.
 */
DescribeRuntimeVersionsRequest::DescribeRuntimeVersionsRequest()
    : SyntheticsRequest(new DescribeRuntimeVersionsRequestPrivate(SyntheticsRequest::DescribeRuntimeVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRuntimeVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRuntimeVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRuntimeVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRuntimeVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Synthetics::DescribeRuntimeVersionsRequestPrivate
 * \brief The DescribeRuntimeVersionsRequestPrivate class provides private implementation for DescribeRuntimeVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a DescribeRuntimeVersionsRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
DescribeRuntimeVersionsRequestPrivate::DescribeRuntimeVersionsRequestPrivate(
    const SyntheticsRequest::Action action, DescribeRuntimeVersionsRequest * const q)
    : SyntheticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRuntimeVersionsRequest
 * class' copy constructor.
 */
DescribeRuntimeVersionsRequestPrivate::DescribeRuntimeVersionsRequestPrivate(
    const DescribeRuntimeVersionsRequestPrivate &other, DescribeRuntimeVersionsRequest * const q)
    : SyntheticsRequestPrivate(other, q)
{

}

} // namespace Synthetics
} // namespace QtAws
