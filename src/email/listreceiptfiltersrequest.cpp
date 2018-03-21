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

#include "listreceiptfiltersrequest.h"
#include "listreceiptfiltersrequest_p.h"
#include "listreceiptfiltersresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  ListReceiptFiltersRequest
 *
 * @brief  Implements SES ListReceiptFilters requests.
 *
 * @see    SESClient::listReceiptFilters
 */

/**
 * @brief  Constructs a new ListReceiptFiltersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListReceiptFiltersRequest::ListReceiptFiltersRequest(const ListReceiptFiltersRequest &other)
    : SESRequest(new ListReceiptFiltersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListReceiptFiltersRequest object.
 */
ListReceiptFiltersRequest::ListReceiptFiltersRequest()
    : SESRequest(new ListReceiptFiltersRequestPrivate(SESRequest::ListReceiptFiltersAction, this))
{

}

bool ListReceiptFiltersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListReceiptFiltersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListReceiptFiltersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * ListReceiptFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListReceiptFiltersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListReceiptFiltersRequestPrivate
 *
 * @brief  Private implementation for ListReceiptFiltersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListReceiptFiltersRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public ListReceiptFiltersRequest instance.
 */
ListReceiptFiltersRequestPrivate::ListReceiptFiltersRequestPrivate(
    const SESRequest::Action action, ListReceiptFiltersRequest * const q)
    : ListReceiptFiltersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListReceiptFiltersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListReceiptFiltersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListReceiptFiltersRequest instance.
 */
ListReceiptFiltersRequestPrivate::ListReceiptFiltersRequestPrivate(
    const ListReceiptFiltersRequestPrivate &other, ListReceiptFiltersRequest * const q)
    : ListReceiptFiltersPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
