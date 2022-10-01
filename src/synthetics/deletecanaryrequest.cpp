// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecanaryrequest.h"
#include "deletecanaryrequest_p.h"
#include "deletecanaryresponse.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::DeleteCanaryRequest
 * \brief The DeleteCanaryRequest class provides an interface for Synthetics DeleteCanary requests.
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
 * \sa SyntheticsClient::deleteCanary
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCanaryRequest::DeleteCanaryRequest(const DeleteCanaryRequest &other)
    : SyntheticsRequest(new DeleteCanaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCanaryRequest object.
 */
DeleteCanaryRequest::DeleteCanaryRequest()
    : SyntheticsRequest(new DeleteCanaryRequestPrivate(SyntheticsRequest::DeleteCanaryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCanaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCanaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCanaryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCanaryResponse(*this, reply);
}

/*!
 * \class QtAws::Synthetics::DeleteCanaryRequestPrivate
 * \brief The DeleteCanaryRequestPrivate class provides private implementation for DeleteCanaryRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a DeleteCanaryRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
DeleteCanaryRequestPrivate::DeleteCanaryRequestPrivate(
    const SyntheticsRequest::Action action, DeleteCanaryRequest * const q)
    : SyntheticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCanaryRequest
 * class' copy constructor.
 */
DeleteCanaryRequestPrivate::DeleteCanaryRequestPrivate(
    const DeleteCanaryRequestPrivate &other, DeleteCanaryRequest * const q)
    : SyntheticsRequestPrivate(other, q)
{

}

} // namespace Synthetics
} // namespace QtAws
