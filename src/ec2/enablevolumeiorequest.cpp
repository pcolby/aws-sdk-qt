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

#include "enablevolumeiorequest.h"
#include "enablevolumeiorequest_p.h"
#include "enablevolumeioresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::EnableVolumeIORequest
 *
 * \brief The EnableVolumeIORequest class encapsulates EC2 EnableVolumeIO requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::enableVolumeIO
 */

/*!
 * @brief  Constructs a new EnableVolumeIORequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableVolumeIORequest::EnableVolumeIORequest(const EnableVolumeIORequest &other)
    : EC2Request(new EnableVolumeIORequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new EnableVolumeIORequest object.
 */
EnableVolumeIORequest::EnableVolumeIORequest()
    : EC2Request(new EnableVolumeIORequestPrivate(EC2Request::EnableVolumeIOAction, this))
{

}

/*!
 * \reimp
 */
bool EnableVolumeIORequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an EnableVolumeIOResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableVolumeIOResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * EnableVolumeIORequest::response(QNetworkReply * const reply) const
{
    return new EnableVolumeIOResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  EnableVolumeIORequestPrivate
 *
 * @brief  Private implementation for EnableVolumeIORequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new EnableVolumeIORequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public EnableVolumeIORequest instance.
 */
EnableVolumeIORequestPrivate::EnableVolumeIORequestPrivate(
    const EC2Request::Action action, EnableVolumeIORequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new EnableVolumeIORequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableVolumeIORequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableVolumeIORequest instance.
 */
EnableVolumeIORequestPrivate::EnableVolumeIORequestPrivate(
    const EnableVolumeIORequestPrivate &other, EnableVolumeIORequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
