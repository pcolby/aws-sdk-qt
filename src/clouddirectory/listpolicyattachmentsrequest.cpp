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

#include "listpolicyattachmentsrequest.h"
#include "listpolicyattachmentsrequest_p.h"
#include "listpolicyattachmentsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListPolicyAttachmentsRequest
 *
 * @brief  Implements CloudDirectory ListPolicyAttachments requests.
 *
 * @see    CloudDirectoryClient::listPolicyAttachments
 */

/**
 * @brief  Constructs a new ListPolicyAttachmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPolicyAttachmentsResponse::ListPolicyAttachmentsResponse(

/**
 * @brief  Constructs a new ListPolicyAttachmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPolicyAttachmentsRequest::ListPolicyAttachmentsRequest(const ListPolicyAttachmentsRequest &other)
    : CloudDirectoryRequest(new ListPolicyAttachmentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPolicyAttachmentsRequest object.
 */
ListPolicyAttachmentsRequest::ListPolicyAttachmentsRequest()
    : CloudDirectoryRequest(new ListPolicyAttachmentsRequestPrivate(CloudDirectoryRequest::ListPolicyAttachmentsAction, this))
{

}

bool ListPolicyAttachmentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPolicyAttachmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPolicyAttachmentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListPolicyAttachmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListPolicyAttachmentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPolicyAttachmentsRequestPrivate
 *
 * @brief  Private implementation for ListPolicyAttachmentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPolicyAttachmentsRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListPolicyAttachmentsRequest instance.
 */
ListPolicyAttachmentsRequestPrivate::ListPolicyAttachmentsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListPolicyAttachmentsRequest * const q)
    : ListPolicyAttachmentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPolicyAttachmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPolicyAttachmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPolicyAttachmentsRequest instance.
 */
ListPolicyAttachmentsRequestPrivate::ListPolicyAttachmentsRequestPrivate(
    const ListPolicyAttachmentsRequestPrivate &other, ListPolicyAttachmentsRequest * const q)
    : ListPolicyAttachmentsPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
