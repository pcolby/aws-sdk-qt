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

#include "deletegithubaccounttokenrequest.h"
#include "deletegithubaccounttokenrequest_p.h"
#include "deletegithubaccounttokenresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  DeleteGitHubAccountTokenRequest
 *
 * @brief  Implements CodeDeploy DeleteGitHubAccountToken requests.
 *
 * @see    CodeDeployClient::deleteGitHubAccountToken
 */

/**
 * @brief  Constructs a new DeleteGitHubAccountTokenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGitHubAccountTokenRequest::DeleteGitHubAccountTokenRequest(const DeleteGitHubAccountTokenRequest &other)
    : CodeDeployRequest(new DeleteGitHubAccountTokenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGitHubAccountTokenRequest object.
 */
DeleteGitHubAccountTokenRequest::DeleteGitHubAccountTokenRequest()
    : CodeDeployRequest(new DeleteGitHubAccountTokenRequestPrivate(CodeDeployRequest::DeleteGitHubAccountTokenAction, this))
{

}

bool DeleteGitHubAccountTokenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteGitHubAccountTokenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGitHubAccountTokenResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGitHubAccountTokenRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGitHubAccountTokenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteGitHubAccountTokenRequestPrivate
 *
 * @brief  Private implementation for DeleteGitHubAccountTokenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGitHubAccountTokenRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public DeleteGitHubAccountTokenRequest instance.
 */
DeleteGitHubAccountTokenRequestPrivate::DeleteGitHubAccountTokenRequestPrivate(
    const CodeDeployRequest::Action action, DeleteGitHubAccountTokenRequest * const q)
    : DeleteGitHubAccountTokenPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGitHubAccountTokenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGitHubAccountTokenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGitHubAccountTokenRequest instance.
 */
DeleteGitHubAccountTokenRequestPrivate::DeleteGitHubAccountTokenRequestPrivate(
    const DeleteGitHubAccountTokenRequestPrivate &other, DeleteGitHubAccountTokenRequest * const q)
    : DeleteGitHubAccountTokenPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
