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

#include "updatetagoptionrequest.h"
#include "updatetagoptionrequest_p.h"
#include "updatetagoptionresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  UpdateTagOptionRequest
 *
 * @brief  Implements ServiceCatalog UpdateTagOption requests.
 *
 * @see    ServiceCatalogClient::updateTagOption
 */

/**
 * @brief  Constructs a new UpdateTagOptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTagOptionRequest::UpdateTagOptionRequest(const UpdateTagOptionRequest &other)
    : ServiceCatalogRequest(new UpdateTagOptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTagOptionRequest object.
 */
UpdateTagOptionRequest::UpdateTagOptionRequest()
    : ServiceCatalogRequest(new UpdateTagOptionRequestPrivate(ServiceCatalogRequest::UpdateTagOptionAction, this))
{

}

bool UpdateTagOptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTagOptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTagOptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * UpdateTagOptionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTagOptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTagOptionRequestPrivate
 *
 * @brief  Private implementation for UpdateTagOptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTagOptionRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public UpdateTagOptionRequest instance.
 */
UpdateTagOptionRequestPrivate::UpdateTagOptionRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateTagOptionRequest * const q)
    : UpdateTagOptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTagOptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTagOptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTagOptionRequest instance.
 */
UpdateTagOptionRequestPrivate::UpdateTagOptionRequestPrivate(
    const UpdateTagOptionRequestPrivate &other, UpdateTagOptionRequest * const q)
    : UpdateTagOptionPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
