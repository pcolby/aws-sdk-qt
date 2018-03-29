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

#include "getpartitionrequest.h"
#include "getpartitionrequest_p.h"
#include "getpartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  GetPartitionRequest
 *
 * @brief  Implements Glue GetPartition requests.
 *
 * @see    GlueClient::getPartition
 */

/**
 * @brief  Constructs a new GetPartitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPartitionRequest::GetPartitionRequest(const GetPartitionRequest &other)
    : GlueRequest(new GetPartitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPartitionRequest object.
 */
GetPartitionRequest::GetPartitionRequest()
    : GlueRequest(new GetPartitionRequestPrivate(GlueRequest::GetPartitionAction, this))
{

}

bool GetPartitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPartitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPartitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetPartitionRequest::response(QNetworkReply * const reply) const
{
    return new GetPartitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPartitionRequestPrivate
 *
 * @brief  Private implementation for GetPartitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPartitionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetPartitionRequest instance.
 */
GetPartitionRequestPrivate::GetPartitionRequestPrivate(
    const GlueRequest::Action action, GetPartitionRequest * const q)
    : GetPartitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPartitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPartitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPartitionRequest instance.
 */
GetPartitionRequestPrivate::GetPartitionRequestPrivate(
    const GetPartitionRequestPrivate &other, GetPartitionRequest * const q)
    : GetPartitionPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
