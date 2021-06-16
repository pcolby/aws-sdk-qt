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

#include "describecanarieslastrunrequest.h"
#include "describecanarieslastrunrequest_p.h"
#include "describecanarieslastrunresponse.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::DescribeCanariesLastRunRequest
 * \brief The DescribeCanariesLastRunRequest class provides an interface for Synthetics DescribeCanariesLastRun requests.
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
 * \sa SyntheticsClient::describeCanariesLastRun
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCanariesLastRunRequest::DescribeCanariesLastRunRequest(const DescribeCanariesLastRunRequest &other)
    : SyntheticsRequest(new DescribeCanariesLastRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCanariesLastRunRequest object.
 */
DescribeCanariesLastRunRequest::DescribeCanariesLastRunRequest()
    : SyntheticsRequest(new DescribeCanariesLastRunRequestPrivate(SyntheticsRequest::DescribeCanariesLastRunAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCanariesLastRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCanariesLastRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCanariesLastRunRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCanariesLastRunResponse(*this, reply);
}

/*!
 * \class QtAws::Synthetics::DescribeCanariesLastRunRequestPrivate
 * \brief The DescribeCanariesLastRunRequestPrivate class provides private implementation for DescribeCanariesLastRunRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a DescribeCanariesLastRunRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
DescribeCanariesLastRunRequestPrivate::DescribeCanariesLastRunRequestPrivate(
    const SyntheticsRequest::Action action, DescribeCanariesLastRunRequest * const q)
    : SyntheticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCanariesLastRunRequest
 * class' copy constructor.
 */
DescribeCanariesLastRunRequestPrivate::DescribeCanariesLastRunRequestPrivate(
    const DescribeCanariesLastRunRequestPrivate &other, DescribeCanariesLastRunRequest * const q)
    : SyntheticsRequestPrivate(other, q)
{

}

} // namespace Synthetics
} // namespace QtAws
