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

#include "associatetagoptionwithresourcerequest.h"
#include "associatetagoptionwithresourcerequest_p.h"
#include "associatetagoptionwithresourceresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  AssociateTagOptionWithResourceRequest
 *
 * @brief  Implements ServiceCatalog AssociateTagOptionWithResource requests.
 *
 * @see    ServiceCatalogClient::associateTagOptionWithResource
 */

/**
 * @brief  Constructs a new AssociateTagOptionWithResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateTagOptionWithResourceRequest::AssociateTagOptionWithResourceRequest(const AssociateTagOptionWithResourceRequest &other)
    : ServiceCatalogRequest(new AssociateTagOptionWithResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateTagOptionWithResourceRequest object.
 */
AssociateTagOptionWithResourceRequest::AssociateTagOptionWithResourceRequest()
    : ServiceCatalogRequest(new AssociateTagOptionWithResourceRequestPrivate(ServiceCatalogRequest::AssociateTagOptionWithResourceAction, this))
{

}

bool AssociateTagOptionWithResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateTagOptionWithResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateTagOptionWithResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * AssociateTagOptionWithResourceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateTagOptionWithResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateTagOptionWithResourceRequestPrivate
 *
 * @brief  Private implementation for AssociateTagOptionWithResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateTagOptionWithResourceRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public AssociateTagOptionWithResourceRequest instance.
 */
AssociateTagOptionWithResourceRequestPrivate::AssociateTagOptionWithResourceRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociateTagOptionWithResourceRequest * const q)
    : AssociateTagOptionWithResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateTagOptionWithResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateTagOptionWithResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateTagOptionWithResourceRequest instance.
 */
AssociateTagOptionWithResourceRequestPrivate::AssociateTagOptionWithResourceRequestPrivate(
    const AssociateTagOptionWithResourceRequestPrivate &other, AssociateTagOptionWithResourceRequest * const q)
    : AssociateTagOptionWithResourcePrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
