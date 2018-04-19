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

#include "describeimportimagetasksrequest.h"
#include "describeimportimagetasksrequest_p.h"
#include "describeimportimagetasksresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeImportImageTasksRequest
 * \brief The DescribeImportImageTasksRequest class provides an interface for EC2 DescribeImportImageTasks requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeImportImageTasks
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImportImageTasksRequest::DescribeImportImageTasksRequest(const DescribeImportImageTasksRequest &other)
    : EC2Request(new DescribeImportImageTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImportImageTasksRequest object.
 */
DescribeImportImageTasksRequest::DescribeImportImageTasksRequest()
    : EC2Request(new DescribeImportImageTasksRequestPrivate(EC2Request::DescribeImportImageTasksAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImportImageTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImportImageTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImportImageTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImportImageTasksResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeImportImageTasksRequestPrivate
 * \brief The DescribeImportImageTasksRequestPrivate class provides private implementation for DescribeImportImageTasksRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeImportImageTasksRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
DescribeImportImageTasksRequestPrivate::DescribeImportImageTasksRequestPrivate(
    const EC2Request::Action action, DescribeImportImageTasksRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImportImageTasksRequest
 * class' copy constructor.
 */
DescribeImportImageTasksRequestPrivate::DescribeImportImageTasksRequestPrivate(
    const DescribeImportImageTasksRequestPrivate &other, DescribeImportImageTasksRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
