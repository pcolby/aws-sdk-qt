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

#include "deleteplatformapplicationrequest.h"
#include "deleteplatformapplicationrequest_p.h"
#include "deleteplatformapplicationresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  DeletePlatformApplicationRequest
 *
 * @brief  Implements SNS DeletePlatformApplication requests.
 *
 * @see    SNSClient::deletePlatformApplication
 */

/**
 * @brief  Constructs a new DeletePlatformApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePlatformApplicationRequest::DeletePlatformApplicationRequest(const DeletePlatformApplicationRequest &other)
    : SNSRequest(new DeletePlatformApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePlatformApplicationRequest object.
 */
DeletePlatformApplicationRequest::DeletePlatformApplicationRequest()
    : SNSRequest(new DeletePlatformApplicationRequestPrivate(SNSRequest::DeletePlatformApplicationAction, this))
{

}

bool DeletePlatformApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePlatformApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePlatformApplicationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * DeletePlatformApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeletePlatformApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePlatformApplicationRequestPrivate
 *
 * @brief  Private implementation for DeletePlatformApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePlatformApplicationRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public DeletePlatformApplicationRequest instance.
 */
DeletePlatformApplicationRequestPrivate::DeletePlatformApplicationRequestPrivate(
    const SNSRequest::Action action, DeletePlatformApplicationRequest * const q)
    : DeletePlatformApplicationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePlatformApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePlatformApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePlatformApplicationRequest instance.
 */
DeletePlatformApplicationRequestPrivate::DeletePlatformApplicationRequestPrivate(
    const DeletePlatformApplicationRequestPrivate &other, DeletePlatformApplicationRequest * const q)
    : DeletePlatformApplicationPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
