// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateresourcerequest.h"
#include "disassociateresourcerequest_p.h"
#include "disassociateresourceresponse.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::DisassociateResourceRequest
 * \brief The DisassociateResourceRequest class provides an interface for Synthetics DisassociateResource requests.
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
 * \sa SyntheticsClient::disassociateResource
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateResourceRequest::DisassociateResourceRequest(const DisassociateResourceRequest &other)
    : SyntheticsRequest(new DisassociateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateResourceRequest object.
 */
DisassociateResourceRequest::DisassociateResourceRequest()
    : SyntheticsRequest(new DisassociateResourceRequestPrivate(SyntheticsRequest::DisassociateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateResourceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Synthetics::DisassociateResourceRequestPrivate
 * \brief The DisassociateResourceRequestPrivate class provides private implementation for DisassociateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a DisassociateResourceRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
DisassociateResourceRequestPrivate::DisassociateResourceRequestPrivate(
    const SyntheticsRequest::Action action, DisassociateResourceRequest * const q)
    : SyntheticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateResourceRequest
 * class' copy constructor.
 */
DisassociateResourceRequestPrivate::DisassociateResourceRequestPrivate(
    const DisassociateResourceRequestPrivate &other, DisassociateResourceRequest * const q)
    : SyntheticsRequestPrivate(other, q)
{

}

} // namespace Synthetics
} // namespace QtAws
