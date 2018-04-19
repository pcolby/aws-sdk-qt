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

#include "describeinstancecreditspecificationsrequest.h"
#include "describeinstancecreditspecificationsrequest_p.h"
#include "describeinstancecreditspecificationsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeInstanceCreditSpecificationsRequest
 * \brief The DescribeInstanceCreditSpecificationsRequest class provides an interface for EC2 DescribeInstanceCreditSpecifications requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeInstanceCreditSpecifications
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInstanceCreditSpecificationsRequest::DescribeInstanceCreditSpecificationsRequest(const DescribeInstanceCreditSpecificationsRequest &other)
    : EC2Request(new DescribeInstanceCreditSpecificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInstanceCreditSpecificationsRequest object.
 */
DescribeInstanceCreditSpecificationsRequest::DescribeInstanceCreditSpecificationsRequest()
    : EC2Request(new DescribeInstanceCreditSpecificationsRequestPrivate(EC2Request::DescribeInstanceCreditSpecificationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInstanceCreditSpecificationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInstanceCreditSpecificationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstanceCreditSpecificationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceCreditSpecificationsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeInstanceCreditSpecificationsRequestPrivate
 * \brief The DescribeInstanceCreditSpecificationsRequestPrivate class provides private implementation for DescribeInstanceCreditSpecificationsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeInstanceCreditSpecificationsRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
DescribeInstanceCreditSpecificationsRequestPrivate::DescribeInstanceCreditSpecificationsRequestPrivate(
    const EC2Request::Action action, DescribeInstanceCreditSpecificationsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceCreditSpecificationsRequest
 * class' copy constructor.
 */
DescribeInstanceCreditSpecificationsRequestPrivate::DescribeInstanceCreditSpecificationsRequestPrivate(
    const DescribeInstanceCreditSpecificationsRequestPrivate &other, DescribeInstanceCreditSpecificationsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
