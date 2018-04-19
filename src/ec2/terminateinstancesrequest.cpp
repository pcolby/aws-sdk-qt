/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "terminateinstancesrequest.h"
#include "terminateinstancesrequest_p.h"
#include "terminateinstancesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::TerminateInstancesRequest
 * \brief The TerminateInstancesRequest class provides an interface for EC2 TerminateInstances requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::terminateInstances
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateInstancesRequest::TerminateInstancesRequest(const TerminateInstancesRequest &other)
    : EC2Request(new TerminateInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateInstancesRequest object.
 */
TerminateInstancesRequest::TerminateInstancesRequest()
    : EC2Request(new TerminateInstancesRequestPrivate(EC2Request::TerminateInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateInstancesRequest::response(QNetworkReply * const reply) const
{
    return new TerminateInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::TerminateInstancesRequestPrivate
 * \brief The TerminateInstancesRequestPrivate class provides private implementation for TerminateInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a TerminateInstancesRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
TerminateInstancesRequestPrivate::TerminateInstancesRequestPrivate(
    const EC2Request::Action action, TerminateInstancesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateInstancesRequest
 * class' copy constructor.
 */
TerminateInstancesRequestPrivate::TerminateInstancesRequestPrivate(
    const TerminateInstancesRequestPrivate &other, TerminateInstancesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
