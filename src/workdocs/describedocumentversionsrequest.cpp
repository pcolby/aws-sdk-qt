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

#include "describedocumentversionsrequest.h"
#include "describedocumentversionsrequest_p.h"
#include "describedocumentversionsresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeDocumentVersionsRequest
 *
 * @brief  Implements WorkDocs DescribeDocumentVersions requests.
 *
 * @see    WorkDocsClient::describeDocumentVersions
 */

/**
 * @brief  Constructs a new DescribeDocumentVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDocumentVersionsRequest::DescribeDocumentVersionsRequest(const DescribeDocumentVersionsRequest &other)
    : WorkDocsRequest(new DescribeDocumentVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDocumentVersionsRequest object.
 */
DescribeDocumentVersionsRequest::DescribeDocumentVersionsRequest()
    : WorkDocsRequest(new DescribeDocumentVersionsRequestPrivate(WorkDocsRequest::DescribeDocumentVersionsAction, this))
{

}

bool DescribeDocumentVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDocumentVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDocumentVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDocumentVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDocumentVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDocumentVersionsRequestPrivate
 *
 * @brief  Private implementation for DescribeDocumentVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDocumentVersionsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeDocumentVersionsRequest instance.
 */
DescribeDocumentVersionsRequestPrivate::DescribeDocumentVersionsRequestPrivate(
    const WorkDocsRequest::Action action, DescribeDocumentVersionsRequest * const q)
    : WorkDocsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDocumentVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDocumentVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDocumentVersionsRequest instance.
 */
DescribeDocumentVersionsRequestPrivate::DescribeDocumentVersionsRequestPrivate(
    const DescribeDocumentVersionsRequestPrivate &other, DescribeDocumentVersionsRequest * const q)
    : WorkDocsRequestPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
