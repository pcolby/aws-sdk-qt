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

#include "updatepullrequesttitlerequest.h"
#include "updatepullrequesttitlerequest_p.h"
#include "updatepullrequesttitleresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdatePullRequestTitleRequest
 *
 * @brief  Implements CodeCommit UpdatePullRequestTitle requests.
 *
 * @see    CodeCommitClient::updatePullRequestTitle
 */

/**
 * @brief  Constructs a new UpdatePullRequestTitleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePullRequestTitleRequest::UpdatePullRequestTitleRequest(const UpdatePullRequestTitleRequest &other)
    : CodeCommitRequest(new UpdatePullRequestTitleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePullRequestTitleRequest object.
 */
UpdatePullRequestTitleRequest::UpdatePullRequestTitleRequest()
    : CodeCommitRequest(new UpdatePullRequestTitleRequestPrivate(CodeCommitRequest::UpdatePullRequestTitleAction, this))
{

}

bool UpdatePullRequestTitleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePullRequestTitleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePullRequestTitleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePullRequestTitleRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePullRequestTitleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePullRequestTitleRequestPrivate
 *
 * @brief  Private implementation for UpdatePullRequestTitleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestTitleRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public UpdatePullRequestTitleRequest instance.
 */
UpdatePullRequestTitleRequestPrivate::UpdatePullRequestTitleRequestPrivate(
    const CodeCommitRequest::Action action, UpdatePullRequestTitleRequest * const q)
    : UpdatePullRequestTitlePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestTitleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePullRequestTitleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePullRequestTitleRequest instance.
 */
UpdatePullRequestTitleRequestPrivate::UpdatePullRequestTitleRequestPrivate(
    const UpdatePullRequestTitleRequestPrivate &other, UpdatePullRequestTitleRequest * const q)
    : UpdatePullRequestTitlePrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
