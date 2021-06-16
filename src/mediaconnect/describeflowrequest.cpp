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
