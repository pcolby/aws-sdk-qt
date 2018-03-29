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

#include "describedomainrequest.h"
#include "describedomainrequest_p.h"
#include "describedomainresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  DescribeDomainRequest
 *
 * @brief  Implements SWF DescribeDomain requests.
 *
 * @see    SWFClient::describeDomain
 */

/**
 * @brief  Constructs a new DescribeDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDomainRequest::DescribeDomainRequest(const DescribeDomainRequest &other)
    : SWFRequest(new DescribeDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDomainRequest object.
 */
DescribeDomainRequest::DescribeDomainRequest()
    : SWFRequest(new DescribeDomainRequestPrivate(SWFRequest::DescribeDomainAction, this))
{

}

bool DescribeDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * DescribeDomainRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDomainRequestPrivate
 *
 * @brief  Private implementation for DescribeDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDomainRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public DescribeDomainRequest instance.
 */
DescribeDomainRequestPrivate::DescribeDomainRequestPrivate(
    const SWFRequest::Action action, DescribeDomainRequest * const q)
    : DescribeDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDomainRequest instance.
 */
DescribeDomainRequestPrivate::DescribeDomainRequestPrivate(
    const DescribeDomainRequestPrivate &other, DescribeDomainRequest * const q)
    : DescribeDomainPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
