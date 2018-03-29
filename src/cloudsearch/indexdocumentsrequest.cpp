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

#include "indexdocumentsrequest.h"
#include "indexdocumentsrequest_p.h"
#include "indexdocumentsresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  IndexDocumentsRequest
 *
 * @brief  Implements CloudSearch IndexDocuments requests.
 *
 * @see    CloudSearchClient::indexDocuments
 */

/**
 * @brief  Constructs a new IndexDocumentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
IndexDocumentsRequest::IndexDocumentsRequest(const IndexDocumentsRequest &other)
    : CloudSearchRequest(new IndexDocumentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new IndexDocumentsRequest object.
 */
IndexDocumentsRequest::IndexDocumentsRequest()
    : CloudSearchRequest(new IndexDocumentsRequestPrivate(CloudSearchRequest::IndexDocumentsAction, this))
{

}

bool IndexDocumentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an IndexDocumentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An IndexDocumentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * IndexDocumentsRequest::response(QNetworkReply * const reply) const
{
    return new IndexDocumentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  IndexDocumentsRequestPrivate
 *
 * @brief  Private implementation for IndexDocumentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IndexDocumentsRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public IndexDocumentsRequest instance.
 */
IndexDocumentsRequestPrivate::IndexDocumentsRequestPrivate(
    const CloudSearchRequest::Action action, IndexDocumentsRequest * const q)
    : IndexDocumentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new IndexDocumentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the IndexDocumentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public IndexDocumentsRequest instance.
 */
IndexDocumentsRequestPrivate::IndexDocumentsRequestPrivate(
    const IndexDocumentsRequestPrivate &other, IndexDocumentsRequest * const q)
    : IndexDocumentsPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace AWS
