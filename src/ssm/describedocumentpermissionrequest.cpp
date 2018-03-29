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

#include "describedocumentpermissionrequest.h"
#include "describedocumentpermissionrequest_p.h"
#include "describedocumentpermissionresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeDocumentPermissionRequest
 *
 * @brief  Implements SSM DescribeDocumentPermission requests.
 *
 * @see    SSMClient::describeDocumentPermission
 */

/**
 * @brief  Constructs a new DescribeDocumentPermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDocumentPermissionRequest::DescribeDocumentPermissionRequest(const DescribeDocumentPermissionRequest &other)
    : SSMRequest(new DescribeDocumentPermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDocumentPermissionRequest object.
 */
DescribeDocumentPermissionRequest::DescribeDocumentPermissionRequest()
    : SSMRequest(new DescribeDocumentPermissionRequestPrivate(SSMRequest::DescribeDocumentPermissionAction, this))
{

}

bool DescribeDocumentPermissionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDocumentPermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDocumentPermissionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeDocumentPermissionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDocumentPermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDocumentPermissionRequestPrivate
 *
 * @brief  Private implementation for DescribeDocumentPermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDocumentPermissionRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeDocumentPermissionRequest instance.
 */
DescribeDocumentPermissionRequestPrivate::DescribeDocumentPermissionRequestPrivate(
    const SSMRequest::Action action, DescribeDocumentPermissionRequest * const q)
    : DescribeDocumentPermissionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDocumentPermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDocumentPermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDocumentPermissionRequest instance.
 */
DescribeDocumentPermissionRequestPrivate::DescribeDocumentPermissionRequestPrivate(
    const DescribeDocumentPermissionRequestPrivate &other, DescribeDocumentPermissionRequest * const q)
    : DescribeDocumentPermissionPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
