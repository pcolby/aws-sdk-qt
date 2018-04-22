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

#include "cancelspotinstancerequestsrequest.h"
#include "cancelspotinstancerequestsrequest_p.h"
#include "cancelspotinstancerequestsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelSpotInstanceRequestsRequest
 * \brief The CancelSpotInstanceRequestsRequest class provides an interface for EC2 CancelSpotInstanceRequests requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::cancelSpotInstanceRequests
 */

/*!
 * Constructs a copy of \a other.
 */
CancelSpotInstanceRequestsRequest::CancelSpotInstanceRequestsRequest(const CancelSpotInstanceRequestsRequest &other)
    : Ec2Request(new CancelSpotInstanceRequestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelSpotInstanceRequestsRequest object.
 */
CancelSpotInstanceRequestsRequest::CancelSpotInstanceRequestsRequest()
    : Ec2Request(new CancelSpotInstanceRequestsRequestPrivate(Ec2Request::CancelSpotInstanceRequestsAction, this))
{

}

/*!
 * \reimp
 */
bool CancelSpotInstanceRequestsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelSpotInstanceRequestsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelSpotInstanceRequestsRequest::response(QNetworkReply * const reply) const
{
    return new CancelSpotInstanceRequestsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CancelSpotInstanceRequestsRequestPrivate
 * \brief The CancelSpotInstanceRequestsRequestPrivate class provides private implementation for CancelSpotInstanceRequestsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CancelSpotInstanceRequestsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
CancelSpotInstanceRequestsRequestPrivate::CancelSpotInstanceRequestsRequestPrivate(
    const Ec2Request::Action action, CancelSpotInstanceRequestsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelSpotInstanceRequestsRequest
 * class' copy constructor.
 */
CancelSpotInstanceRequestsRequestPrivate::CancelSpotInstanceRequestsRequestPrivate(
    const CancelSpotInstanceRequestsRequestPrivate &other, CancelSpotInstanceRequestsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
