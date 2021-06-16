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

#include "stopcanaryrequest.h"
#include "stopcanaryrequest_p.h"
#include "stopcanaryresponse.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::StopCanaryRequest
 * \brief The StopCanaryRequest class provides an interface for Synthetics StopCanary requests.
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
 * \sa SyntheticsClient::stopCanary
 */

/*!
 * Constructs a copy of \a other.
 */
StopCanaryRequest::StopCanaryRequest(const StopCanaryRequest &other)
    : SyntheticsRequest(new StopCanaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopCanaryRequest object.
 */
StopCanaryRequest::StopCanaryRequest()
    : SyntheticsRequest(new StopCanaryRequestPrivate(SyntheticsRequest::StopCanaryAction, this))
{

}

/*!
 * \reimp
 */
bool StopCanaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopCanaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopCanaryRequest::response(QNetworkReply * const reply) const
{
    return new StopCanaryResponse(*this, reply);
}

/*!
 * \class QtAws::Synthetics::StopCanaryRequestPrivate
 * \brief The StopCanaryRequestPrivate class provides private implementation for StopCanaryRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a StopCanaryRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
StopCanaryRequestPrivate::StopCanaryRequestPrivate(
    const SyntheticsRequest::Action action, StopCanaryRequest * const q)
    : SyntheticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopCanaryRequest
 * class' copy constructor.
 */
StopCanaryRequestPrivate::StopCanaryRequestPrivate(
    const StopCanaryRequestPrivate &other, StopCanaryRequest * const q)
    : SyntheticsRequestPrivate(other, q)
{

}

} // namespace Synthetics
} // namespace QtAws
