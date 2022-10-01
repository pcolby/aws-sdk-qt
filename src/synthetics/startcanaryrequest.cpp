// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcanaryrequest.h"
#include "startcanaryrequest_p.h"
#include "startcanaryresponse.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::StartCanaryRequest
 * \brief The StartCanaryRequest class provides an interface for Synthetics StartCanary requests.
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
 * \sa SyntheticsClient::startCanary
 */

/*!
 * Constructs a copy of \a other.
 */
StartCanaryRequest::StartCanaryRequest(const StartCanaryRequest &other)
    : SyntheticsRequest(new StartCanaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartCanaryRequest object.
 */
StartCanaryRequest::StartCanaryRequest()
    : SyntheticsRequest(new StartCanaryRequestPrivate(SyntheticsRequest::StartCanaryAction, this))
{

}

/*!
 * \reimp
 */
bool StartCanaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartCanaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartCanaryRequest::response(QNetworkReply * const reply) const
{
    return new StartCanaryResponse(*this, reply);
}

/*!
 * \class QtAws::Synthetics::StartCanaryRequestPrivate
 * \brief The StartCanaryRequestPrivate class provides private implementation for StartCanaryRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a StartCanaryRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
StartCanaryRequestPrivate::StartCanaryRequestPrivate(
    const SyntheticsRequest::Action action, StartCanaryRequest * const q)
    : SyntheticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartCanaryRequest
 * class' copy constructor.
 */
StartCanaryRequestPrivate::StartCanaryRequestPrivate(
    const StartCanaryRequestPrivate &other, StartCanaryRequest * const q)
    : SyntheticsRequestPrivate(other, q)
{

}

} // namespace Synthetics
} // namespace QtAws
