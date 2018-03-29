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

#include "getfolderpathrequest.h"
#include "getfolderpathrequest_p.h"
#include "getfolderpathresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  GetFolderPathRequest
 *
 * @brief  Implements WorkDocs GetFolderPath requests.
 *
 * @see    WorkDocsClient::getFolderPath
 */

/**
 * @brief  Constructs a new GetFolderPathRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFolderPathRequest::GetFolderPathRequest(const GetFolderPathRequest &other)
    : WorkDocsRequest(new GetFolderPathRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetFolderPathRequest object.
 */
GetFolderPathRequest::GetFolderPathRequest()
    : WorkDocsRequest(new GetFolderPathRequestPrivate(WorkDocsRequest::GetFolderPathAction, this))
{

}

bool GetFolderPathRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetFolderPathResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFolderPathResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * GetFolderPathRequest::response(QNetworkReply * const reply) const
{
    return new GetFolderPathResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetFolderPathRequestPrivate
 *
 * @brief  Private implementation for GetFolderPathRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFolderPathRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public GetFolderPathRequest instance.
 */
GetFolderPathRequestPrivate::GetFolderPathRequestPrivate(
    const WorkDocsRequest::Action action, GetFolderPathRequest * const q)
    : GetFolderPathPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetFolderPathRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFolderPathRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFolderPathRequest instance.
 */
GetFolderPathRequestPrivate::GetFolderPathRequestPrivate(
    const GetFolderPathRequestPrivate &other, GetFolderPathRequest * const q)
    : GetFolderPathPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
