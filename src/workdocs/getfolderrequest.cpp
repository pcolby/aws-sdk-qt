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

#include "getfolderrequest.h"
#include "getfolderrequest_p.h"
#include "getfolderresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  GetFolderRequest
 *
 * @brief  Implements WorkDocs GetFolder requests.
 *
 * @see    WorkDocsClient::getFolder
 */

/**
 * @brief  Constructs a new GetFolderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFolderRequest::GetFolderRequest(const GetFolderRequest &other)
    : WorkDocsRequest(new GetFolderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetFolderRequest object.
 */
GetFolderRequest::GetFolderRequest()
    : WorkDocsRequest(new GetFolderRequestPrivate(WorkDocsRequest::GetFolderAction, this))
{

}

bool GetFolderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetFolderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFolderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFolderRequest::response(QNetworkReply * const reply) const
{
    return new GetFolderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetFolderRequestPrivate
 *
 * @brief  Private implementation for GetFolderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFolderRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public GetFolderRequest instance.
 */
GetFolderRequestPrivate::GetFolderRequestPrivate(
    const WorkDocsRequest::Action action, GetFolderRequest * const q)
    : WorkDocsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetFolderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFolderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFolderRequest instance.
 */
GetFolderRequestPrivate::GetFolderRequestPrivate(
    const GetFolderRequestPrivate &other, GetFolderRequest * const q)
    : WorkDocsRequestPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
