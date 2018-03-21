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

#include "listcertificatesbycarequest.h"
#include "listcertificatesbycarequest_p.h"
#include "listcertificatesbycaresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListCertificatesByCARequest
 *
 * @brief  Implements IoT ListCertificatesByCA requests.
 *
 * @see    IoTClient::listCertificatesByCA
 */

/**
 * @brief  Constructs a new ListCertificatesByCARequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCertificatesByCARequest::ListCertificatesByCARequest(const ListCertificatesByCARequest &other)
    : IoTRequest(new ListCertificatesByCARequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCertificatesByCARequest object.
 */
ListCertificatesByCARequest::ListCertificatesByCARequest()
    : IoTRequest(new ListCertificatesByCARequestPrivate(IoTRequest::ListCertificatesByCAAction, this))
{

}

bool ListCertificatesByCARequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCertificatesByCAResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCertificatesByCAResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListCertificatesByCARequest::response(QNetworkReply * const reply) const
{
    return new ListCertificatesByCAResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCertificatesByCARequestPrivate
 *
 * @brief  Private implementation for ListCertificatesByCARequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCertificatesByCARequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListCertificatesByCARequest instance.
 */
ListCertificatesByCARequestPrivate::ListCertificatesByCARequestPrivate(
    const IoTRequest::Action action, ListCertificatesByCARequest * const q)
    : ListCertificatesByCAPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCertificatesByCARequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCertificatesByCARequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCertificatesByCARequest instance.
 */
ListCertificatesByCARequestPrivate::ListCertificatesByCARequestPrivate(
    const ListCertificatesByCARequestPrivate &other, ListCertificatesByCARequest * const q)
    : ListCertificatesByCAPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
