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

#include "createfolderrequest.h"
#include "createfolderrequest_p.h"
#include "createfolderresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  CreateFolderRequest
 *
 * @brief  Implements WorkDocs CreateFolder requests.
 *
 * @see    WorkDocsClient::createFolder
 */

/**
 * @brief  Constructs a new CreateFolderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFolderRequest::CreateFolderRequest(const CreateFolderRequest &other)
    : WorkDocsRequest(new CreateFolderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateFolderRequest object.
 */
CreateFolderRequest::CreateFolderRequest()
    : WorkDocsRequest(new CreateFolderRequestPrivate(WorkDocsRequest::CreateFolderAction, this))
{

}

bool CreateFolderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateFolderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFolderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFolderRequest::response(QNetworkReply * const reply) const
{
    return new CreateFolderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateFolderRequestPrivate
 *
 * @brief  Private implementation for CreateFolderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFolderRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public CreateFolderRequest instance.
 */
CreateFolderRequestPrivate::CreateFolderRequestPrivate(
    const WorkDocsRequest::Action action, CreateFolderRequest * const q)
    : CreateFolderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateFolderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFolderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFolderRequest instance.
 */
CreateFolderRequestPrivate::CreateFolderRequestPrivate(
    const CreateFolderRequestPrivate &other, CreateFolderRequest * const q)
    : CreateFolderPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
