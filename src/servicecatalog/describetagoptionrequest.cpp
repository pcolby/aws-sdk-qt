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

#include "describetagoptionrequest.h"
#include "describetagoptionrequest_p.h"
#include "describetagoptionresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeTagOptionRequest
 *
 * @brief  Implements ServiceCatalog DescribeTagOption requests.
 *
 * @see    ServiceCatalogClient::describeTagOption
 */

/**
 * @brief  Constructs a new DescribeTagOptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTagOptionResponse::DescribeTagOptionResponse(

/**
 * @brief  Constructs a new DescribeTagOptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTagOptionRequest::DescribeTagOptionRequest(const DescribeTagOptionRequest &other)
    : ServiceCatalogRequest(new DescribeTagOptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTagOptionRequest object.
 */
DescribeTagOptionRequest::DescribeTagOptionRequest()
    : ServiceCatalogRequest(new DescribeTagOptionRequestPrivate(ServiceCatalogRequest::DescribeTagOptionAction, this))
{

}

bool DescribeTagOptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTagOptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTagOptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DescribeTagOptionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTagOptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTagOptionRequestPrivate
 *
 * @brief  Private implementation for DescribeTagOptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTagOptionRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DescribeTagOptionRequest instance.
 */
DescribeTagOptionRequestPrivate::DescribeTagOptionRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeTagOptionRequest * const q)
    : DescribeTagOptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTagOptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTagOptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTagOptionRequest instance.
 */
DescribeTagOptionRequestPrivate::DescribeTagOptionRequestPrivate(
    const DescribeTagOptionRequestPrivate &other, DescribeTagOptionRequest * const q)
    : DescribeTagOptionPrivate(other, q)
{

}
