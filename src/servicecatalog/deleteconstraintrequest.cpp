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

#include "deleteconstraintrequest.h"
#include "deleteconstraintrequest_p.h"
#include "deleteconstraintresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DeleteConstraintRequest
 *
 * @brief  Implements ServiceCatalog DeleteConstraint requests.
 *
 * @see    ServiceCatalogClient::deleteConstraint
 */

/**
 * @brief  Constructs a new DeleteConstraintResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConstraintResponse::DeleteConstraintResponse(

/**
 * @brief  Constructs a new DeleteConstraintRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConstraintRequest::DeleteConstraintRequest(const DeleteConstraintRequest &other)
    : ServiceCatalogRequest(new DeleteConstraintRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConstraintRequest object.
 */
DeleteConstraintRequest::DeleteConstraintRequest()
    : ServiceCatalogRequest(new DeleteConstraintRequestPrivate(ServiceCatalogRequest::DeleteConstraintAction, this))
{

}

bool DeleteConstraintRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConstraintResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConstraintResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DeleteConstraintRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConstraintResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConstraintRequestPrivate
 *
 * @brief  Private implementation for DeleteConstraintRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConstraintRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DeleteConstraintRequest instance.
 */
DeleteConstraintRequestPrivate::DeleteConstraintRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteConstraintRequest * const q)
    : DeleteConstraintPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConstraintRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConstraintRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConstraintRequest instance.
 */
DeleteConstraintRequestPrivate::DeleteConstraintRequestPrivate(
    const DeleteConstraintRequestPrivate &other, DeleteConstraintRequest * const q)
    : DeleteConstraintPrivate(other, q)
{

}
