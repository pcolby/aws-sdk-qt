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

#include "describecontinuousbackupsrequest.h"
#include "describecontinuousbackupsrequest_p.h"
#include "describecontinuousbackupsresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  DescribeContinuousBackupsRequest
 *
 * @brief  Implements DynamoDB DescribeContinuousBackups requests.
 *
 * @see    DynamoDBClient::describeContinuousBackups
 */

/**
 * @brief  Constructs a new DescribeContinuousBackupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeContinuousBackupsResponse::DescribeContinuousBackupsResponse(

/**
 * @brief  Constructs a new DescribeContinuousBackupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeContinuousBackupsRequest::DescribeContinuousBackupsRequest(const DescribeContinuousBackupsRequest &other)
    : DynamoDBRequest(new DescribeContinuousBackupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeContinuousBackupsRequest object.
 */
DescribeContinuousBackupsRequest::DescribeContinuousBackupsRequest()
    : DynamoDBRequest(new DescribeContinuousBackupsRequestPrivate(DynamoDBRequest::DescribeContinuousBackupsAction, this))
{

}

bool DescribeContinuousBackupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeContinuousBackupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeContinuousBackupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * DescribeContinuousBackupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContinuousBackupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeContinuousBackupsRequestPrivate
 *
 * @brief  Private implementation for DescribeContinuousBackupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeContinuousBackupsRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public DescribeContinuousBackupsRequest instance.
 */
DescribeContinuousBackupsRequestPrivate::DescribeContinuousBackupsRequestPrivate(
    const DynamoDBRequest::Action action, DescribeContinuousBackupsRequest * const q)
    : DescribeContinuousBackupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeContinuousBackupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeContinuousBackupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeContinuousBackupsRequest instance.
 */
DescribeContinuousBackupsRequestPrivate::DescribeContinuousBackupsRequestPrivate(
    const DescribeContinuousBackupsRequestPrivate &other, DescribeContinuousBackupsRequest * const q)
    : DescribeContinuousBackupsPrivate(other, q)
{

}
