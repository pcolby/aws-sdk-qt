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

#include "describedocumentrequest.h"
#include "describedocumentrequest_p.h"
#include "describedocumentresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeDocumentRequest
 *
 * @brief  Implements SSM DescribeDocument requests.
 *
 * @see    SSMClient::describeDocument
 */

/**
 * @brief  Constructs a new DescribeDocumentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDocumentRequest::DescribeDocumentRequest(const DescribeDocumentRequest &other)
    : SSMRequest(new DescribeDocumentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDocumentRequest object.
 */
DescribeDocumentRequest::DescribeDocumentRequest()
    : SSMRequest(new DescribeDocumentRequestPrivate(SSMRequest::DescribeDocumentAction, this))
{

}

bool DescribeDocumentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDocumentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDocumentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDocumentRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDocumentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDocumentRequestPrivate
 *
 * @brief  Private implementation for DescribeDocumentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDocumentRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeDocumentRequest instance.
 */
DescribeDocumentRequestPrivate::DescribeDocumentRequestPrivate(
    const SSMRequest::Action action, DescribeDocumentRequest * const q)
    : DescribeDocumentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDocumentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDocumentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDocumentRequest instance.
 */
DescribeDocumentRequestPrivate::DescribeDocumentRequestPrivate(
    const DescribeDocumentRequestPrivate &other, DescribeDocumentRequest * const q)
    : DescribeDocumentPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
