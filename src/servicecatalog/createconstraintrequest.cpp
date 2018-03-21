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

#include "createconstraintrequest.h"
#include "createconstraintrequest_p.h"
#include "createconstraintresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  CreateConstraintRequest
 *
 * @brief  Implements ServiceCatalog CreateConstraint requests.
 *
 * @see    ServiceCatalogClient::createConstraint
 */

/**
 * @brief  Constructs a new CreateConstraintRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateConstraintRequest::CreateConstraintRequest(const CreateConstraintRequest &other)
    : ServiceCatalogRequest(new CreateConstraintRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateConstraintRequest object.
 */
CreateConstraintRequest::CreateConstraintRequest()
    : ServiceCatalogRequest(new CreateConstraintRequestPrivate(ServiceCatalogRequest::CreateConstraintAction, this))
{

}

bool CreateConstraintRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateConstraintResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateConstraintResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * CreateConstraintRequest::response(QNetworkReply * const reply) const
{
    return new CreateConstraintResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateConstraintRequestPrivate
 *
 * @brief  Private implementation for CreateConstraintRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConstraintRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public CreateConstraintRequest instance.
 */
CreateConstraintRequestPrivate::CreateConstraintRequestPrivate(
    const ServiceCatalogRequest::Action action, CreateConstraintRequest * const q)
    : CreateConstraintPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateConstraintRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateConstraintRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateConstraintRequest instance.
 */
CreateConstraintRequestPrivate::CreateConstraintRequestPrivate(
    const CreateConstraintRequestPrivate &other, CreateConstraintRequest * const q)
    : CreateConstraintPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
