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

#include "releaseaddressrequest.h"
#include "releaseaddressrequest_p.h"
#include "releaseaddressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ReleaseAddressRequest
 *
 * \brief The ReleaseAddressRequest class provides an interface for EC2 ReleaseAddress requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::releaseAddress
 */

/*!
 * @brief  Constructs a new ReleaseAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReleaseAddressRequest::ReleaseAddressRequest(const ReleaseAddressRequest &other)
    : EC2Request(new ReleaseAddressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ReleaseAddressRequest object.
 */
ReleaseAddressRequest::ReleaseAddressRequest()
    : EC2Request(new ReleaseAddressRequestPrivate(EC2Request::ReleaseAddressAction, this))
{

}

/*!
 * \reimp
 */
bool ReleaseAddressRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ReleaseAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReleaseAddressResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ReleaseAddressRequest::response(QNetworkReply * const reply) const
{
    return new ReleaseAddressResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ReleaseAddressRequestPrivate
 *
 * @brief  Private implementation for ReleaseAddressRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ReleaseAddressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ReleaseAddressRequest instance.
 */
ReleaseAddressRequestPrivate::ReleaseAddressRequestPrivate(
    const EC2Request::Action action, ReleaseAddressRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ReleaseAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReleaseAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReleaseAddressRequest instance.
 */
ReleaseAddressRequestPrivate::ReleaseAddressRequestPrivate(
    const ReleaseAddressRequestPrivate &other, ReleaseAddressRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
