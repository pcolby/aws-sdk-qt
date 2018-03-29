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

#include "createtagoptionrequest.h"
#include "createtagoptionrequest_p.h"
#include "createtagoptionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  CreateTagOptionRequest
 *
 * @brief  Implements ServiceCatalog CreateTagOption requests.
 *
 * @see    ServiceCatalogClient::createTagOption
 */

/**
 * @brief  Constructs a new CreateTagOptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTagOptionRequest::CreateTagOptionRequest(const CreateTagOptionRequest &other)
    : ServiceCatalogRequest(new CreateTagOptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTagOptionRequest object.
 */
CreateTagOptionRequest::CreateTagOptionRequest()
    : ServiceCatalogRequest(new CreateTagOptionRequestPrivate(ServiceCatalogRequest::CreateTagOptionAction, this))
{

}

bool CreateTagOptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTagOptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTagOptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTagOptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateTagOptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTagOptionRequestPrivate
 *
 * @brief  Private implementation for CreateTagOptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTagOptionRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public CreateTagOptionRequest instance.
 */
CreateTagOptionRequestPrivate::CreateTagOptionRequestPrivate(
    const ServiceCatalogRequest::Action action, CreateTagOptionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTagOptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTagOptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTagOptionRequest instance.
 */
CreateTagOptionRequestPrivate::CreateTagOptionRequestPrivate(
    const CreateTagOptionRequestPrivate &other, CreateTagOptionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
