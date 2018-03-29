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

#include "resetfpgaimageattributerequest.h"
#include "resetfpgaimageattributerequest_p.h"
#include "resetfpgaimageattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ResetFpgaImageAttributeRequest
 *
 * @brief  Implements EC2 ResetFpgaImageAttribute requests.
 *
 * @see    EC2Client::resetFpgaImageAttribute
 */

/**
 * @brief  Constructs a new ResetFpgaImageAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetFpgaImageAttributeRequest::ResetFpgaImageAttributeRequest(const ResetFpgaImageAttributeRequest &other)
    : EC2Request(new ResetFpgaImageAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetFpgaImageAttributeRequest object.
 */
ResetFpgaImageAttributeRequest::ResetFpgaImageAttributeRequest()
    : EC2Request(new ResetFpgaImageAttributeRequestPrivate(EC2Request::ResetFpgaImageAttributeAction, this))
{

}

bool ResetFpgaImageAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetFpgaImageAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetFpgaImageAttributeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ResetFpgaImageAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ResetFpgaImageAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetFpgaImageAttributeRequestPrivate
 *
 * @brief  Private implementation for ResetFpgaImageAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetFpgaImageAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ResetFpgaImageAttributeRequest instance.
 */
ResetFpgaImageAttributeRequestPrivate::ResetFpgaImageAttributeRequestPrivate(
    const EC2Request::Action action, ResetFpgaImageAttributeRequest * const q)
    : ResetFpgaImageAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetFpgaImageAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetFpgaImageAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetFpgaImageAttributeRequest instance.
 */
ResetFpgaImageAttributeRequestPrivate::ResetFpgaImageAttributeRequestPrivate(
    const ResetFpgaImageAttributeRequestPrivate &other, ResetFpgaImageAttributeRequest * const q)
    : ResetFpgaImageAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
