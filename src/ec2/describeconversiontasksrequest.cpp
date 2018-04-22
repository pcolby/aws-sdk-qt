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

#include "describeconversiontasksrequest.h"
#include "describeconversiontasksrequest_p.h"
#include "describeconversiontasksresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeConversionTasksRequest
 * \brief The DescribeConversionTasksRequest class provides an interface for EC2 DescribeConversionTasks requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeConversionTasks
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConversionTasksRequest::DescribeConversionTasksRequest(const DescribeConversionTasksRequest &other)
    : Ec2Request(new DescribeConversionTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConversionTasksRequest object.
 */
DescribeConversionTasksRequest::DescribeConversionTasksRequest()
    : Ec2Request(new DescribeConversionTasksRequestPrivate(Ec2Request::DescribeConversionTasksAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConversionTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConversionTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConversionTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConversionTasksResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeConversionTasksRequestPrivate
 * \brief The DescribeConversionTasksRequestPrivate class provides private implementation for DescribeConversionTasksRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeConversionTasksRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeConversionTasksRequestPrivate::DescribeConversionTasksRequestPrivate(
    const Ec2Request::Action action, DescribeConversionTasksRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConversionTasksRequest
 * class' copy constructor.
 */
DescribeConversionTasksRequestPrivate::DescribeConversionTasksRequestPrivate(
    const DescribeConversionTasksRequestPrivate &other, DescribeConversionTasksRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
