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

#include "getdocumentversionrequest.h"
#include "getdocumentversionrequest_p.h"
#include "getdocumentversionresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  GetDocumentVersionRequest
 *
 * @brief  Implements WorkDocs GetDocumentVersion requests.
 *
 * @see    WorkDocsClient::getDocumentVersion
 */

/**
 * @brief  Constructs a new GetDocumentVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDocumentVersionRequest::GetDocumentVersionRequest(const GetDocumentVersionRequest &other)
    : WorkDocsRequest(new GetDocumentVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDocumentVersionRequest object.
 */
GetDocumentVersionRequest::GetDocumentVersionRequest()
    : WorkDocsRequest(new GetDocumentVersionRequestPrivate(WorkDocsRequest::GetDocumentVersionAction, this))
{

}

bool GetDocumentVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDocumentVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDocumentVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDocumentVersionRequestPrivate
 *
 * @brief  Private implementation for GetDocumentVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentVersionRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public GetDocumentVersionRequest instance.
 */
GetDocumentVersionRequestPrivate::GetDocumentVersionRequestPrivate(
    const WorkDocsRequest::Action action, GetDocumentVersionRequest * const q)
    : GetDocumentVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDocumentVersionRequest instance.
 */
GetDocumentVersionRequestPrivate::GetDocumentVersionRequestPrivate(
    const GetDocumentVersionRequestPrivate &other, GetDocumentVersionRequest * const q)
    : GetDocumentVersionPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
