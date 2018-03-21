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

#include "describecopyproductstatusrequest.h"
#include "describecopyproductstatusrequest_p.h"
#include "describecopyproductstatusresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeCopyProductStatusRequest
 *
 * @brief  Implements ServiceCatalog DescribeCopyProductStatus requests.
 *
 * @see    ServiceCatalogClient::describeCopyProductStatus
 */

/**
 * @brief  Constructs a new DescribeCopyProductStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCopyProductStatusResponse::DescribeCopyProductStatusResponse(

/**
 * @brief  Constructs a new DescribeCopyProductStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCopyProductStatusRequest::DescribeCopyProductStatusRequest(const DescribeCopyProductStatusRequest &other)
    : ServiceCatalogRequest(new DescribeCopyProductStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCopyProductStatusRequest object.
 */
DescribeCopyProductStatusRequest::DescribeCopyProductStatusRequest()
    : ServiceCatalogRequest(new DescribeCopyProductStatusRequestPrivate(ServiceCatalogRequest::DescribeCopyProductStatusAction, this))
{

}

bool DescribeCopyProductStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCopyProductStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCopyProductStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DescribeCopyProductStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCopyProductStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCopyProductStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeCopyProductStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCopyProductStatusRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DescribeCopyProductStatusRequest instance.
 */
DescribeCopyProductStatusRequestPrivate::DescribeCopyProductStatusRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeCopyProductStatusRequest * const q)
    : DescribeCopyProductStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCopyProductStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCopyProductStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCopyProductStatusRequest instance.
 */
DescribeCopyProductStatusRequestPrivate::DescribeCopyProductStatusRequestPrivate(
    const DescribeCopyProductStatusRequestPrivate &other, DescribeCopyProductStatusRequest * const q)
    : DescribeCopyProductStatusPrivate(other, q)
{

}
