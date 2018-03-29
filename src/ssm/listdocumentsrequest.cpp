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

#include "listdocumentsrequest.h"
#include "listdocumentsrequest_p.h"
#include "listdocumentsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  ListDocumentsRequest
 *
 * @brief  Implements SSM ListDocuments requests.
 *
 * @see    SSMClient::listDocuments
 */

/**
 * @brief  Constructs a new ListDocumentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDocumentsRequest::ListDocumentsRequest(const ListDocumentsRequest &other)
    : SSMRequest(new ListDocumentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDocumentsRequest object.
 */
ListDocumentsRequest::ListDocumentsRequest()
    : SSMRequest(new ListDocumentsRequestPrivate(SSMRequest::ListDocumentsAction, this))
{

}

bool ListDocumentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDocumentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDocumentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDocumentsRequest::response(QNetworkReply * const reply) const
{
    return new ListDocumentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDocumentsRequestPrivate
 *
 * @brief  Private implementation for ListDocumentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDocumentsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListDocumentsRequest instance.
 */
ListDocumentsRequestPrivate::ListDocumentsRequestPrivate(
    const SSMRequest::Action action, ListDocumentsRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDocumentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDocumentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDocumentsRequest instance.
 */
ListDocumentsRequestPrivate::ListDocumentsRequestPrivate(
    const ListDocumentsRequestPrivate &other, ListDocumentsRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
