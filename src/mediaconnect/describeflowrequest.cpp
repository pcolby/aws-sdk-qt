// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeflowrequest.h"
#include "describeflowrequest_p.h"
#include "describeflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DescribeFlowRequest
 * \brief The DescribeFlowRequest class provides an interface for MediaConnect DescribeFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::describeFlow
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFlowRequest::DescribeFlowRequest(const DescribeFlowRequest &other)
    : MediaConnectRequest(new DescribeFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFlowRequest object.
 */
DescribeFlowRequest::DescribeFlowRequest()
    : MediaConnectRequest(new DescribeFlowRequestPrivate(MediaConnectRequest::DescribeFlowAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFlowRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::DescribeFlowRequestPrivate
 * \brief The DescribeFlowRequestPrivate class provides private implementation for DescribeFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DescribeFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
DescribeFlowRequestPrivate::DescribeFlowRequestPrivate(
    const MediaConnectRequest::Action action, DescribeFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFlowRequest
 * class' copy constructor.
 */
DescribeFlowRequestPrivate::DescribeFlowRequestPrivate(
    const DescribeFlowRequestPrivate &other, DescribeFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
