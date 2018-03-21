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

#include "listcertificatesrequest.h"
#include "listcertificatesrequest_p.h"
#include "listcertificatesresponse.h"
#include "acmrequest_p.h"

namespace AWS {
namespace ACM {

/**
 * @class  ListCertificatesRequest
 *
 * @brief  Implements ACM ListCertificates requests.
 *
 * @see    ACMClient::listCertificates
 */

/**
 * @brief  Constructs a new ListCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCertificatesResponse::ListCertificatesResponse(

/**
 * @brief  Constructs a new ListCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCertificatesRequest::ListCertificatesRequest(const ListCertificatesRequest &other)
    : ACMRequest(new ListCertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCertificatesRequest object.
 */
ListCertificatesRequest::ListCertificatesRequest()
    : ACMRequest(new ListCertificatesRequestPrivate(ACMRequest::ListCertificatesAction, this))
{

}

bool ListCertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCertificatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ACMClient::send
 */
AwsAbstractResponse * ListCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new ListCertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCertificatesRequestPrivate
 *
 * @brief  Private implementation for ListCertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCertificatesRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public ListCertificatesRequest instance.
 */
ListCertificatesRequestPrivate::ListCertificatesRequestPrivate(
    const ACMRequest::Action action, ListCertificatesRequest * const q)
    : ListCertificatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCertificatesRequest instance.
 */
ListCertificatesRequestPrivate::ListCertificatesRequestPrivate(
    const ListCertificatesRequestPrivate &other, ListCertificatesRequest * const q)
    : ListCertificatesPrivate(other, q)
{

}

} // namespace ACM
} // namespace AWS
