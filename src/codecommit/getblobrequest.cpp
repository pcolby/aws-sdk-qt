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

#include "getblobrequest.h"
#include "getblobrequest_p.h"
#include "getblobresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetBlobRequest
 *
 * @brief  Implements CodeCommit GetBlob requests.
 *
 * @see    CodeCommitClient::getBlob
 */

/**
 * @brief  Constructs a new GetBlobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBlobRequest::GetBlobRequest(const GetBlobRequest &other)
    : CodeCommitRequest(new GetBlobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBlobRequest object.
 */
GetBlobRequest::GetBlobRequest()
    : CodeCommitRequest(new GetBlobRequestPrivate(CodeCommitRequest::GetBlobAction, this))
{

}

bool GetBlobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBlobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBlobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * GetBlobRequest::response(QNetworkReply * const reply) const
{
    return new GetBlobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBlobRequestPrivate
 *
 * @brief  Private implementation for GetBlobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBlobRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetBlobRequest instance.
 */
GetBlobRequestPrivate::GetBlobRequestPrivate(
    const CodeCommitRequest::Action action, GetBlobRequest * const q)
    : GetBlobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBlobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBlobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBlobRequest instance.
 */
GetBlobRequestPrivate::GetBlobRequestPrivate(
    const GetBlobRequestPrivate &other, GetBlobRequest * const q)
    : GetBlobPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
