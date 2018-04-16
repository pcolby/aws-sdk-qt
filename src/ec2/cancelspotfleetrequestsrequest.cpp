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

#include "cancelspotfleetrequestsrequest.h"
#include "cancelspotfleetrequestsrequest_p.h"
#include "cancelspotfleetrequestsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelSpotFleetRequestsRequest
 *
 * \brief The CancelSpotFleetRequestsRequest class encapsulates EC2 CancelSpotFleetRequests requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::cancelSpotFleetRequests
 */

/*!
 * @brief  Constructs a new CancelSpotFleetRequestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelSpotFleetRequestsRequest::CancelSpotFleetRequestsRequest(const CancelSpotFleetRequestsRequest &other)
    : EC2Request(new CancelSpotFleetRequestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CancelSpotFleetRequestsRequest object.
 */
CancelSpotFleetRequestsRequest::CancelSpotFleetRequestsRequest()
    : EC2Request(new CancelSpotFleetRequestsRequestPrivate(EC2Request::CancelSpotFleetRequestsAction, this))
{

}

/*!
 * \reimp
 */
bool CancelSpotFleetRequestsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CancelSpotFleetRequestsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelSpotFleetRequestsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CancelSpotFleetRequestsRequest::response(QNetworkReply * const reply) const
{
    return new CancelSpotFleetRequestsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CancelSpotFleetRequestsRequestPrivate
 *
 * @brief  Private implementation for CancelSpotFleetRequestsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CancelSpotFleetRequestsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CancelSpotFleetRequestsRequest instance.
 */
CancelSpotFleetRequestsRequestPrivate::CancelSpotFleetRequestsRequestPrivate(
    const EC2Request::Action action, CancelSpotFleetRequestsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CancelSpotFleetRequestsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelSpotFleetRequestsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelSpotFleetRequestsRequest instance.
 */
CancelSpotFleetRequestsRequestPrivate::CancelSpotFleetRequestsRequestPrivate(
    const CancelSpotFleetRequestsRequestPrivate &other, CancelSpotFleetRequestsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
