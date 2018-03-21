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

#include "describefoldercontentsrequest.h"
#include "describefoldercontentsrequest_p.h"
#include "describefoldercontentsresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  DescribeFolderContentsRequest
 *
 * @brief  Implements WorkDocs DescribeFolderContents requests.
 *
 * @see    WorkDocsClient::describeFolderContents
 */

/**
 * @brief  Constructs a new DescribeFolderContentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFolderContentsRequest::DescribeFolderContentsRequest(const DescribeFolderContentsRequest &other)
    : WorkDocsRequest(new DescribeFolderContentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFolderContentsRequest object.
 */
DescribeFolderContentsRequest::DescribeFolderContentsRequest()
    : WorkDocsRequest(new DescribeFolderContentsRequestPrivate(WorkDocsRequest::DescribeFolderContentsAction, this))
{

}

bool DescribeFolderContentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFolderContentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFolderContentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DescribeFolderContentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFolderContentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFolderContentsRequestPrivate
 *
 * @brief  Private implementation for DescribeFolderContentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFolderContentsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeFolderContentsRequest instance.
 */
DescribeFolderContentsRequestPrivate::DescribeFolderContentsRequestPrivate(
    const WorkDocsRequest::Action action, DescribeFolderContentsRequest * const q)
    : DescribeFolderContentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFolderContentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFolderContentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFolderContentsRequest instance.
 */
DescribeFolderContentsRequestPrivate::DescribeFolderContentsRequestPrivate(
    const DescribeFolderContentsRequestPrivate &other, DescribeFolderContentsRequest * const q)
    : DescribeFolderContentsPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
