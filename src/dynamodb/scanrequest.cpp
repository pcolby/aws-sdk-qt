/*
    Copyright 2013-2018 Paul Colby

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

#include "scanrequest.h"
#include "scanrequest_p.h"
#include "scanresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  ScanRequest
 *
 * @brief  Implements DynamoDB Scan requests.
 *
 * @see    DynamoDBClient::scan
 */

/**
 * @brief  Constructs a new ScanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ScanRequest::ScanRequest(const ScanRequest &other)
    : DynamoDBRequest(new ScanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ScanRequest object.
 */
ScanRequest::ScanRequest()
    : DynamoDBRequest(new ScanRequestPrivate(DynamoDBRequest::ScanAction, this))
{

}

bool ScanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ScanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ScanResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * ScanRequest::response(QNetworkReply * const reply) const
{
    return new ScanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ScanRequestPrivate
 *
 * @brief  Private implementation for ScanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScanRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public ScanRequest instance.
 */
ScanRequestPrivate::ScanRequestPrivate(
    const DynamoDBRequest::Action action, ScanRequest * const q)
    : ScanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ScanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ScanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ScanRequest instance.
 */
ScanRequestPrivate::ScanRequestPrivate(
    const ScanRequestPrivate &other, ScanRequest * const q)
    : ScanPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
