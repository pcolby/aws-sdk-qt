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

#include "getdocumentpathrequest.h"
#include "getdocumentpathrequest_p.h"
#include "getdocumentpathresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  GetDocumentPathRequest
 *
 * @brief  Implements WorkDocs GetDocumentPath requests.
 *
 * @see    WorkDocsClient::getDocumentPath
 */

/**
 * @brief  Constructs a new GetDocumentPathResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentPathResponse::GetDocumentPathResponse(

/**
 * @brief  Constructs a new GetDocumentPathRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDocumentPathRequest::GetDocumentPathRequest(const GetDocumentPathRequest &other)
    : WorkDocsRequest(new GetDocumentPathRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDocumentPathRequest object.
 */
GetDocumentPathRequest::GetDocumentPathRequest()
    : WorkDocsRequest(new GetDocumentPathRequestPrivate(WorkDocsRequest::GetDocumentPathAction, this))
{

}

bool GetDocumentPathRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDocumentPathResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDocumentPathResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * GetDocumentPathRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentPathResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDocumentPathRequestPrivate
 *
 * @brief  Private implementation for GetDocumentPathRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentPathRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public GetDocumentPathRequest instance.
 */
GetDocumentPathRequestPrivate::GetDocumentPathRequestPrivate(
    const WorkDocsRequest::Action action, GetDocumentPathRequest * const q)
    : GetDocumentPathPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentPathRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentPathRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDocumentPathRequest instance.
 */
GetDocumentPathRequestPrivate::GetDocumentPathRequestPrivate(
    const GetDocumentPathRequestPrivate &other, GetDocumentPathRequest * const q)
    : GetDocumentPathPrivate(other, q)
{

}
