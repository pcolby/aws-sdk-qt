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

#include "requestspotfleetrequest.h"
#include "requestspotfleetrequest_p.h"
#include "requestspotfleetresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RequestSpotFleetRequest
 *
 * \brief The RequestSpotFleetRequest class encapsulates EC2 RequestSpotFleet requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::requestSpotFleet
 */

/*!
 * @brief  Constructs a new RequestSpotFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RequestSpotFleetRequest::RequestSpotFleetRequest(const RequestSpotFleetRequest &other)
    : EC2Request(new RequestSpotFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RequestSpotFleetRequest object.
 */
RequestSpotFleetRequest::RequestSpotFleetRequest()
    : EC2Request(new RequestSpotFleetRequestPrivate(EC2Request::RequestSpotFleetAction, this))
{

}

/*!
 * \reimp
 */
bool RequestSpotFleetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RequestSpotFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RequestSpotFleetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * RequestSpotFleetRequest::response(QNetworkReply * const reply) const
{
    return new RequestSpotFleetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RequestSpotFleetRequestPrivate
 *
 * @brief  Private implementation for RequestSpotFleetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RequestSpotFleetRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public RequestSpotFleetRequest instance.
 */
RequestSpotFleetRequestPrivate::RequestSpotFleetRequestPrivate(
    const EC2Request::Action action, RequestSpotFleetRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RequestSpotFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RequestSpotFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RequestSpotFleetRequest instance.
 */
RequestSpotFleetRequestPrivate::RequestSpotFleetRequestPrivate(
    const RequestSpotFleetRequestPrivate &other, RequestSpotFleetRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
