// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupresourcesrequest.h"
#include "listgroupresourcesrequest_p.h"
#include "listgroupresourcesresponse.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::ListGroupResourcesRequest
 * \brief The ListGroupResourcesRequest class provides an interface for Synthetics ListGroupResources requests.
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
 * \sa SyntheticsClient::listGroupResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupResourcesRequest::ListGroupResourcesRequest(const ListGroupResourcesRequest &other)
    : SyntheticsRequest(new ListGroupResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupResourcesRequest object.
 */
ListGroupResourcesRequest::ListGroupResourcesRequest()
    : SyntheticsRequest(new ListGroupResourcesRequestPrivate(SyntheticsRequest::ListGroupResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Synthetics::ListGroupResourcesRequestPrivate
 * \brief The ListGroupResourcesRequestPrivate class provides private implementation for ListGroupResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a ListGroupResourcesRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
ListGroupResourcesRequestPrivate::ListGroupResourcesRequestPrivate(
    const SyntheticsRequest::Action action, ListGroupResourcesRequest * const q)
    : SyntheticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupResourcesRequest
 * class' copy constructor.
 */
ListGroupResourcesRequestPrivate::ListGroupResourcesRequestPrivate(
    const ListGroupResourcesRequestPrivate &other, ListGroupResourcesRequest * const q)
    : SyntheticsRequestPrivate(other, q)
{

}

} // namespace Synthetics
} // namespace QtAws
