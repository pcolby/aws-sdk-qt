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

#include "listrecordhistoryrequest.h"
#include "listrecordhistoryrequest_p.h"
#include "listrecordhistoryresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListRecordHistoryRequest
 *
 * @brief  Implements ServiceCatalog ListRecordHistory requests.
 *
 * @see    ServiceCatalogClient::listRecordHistory
 */

/**
 * @brief  Constructs a new ListRecordHistoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRecordHistoryResponse::ListRecordHistoryResponse(

/**
 * @brief  Constructs a new ListRecordHistoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRecordHistoryRequest::ListRecordHistoryRequest(const ListRecordHistoryRequest &other)
    : ServiceCatalogRequest(new ListRecordHistoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRecordHistoryRequest object.
 */
ListRecordHistoryRequest::ListRecordHistoryRequest()
    : ServiceCatalogRequest(new ListRecordHistoryRequestPrivate(ServiceCatalogRequest::ListRecordHistoryAction, this))
{

}

bool ListRecordHistoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRecordHistoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRecordHistoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ListRecordHistoryRequest::response(QNetworkReply * const reply) const
{
    return new ListRecordHistoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRecordHistoryRequestPrivate
 *
 * @brief  Private implementation for ListRecordHistoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRecordHistoryRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListRecordHistoryRequest instance.
 */
ListRecordHistoryRequestPrivate::ListRecordHistoryRequestPrivate(
    const ServiceCatalogRequest::Action action, ListRecordHistoryRequest * const q)
    : ListRecordHistoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRecordHistoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRecordHistoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRecordHistoryRequest instance.
 */
ListRecordHistoryRequestPrivate::ListRecordHistoryRequestPrivate(
    const ListRecordHistoryRequestPrivate &other, ListRecordHistoryRequest * const q)
    : ListRecordHistoryPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
