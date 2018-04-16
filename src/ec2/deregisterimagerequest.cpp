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

#include "deregisterimagerequest.h"
#include "deregisterimagerequest_p.h"
#include "deregisterimageresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeregisterImageRequest
 *
 * \brief The DeregisterImageRequest class provides an interface for EC2 DeregisterImage requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deregisterImage
 */

/*!
 * @brief  Constructs a new DeregisterImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterImageRequest::DeregisterImageRequest(const DeregisterImageRequest &other)
    : EC2Request(new DeregisterImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeregisterImageRequest object.
 */
DeregisterImageRequest::DeregisterImageRequest()
    : EC2Request(new DeregisterImageRequestPrivate(EC2Request::DeregisterImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterImageRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeregisterImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterImageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterImageRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterImageResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeregisterImageRequestPrivate
 *
 * @brief  Private implementation for DeregisterImageRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeregisterImageRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeregisterImageRequest instance.
 */
DeregisterImageRequestPrivate::DeregisterImageRequestPrivate(
    const EC2Request::Action action, DeregisterImageRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeregisterImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterImageRequest instance.
 */
DeregisterImageRequestPrivate::DeregisterImageRequestPrivate(
    const DeregisterImageRequestPrivate &other, DeregisterImageRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
