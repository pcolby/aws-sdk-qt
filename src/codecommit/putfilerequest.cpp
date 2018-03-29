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

#include "putfilerequest.h"
#include "putfilerequest_p.h"
#include "putfileresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  PutFileRequest
 *
 * @brief  Implements CodeCommit PutFile requests.
 *
 * @see    CodeCommitClient::putFile
 */

/**
 * @brief  Constructs a new PutFileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutFileRequest::PutFileRequest(const PutFileRequest &other)
    : CodeCommitRequest(new PutFileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutFileRequest object.
 */
PutFileRequest::PutFileRequest()
    : CodeCommitRequest(new PutFileRequestPrivate(CodeCommitRequest::PutFileAction, this))
{

}

bool PutFileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutFileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutFileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * PutFileRequest::response(QNetworkReply * const reply) const
{
    return new PutFileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutFileRequestPrivate
 *
 * @brief  Private implementation for PutFileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutFileRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public PutFileRequest instance.
 */
PutFileRequestPrivate::PutFileRequestPrivate(
    const CodeCommitRequest::Action action, PutFileRequest * const q)
    : PutFilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutFileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutFileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutFileRequest instance.
 */
PutFileRequestPrivate::PutFileRequestPrivate(
    const PutFileRequestPrivate &other, PutFileRequest * const q)
    : PutFilePrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
