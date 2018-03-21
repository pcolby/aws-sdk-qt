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

#include "getdifferencesrequest.h"
#include "getdifferencesrequest_p.h"
#include "getdifferencesresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  GetDifferencesRequest
 *
 * @brief  Implements CodeCommit GetDifferences requests.
 *
 * @see    CodeCommitClient::getDifferences
 */

/**
 * @brief  Constructs a new GetDifferencesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDifferencesResponse::GetDifferencesResponse(

/**
 * @brief  Constructs a new GetDifferencesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDifferencesRequest::GetDifferencesRequest(const GetDifferencesRequest &other)
    : CodeCommitRequest(new GetDifferencesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDifferencesRequest object.
 */
GetDifferencesRequest::GetDifferencesRequest()
    : CodeCommitRequest(new GetDifferencesRequestPrivate(CodeCommitRequest::GetDifferencesAction, this))
{

}

bool GetDifferencesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDifferencesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDifferencesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * GetDifferencesRequest::response(QNetworkReply * const reply) const
{
    return new GetDifferencesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDifferencesRequestPrivate
 *
 * @brief  Private implementation for GetDifferencesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDifferencesRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetDifferencesRequest instance.
 */
GetDifferencesRequestPrivate::GetDifferencesRequestPrivate(
    const CodeCommitRequest::Action action, GetDifferencesRequest * const q)
    : GetDifferencesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDifferencesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDifferencesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDifferencesRequest instance.
 */
GetDifferencesRequestPrivate::GetDifferencesRequestPrivate(
    const GetDifferencesRequestPrivate &other, GetDifferencesRequest * const q)
    : GetDifferencesPrivate(other, q)
{

}
