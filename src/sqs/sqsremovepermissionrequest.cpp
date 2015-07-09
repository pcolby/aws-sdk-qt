/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqsremovepermissionrequest.h"
#include "sqsremovepermissionrequest_p.h"
#include "sqsremovepermissionresponse.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsRemovePermissionRequest
 *
 * @brief  Implements SQS RemovePermission requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_RemovePermission.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsRemovePermissionRequest.
 *
 * @todo
 */
/*SqsRemovePermissionRequest::SqsRemovePermissionRequest(
    ...
    : SqsRequest(new SqsRemovePermissionRequestPrivate(SqsRequest::RemovePermissionAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsRemovePermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsRemovePermissionRequest::SqsRemovePermissionRequest(const SqsRemovePermissionRequest &other)
    : SqsRequest(new SqsRemovePermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsRemovePermissionRequest object.
 */
SqsRemovePermissionRequest::SqsRemovePermissionRequest()
    : SqsRequest(new SqsRemovePermissionRequestPrivate(SqsRequest::RemovePermissionAction, this))
{

}

bool SqsRemovePermissionRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsRemovePermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsRemovePermissionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsRemovePermissionRequest::response(QNetworkReply * const reply) const
{
    return new SqsRemovePermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsRemovePermissionRequestPrivate
 *
 * @brief  Private implementation for SqsRemovePermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsRemovePermissionResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsRemovePermissionRequest instance.
 */
SqsRemovePermissionRequestPrivate::SqsRemovePermissionRequestPrivate(
    const SqsRequest::Action action, SqsRemovePermissionRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsRemovePermissionResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsRemovePermissionResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsRemovePermissionRequest instance.
 */
SqsRemovePermissionRequestPrivate::SqsRemovePermissionRequestPrivate(
    const SqsRemovePermissionRequestPrivate &other, SqsRemovePermissionRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
