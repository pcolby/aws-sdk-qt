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

#include "listsigningcertificatesrequest.h"
#include "listsigningcertificatesrequest_p.h"
#include "listsigningcertificatesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListSigningCertificatesRequest
 *
 * @brief  Implements IAM ListSigningCertificates requests.
 *
 * @see    IAMClient::listSigningCertificates
 */

/**
 * @brief  Constructs a new ListSigningCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSigningCertificatesResponse::ListSigningCertificatesResponse(

/**
 * @brief  Constructs a new ListSigningCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSigningCertificatesRequest::ListSigningCertificatesRequest(const ListSigningCertificatesRequest &other)
    : IAMRequest(new ListSigningCertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSigningCertificatesRequest object.
 */
ListSigningCertificatesRequest::ListSigningCertificatesRequest()
    : IAMRequest(new ListSigningCertificatesRequestPrivate(IAMRequest::ListSigningCertificatesAction, this))
{

}

bool ListSigningCertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSigningCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSigningCertificatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListSigningCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new ListSigningCertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSigningCertificatesRequestPrivate
 *
 * @brief  Private implementation for ListSigningCertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSigningCertificatesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListSigningCertificatesRequest instance.
 */
ListSigningCertificatesRequestPrivate::ListSigningCertificatesRequestPrivate(
    const IAMRequest::Action action, ListSigningCertificatesRequest * const q)
    : ListSigningCertificatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSigningCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSigningCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSigningCertificatesRequest instance.
 */
ListSigningCertificatesRequestPrivate::ListSigningCertificatesRequestPrivate(
    const ListSigningCertificatesRequestPrivate &other, ListSigningCertificatesRequest * const q)
    : ListSigningCertificatesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
