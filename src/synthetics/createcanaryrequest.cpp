// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcanaryrequest.h"
#include "createcanaryrequest_p.h"
#include "createcanaryresponse.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::CreateCanaryRequest
 * \brief The CreateCanaryRequest class provides an interface for Synthetics CreateCanary requests.
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
 * \sa SyntheticsClient::createCanary
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCanaryRequest::CreateCanaryRequest(const CreateCanaryRequest &other)
    : SyntheticsRequest(new CreateCanaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCanaryRequest object.
 */
CreateCanaryRequest::CreateCanaryRequest()
    : SyntheticsRequest(new CreateCanaryRequestPrivate(SyntheticsRequest::CreateCanaryAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCanaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCanaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCanaryRequest::response(QNetworkReply * const reply) const
{
    return new CreateCanaryResponse(*this, reply);
}

/*!
 * \class QtAws::Synthetics::CreateCanaryRequestPrivate
 * \brief The CreateCanaryRequestPrivate class provides private implementation for CreateCanaryRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a CreateCanaryRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
CreateCanaryRequestPrivate::CreateCanaryRequestPrivate(
    const SyntheticsRequest::Action action, CreateCanaryRequest * const q)
    : SyntheticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCanaryRequest
 * class' copy constructor.
 */
CreateCanaryRequestPrivate::CreateCanaryRequestPrivate(
    const CreateCanaryRequestPrivate &other, CreateCanaryRequest * const q)
    : SyntheticsRequestPrivate(other, q)
{

}

} // namespace Synthetics
} // namespace QtAws
