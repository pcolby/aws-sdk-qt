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

#include "getdocumentrequest.h"
#include "getdocumentrequest_p.h"
#include "getdocumentresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  GetDocumentRequest
 *
 * @brief  Implements WorkDocs GetDocument requests.
 *
 * @see    WorkDocsClient::getDocument
 */

/**
 * @brief  Constructs a new GetDocumentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentResponse::GetDocumentResponse(

/**
 * @brief  Constructs a new GetDocumentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDocumentRequest::GetDocumentRequest(const GetDocumentRequest &other)
    : WorkDocsRequest(new GetDocumentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDocumentRequest object.
 */
GetDocumentRequest::GetDocumentRequest()
    : WorkDocsRequest(new GetDocumentRequestPrivate(WorkDocsRequest::GetDocumentAction, this))
{

}

bool GetDocumentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDocumentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDocumentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * GetDocumentRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDocumentRequestPrivate
 *
 * @brief  Private implementation for GetDocumentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public GetDocumentRequest instance.
 */
GetDocumentRequestPrivate::GetDocumentRequestPrivate(
    const WorkDocsRequest::Action action, GetDocumentRequest * const q)
    : GetDocumentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDocumentRequest instance.
 */
GetDocumentRequestPrivate::GetDocumentRequestPrivate(
    const GetDocumentRequestPrivate &other, GetDocumentRequest * const q)
    : GetDocumentPrivate(other, q)
{

}
