// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointrequest.h"
#include "describeendpointrequest_p.h"
#include "describeendpointresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeEndpointRequest
 * \brief The DescribeEndpointRequest class provides an interface for Comprehend DescribeEndpoint requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEndpointRequest::DescribeEndpointRequest(const DescribeEndpointRequest &other)
    : ComprehendRequest(new DescribeEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEndpointRequest object.
 */
DescribeEndpointRequest::DescribeEndpointRequest()
    : ComprehendRequest(new DescribeEndpointRequestPrivate(ComprehendRequest::DescribeEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeEndpointRequestPrivate
 * \brief The DescribeEndpointRequestPrivate class provides private implementation for DescribeEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeEndpointRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeEndpointRequestPrivate::DescribeEndpointRequestPrivate(
    const ComprehendRequest::Action action, DescribeEndpointRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointRequest
 * class' copy constructor.
 */
DescribeEndpointRequestPrivate::DescribeEndpointRequestPrivate(
    const DescribeEndpointRequestPrivate &other, DescribeEndpointRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
