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

#include "listgithubaccounttokennamesrequest.h"
#include "listgithubaccounttokennamesrequest_p.h"
#include "listgithubaccounttokennamesresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ListGitHubAccountTokenNamesRequest
 *
 * @brief  Implements CodeDeploy ListGitHubAccountTokenNames requests.
 *
 * @see    CodeDeployClient::listGitHubAccountTokenNames
 */

/**
 * @brief  Constructs a new ListGitHubAccountTokenNamesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGitHubAccountTokenNamesResponse::ListGitHubAccountTokenNamesResponse(

/**
 * @brief  Constructs a new ListGitHubAccountTokenNamesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGitHubAccountTokenNamesRequest::ListGitHubAccountTokenNamesRequest(const ListGitHubAccountTokenNamesRequest &other)
    : CodeDeployRequest(new ListGitHubAccountTokenNamesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGitHubAccountTokenNamesRequest object.
 */
ListGitHubAccountTokenNamesRequest::ListGitHubAccountTokenNamesRequest()
    : CodeDeployRequest(new ListGitHubAccountTokenNamesRequestPrivate(CodeDeployRequest::ListGitHubAccountTokenNamesAction, this))
{

}

bool ListGitHubAccountTokenNamesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGitHubAccountTokenNamesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGitHubAccountTokenNamesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * ListGitHubAccountTokenNamesRequest::response(QNetworkReply * const reply) const
{
    return new ListGitHubAccountTokenNamesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGitHubAccountTokenNamesRequestPrivate
 *
 * @brief  Private implementation for ListGitHubAccountTokenNamesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGitHubAccountTokenNamesRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public ListGitHubAccountTokenNamesRequest instance.
 */
ListGitHubAccountTokenNamesRequestPrivate::ListGitHubAccountTokenNamesRequestPrivate(
    const CodeDeployRequest::Action action, ListGitHubAccountTokenNamesRequest * const q)
    : ListGitHubAccountTokenNamesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGitHubAccountTokenNamesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGitHubAccountTokenNamesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGitHubAccountTokenNamesRequest instance.
 */
ListGitHubAccountTokenNamesRequestPrivate::ListGitHubAccountTokenNamesRequestPrivate(
    const ListGitHubAccountTokenNamesRequestPrivate &other, ListGitHubAccountTokenNamesRequest * const q)
    : ListGitHubAccountTokenNamesPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS
