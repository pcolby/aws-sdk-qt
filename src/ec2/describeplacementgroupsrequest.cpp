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

#include "describeplacementgroupsrequest.h"
#include "describeplacementgroupsrequest_p.h"
#include "describeplacementgroupsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribePlacementGroupsRequest
 * \brief The DescribePlacementGroupsRequest class provides an interface for EC2 DescribePlacementGroups requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describePlacementGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePlacementGroupsRequest::DescribePlacementGroupsRequest(const DescribePlacementGroupsRequest &other)
    : Ec2Request(new DescribePlacementGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePlacementGroupsRequest object.
 */
DescribePlacementGroupsRequest::DescribePlacementGroupsRequest()
    : Ec2Request(new DescribePlacementGroupsRequestPrivate(Ec2Request::DescribePlacementGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePlacementGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePlacementGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePlacementGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePlacementGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribePlacementGroupsRequestPrivate
 * \brief The DescribePlacementGroupsRequestPrivate class provides private implementation for DescribePlacementGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribePlacementGroupsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribePlacementGroupsRequestPrivate::DescribePlacementGroupsRequestPrivate(
    const Ec2Request::Action action, DescribePlacementGroupsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePlacementGroupsRequest
 * class' copy constructor.
 */
DescribePlacementGroupsRequestPrivate::DescribePlacementGroupsRequestPrivate(
    const DescribePlacementGroupsRequestPrivate &other, DescribePlacementGroupsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
