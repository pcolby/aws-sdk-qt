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

#include "describesuggestersrequest.h"
#include "describesuggestersrequest_p.h"
#include "describesuggestersresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeSuggestersRequest
 *
 * @brief  Implements CloudSearch DescribeSuggesters requests.
 *
 * @see    CloudSearchClient::describeSuggesters
 */

/**
 * @brief  Constructs a new DescribeSuggestersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSuggestersResponse::DescribeSuggestersResponse(

/**
 * @brief  Constructs a new DescribeSuggestersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSuggestersRequest::DescribeSuggestersRequest(const DescribeSuggestersRequest &other)
    : CloudSearchRequest(new DescribeSuggestersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSuggestersRequest object.
 */
DescribeSuggestersRequest::DescribeSuggestersRequest()
    : CloudSearchRequest(new DescribeSuggestersRequestPrivate(CloudSearchRequest::DescribeSuggestersAction, this))
{

}

bool DescribeSuggestersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSuggestersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSuggestersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DescribeSuggestersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSuggestersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSuggestersRequestPrivate
 *
 * @brief  Private implementation for DescribeSuggestersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSuggestersRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DescribeSuggestersRequest instance.
 */
DescribeSuggestersRequestPrivate::DescribeSuggestersRequestPrivate(
    const CloudSearchRequest::Action action, DescribeSuggestersRequest * const q)
    : DescribeSuggestersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSuggestersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSuggestersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSuggestersRequest instance.
 */
DescribeSuggestersRequestPrivate::DescribeSuggestersRequestPrivate(
    const DescribeSuggestersRequestPrivate &other, DescribeSuggestersRequest * const q)
    : DescribeSuggestersPrivate(other, q)
{

}
