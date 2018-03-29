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

#include "describeproductasadminrequest.h"
#include "describeproductasadminrequest_p.h"
#include "describeproductasadminresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeProductAsAdminRequest
 *
 * @brief  Implements ServiceCatalog DescribeProductAsAdmin requests.
 *
 * @see    ServiceCatalogClient::describeProductAsAdmin
 */

/**
 * @brief  Constructs a new DescribeProductAsAdminRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeProductAsAdminRequest::DescribeProductAsAdminRequest(const DescribeProductAsAdminRequest &other)
    : ServiceCatalogRequest(new DescribeProductAsAdminRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeProductAsAdminRequest object.
 */
DescribeProductAsAdminRequest::DescribeProductAsAdminRequest()
    : ServiceCatalogRequest(new DescribeProductAsAdminRequestPrivate(ServiceCatalogRequest::DescribeProductAsAdminAction, this))
{

}

bool DescribeProductAsAdminRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeProductAsAdminResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeProductAsAdminResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DescribeProductAsAdminRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProductAsAdminResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeProductAsAdminRequestPrivate
 *
 * @brief  Private implementation for DescribeProductAsAdminRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProductAsAdminRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DescribeProductAsAdminRequest instance.
 */
DescribeProductAsAdminRequestPrivate::DescribeProductAsAdminRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProductAsAdminRequest * const q)
    : DescribeProductAsAdminPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProductAsAdminRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeProductAsAdminRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeProductAsAdminRequest instance.
 */
DescribeProductAsAdminRequestPrivate::DescribeProductAsAdminRequestPrivate(
    const DescribeProductAsAdminRequestPrivate &other, DescribeProductAsAdminRequest * const q)
    : DescribeProductAsAdminPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
