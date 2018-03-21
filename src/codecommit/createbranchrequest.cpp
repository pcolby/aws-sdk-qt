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

#include "createbranchrequest.h"
#include "createbranchrequest_p.h"
#include "createbranchresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  CreateBranchRequest
 *
 * @brief  Implements CodeCommit CreateBranch requests.
 *
 * @see    CodeCommitClient::createBranch
 */

/**
 * @brief  Constructs a new CreateBranchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBranchResponse::CreateBranchResponse(

/**
 * @brief  Constructs a new CreateBranchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBranchRequest::CreateBranchRequest(const CreateBranchRequest &other)
    : CodeCommitRequest(new CreateBranchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBranchRequest object.
 */
CreateBranchRequest::CreateBranchRequest()
    : CodeCommitRequest(new CreateBranchRequestPrivate(CodeCommitRequest::CreateBranchAction, this))
{

}

bool CreateBranchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBranchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBranchResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * CreateBranchRequest::response(QNetworkReply * const reply) const
{
    return new CreateBranchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBranchRequestPrivate
 *
 * @brief  Private implementation for CreateBranchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBranchRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public CreateBranchRequest instance.
 */
CreateBranchRequestPrivate::CreateBranchRequestPrivate(
    const CodeCommitRequest::Action action, CreateBranchRequest * const q)
    : CreateBranchPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBranchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBranchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBranchRequest instance.
 */
CreateBranchRequestPrivate::CreateBranchRequestPrivate(
    const CreateBranchRequestPrivate &other, CreateBranchRequest * const q)
    : CreateBranchPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
