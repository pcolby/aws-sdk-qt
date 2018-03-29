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

#include "describerootfoldersrequest.h"
#include "describerootfoldersrequest_p.h"
#include "describerootfoldersresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeRootFoldersRequest
 *
 * @brief  Implements WorkDocs DescribeRootFolders requests.
 *
 * @see    WorkDocsClient::describeRootFolders
 */

/**
 * @brief  Constructs a new DescribeRootFoldersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRootFoldersRequest::DescribeRootFoldersRequest(const DescribeRootFoldersRequest &other)
    : WorkDocsRequest(new DescribeRootFoldersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRootFoldersRequest object.
 */
DescribeRootFoldersRequest::DescribeRootFoldersRequest()
    : WorkDocsRequest(new DescribeRootFoldersRequestPrivate(WorkDocsRequest::DescribeRootFoldersAction, this))
{

}

bool DescribeRootFoldersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRootFoldersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRootFoldersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DescribeRootFoldersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRootFoldersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRootFoldersRequestPrivate
 *
 * @brief  Private implementation for DescribeRootFoldersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRootFoldersRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeRootFoldersRequest instance.
 */
DescribeRootFoldersRequestPrivate::DescribeRootFoldersRequestPrivate(
    const WorkDocsRequest::Action action, DescribeRootFoldersRequest * const q)
    : DescribeRootFoldersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRootFoldersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRootFoldersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRootFoldersRequest instance.
 */
DescribeRootFoldersRequestPrivate::DescribeRootFoldersRequestPrivate(
    const DescribeRootFoldersRequestPrivate &other, DescribeRootFoldersRequest * const q)
    : DescribeRootFoldersPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
