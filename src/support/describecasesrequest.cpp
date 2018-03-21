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

#include "describecasesrequest.h"
#include "describecasesrequest_p.h"
#include "describecasesresponse.h"
#include "supportrequest_p.h"

namespace AWS {
namespace Support {

/**
 * @class  DescribeCasesRequest
 *
 * @brief  Implements Support DescribeCases requests.
 *
 * @see    SupportClient::describeCases
 */

/**
 * @brief  Constructs a new DescribeCasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCasesResponse::DescribeCasesResponse(

/**
 * @brief  Constructs a new DescribeCasesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCasesRequest::DescribeCasesRequest(const DescribeCasesRequest &other)
    : SupportRequest(new DescribeCasesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCasesRequest object.
 */
DescribeCasesRequest::DescribeCasesRequest()
    : SupportRequest(new DescribeCasesRequestPrivate(SupportRequest::DescribeCasesAction, this))
{

}

bool DescribeCasesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCasesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCasesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * DescribeCasesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCasesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCasesRequestPrivate
 *
 * @brief  Private implementation for DescribeCasesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCasesRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public DescribeCasesRequest instance.
 */
DescribeCasesRequestPrivate::DescribeCasesRequestPrivate(
    const SupportRequest::Action action, DescribeCasesRequest * const q)
    : DescribeCasesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCasesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCasesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCasesRequest instance.
 */
DescribeCasesRequestPrivate::DescribeCasesRequestPrivate(
    const DescribeCasesRequestPrivate &other, DescribeCasesRequest * const q)
    : DescribeCasesPrivate(other, q)
{

}

} // namespace Support
} // namespace AWS
