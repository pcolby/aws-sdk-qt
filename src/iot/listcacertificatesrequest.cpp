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

#include "listcacertificatesrequest.h"
#include "listcacertificatesrequest_p.h"
#include "listcacertificatesresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  ListCACertificatesRequest
 *
 * @brief  Implements IoT ListCACertificates requests.
 *
 * @see    IoTClient::listCACertificates
 */

/**
 * @brief  Constructs a new ListCACertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCACertificatesRequest::ListCACertificatesRequest(const ListCACertificatesRequest &other)
    : IoTRequest(new ListCACertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCACertificatesRequest object.
 */
ListCACertificatesRequest::ListCACertificatesRequest()
    : IoTRequest(new ListCACertificatesRequestPrivate(IoTRequest::ListCACertificatesAction, this))
{

}

bool ListCACertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCACertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCACertificatesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCACertificatesRequest::response(QNetworkReply * const reply) const
{
    return new ListCACertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCACertificatesRequestPrivate
 *
 * @brief  Private implementation for ListCACertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCACertificatesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListCACertificatesRequest instance.
 */
ListCACertificatesRequestPrivate::ListCACertificatesRequestPrivate(
    const IoTRequest::Action action, ListCACertificatesRequest * const q)
    : ListCACertificatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCACertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCACertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCACertificatesRequest instance.
 */
ListCACertificatesRequestPrivate::ListCACertificatesRequestPrivate(
    const ListCACertificatesRequestPrivate &other, ListCACertificatesRequest * const q)
    : ListCACertificatesPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
