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

#include "describerecordrequest.h"
#include "describerecordrequest_p.h"
#include "describerecordresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeRecordRequest
 *
 * @brief  Implements ServiceCatalog DescribeRecord requests.
 *
 * @see    ServiceCatalogClient::describeRecord
 */

/**
 * @brief  Constructs a new DescribeRecordRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRecordRequest::DescribeRecordRequest(const DescribeRecordRequest &other)
    : ServiceCatalogRequest(new DescribeRecordRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRecordRequest object.
 */
DescribeRecordRequest::DescribeRecordRequest()
    : ServiceCatalogRequest(new DescribeRecordRequestPrivate(ServiceCatalogRequest::DescribeRecordAction, this))
{

}

bool DescribeRecordRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRecordResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRecordResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DescribeRecordRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecordResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRecordRequestPrivate
 *
 * @brief  Private implementation for DescribeRecordRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRecordRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DescribeRecordRequest instance.
 */
DescribeRecordRequestPrivate::DescribeRecordRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeRecordRequest * const q)
    : DescribeRecordPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRecordRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecordRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRecordRequest instance.
 */
DescribeRecordRequestPrivate::DescribeRecordRequestPrivate(
    const DescribeRecordRequestPrivate &other, DescribeRecordRequest * const q)
    : DescribeRecordPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
