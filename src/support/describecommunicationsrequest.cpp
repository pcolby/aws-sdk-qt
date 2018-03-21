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

#include "describecommunicationsrequest.h"
#include "describecommunicationsrequest_p.h"
#include "describecommunicationsresponse.h"
#include "supportrequest_p.h"

namespace AWS {
namespace Support {

/**
 * @class  DescribeCommunicationsRequest
 *
 * @brief  Implements Support DescribeCommunications requests.
 *
 * @see    SupportClient::describeCommunications
 */

/**
 * @brief  Constructs a new DescribeCommunicationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCommunicationsResponse::DescribeCommunicationsResponse(

/**
 * @brief  Constructs a new DescribeCommunicationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCommunicationsRequest::DescribeCommunicationsRequest(const DescribeCommunicationsRequest &other)
    : SupportRequest(new DescribeCommunicationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCommunicationsRequest object.
 */
DescribeCommunicationsRequest::DescribeCommunicationsRequest()
    : SupportRequest(new DescribeCommunicationsRequestPrivate(SupportRequest::DescribeCommunicationsAction, this))
{

}

bool DescribeCommunicationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCommunicationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCommunicationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * DescribeCommunicationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCommunicationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCommunicationsRequestPrivate
 *
 * @brief  Private implementation for DescribeCommunicationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCommunicationsRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public DescribeCommunicationsRequest instance.
 */
DescribeCommunicationsRequestPrivate::DescribeCommunicationsRequestPrivate(
    const SupportRequest::Action action, DescribeCommunicationsRequest * const q)
    : DescribeCommunicationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCommunicationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCommunicationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCommunicationsRequest instance.
 */
DescribeCommunicationsRequestPrivate::DescribeCommunicationsRequestPrivate(
    const DescribeCommunicationsRequestPrivate &other, DescribeCommunicationsRequest * const q)
    : DescribeCommunicationsPrivate(other, q)
{

}
