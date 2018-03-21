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

#include "describedomainsrequest.h"
#include "describedomainsrequest_p.h"
#include "describedomainsresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeDomainsRequest
 *
 * @brief  Implements CloudSearch DescribeDomains requests.
 *
 * @see    CloudSearchClient::describeDomains
 */

/**
 * @brief  Constructs a new DescribeDomainsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDomainsResponse::DescribeDomainsResponse(

/**
 * @brief  Constructs a new DescribeDomainsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDomainsRequest::DescribeDomainsRequest(const DescribeDomainsRequest &other)
    : CloudSearchRequest(new DescribeDomainsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDomainsRequest object.
 */
DescribeDomainsRequest::DescribeDomainsRequest()
    : CloudSearchRequest(new DescribeDomainsRequestPrivate(CloudSearchRequest::DescribeDomainsAction, this))
{

}

bool DescribeDomainsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDomainsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDomainsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DescribeDomainsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDomainsRequestPrivate
 *
 * @brief  Private implementation for DescribeDomainsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDomainsRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DescribeDomainsRequest instance.
 */
DescribeDomainsRequestPrivate::DescribeDomainsRequestPrivate(
    const CloudSearchRequest::Action action, DescribeDomainsRequest * const q)
    : DescribeDomainsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDomainsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDomainsRequest instance.
 */
DescribeDomainsRequestPrivate::DescribeDomainsRequestPrivate(
    const DescribeDomainsRequestPrivate &other, DescribeDomainsRequest * const q)
    : DescribeDomainsPrivate(other, q)
{

}
