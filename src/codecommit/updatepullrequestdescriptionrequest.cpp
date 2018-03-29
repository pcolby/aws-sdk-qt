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

#include "updatepullrequestdescriptionrequest.h"
#include "updatepullrequestdescriptionrequest_p.h"
#include "updatepullrequestdescriptionresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdatePullRequestDescriptionRequest
 *
 * @brief  Implements CodeCommit UpdatePullRequestDescription requests.
 *
 * @see    CodeCommitClient::updatePullRequestDescription
 */

/**
 * @brief  Constructs a new UpdatePullRequestDescriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePullRequestDescriptionRequest::UpdatePullRequestDescriptionRequest(const UpdatePullRequestDescriptionRequest &other)
    : CodeCommitRequest(new UpdatePullRequestDescriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePullRequestDescriptionRequest object.
 */
UpdatePullRequestDescriptionRequest::UpdatePullRequestDescriptionRequest()
    : CodeCommitRequest(new UpdatePullRequestDescriptionRequestPrivate(CodeCommitRequest::UpdatePullRequestDescriptionAction, this))
{

}

bool UpdatePullRequestDescriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePullRequestDescriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePullRequestDescriptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePullRequestDescriptionRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePullRequestDescriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePullRequestDescriptionRequestPrivate
 *
 * @brief  Private implementation for UpdatePullRequestDescriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestDescriptionRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public UpdatePullRequestDescriptionRequest instance.
 */
UpdatePullRequestDescriptionRequestPrivate::UpdatePullRequestDescriptionRequestPrivate(
    const CodeCommitRequest::Action action, UpdatePullRequestDescriptionRequest * const q)
    : UpdatePullRequestDescriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestDescriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePullRequestDescriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePullRequestDescriptionRequest instance.
 */
UpdatePullRequestDescriptionRequestPrivate::UpdatePullRequestDescriptionRequestPrivate(
    const UpdatePullRequestDescriptionRequestPrivate &other, UpdatePullRequestDescriptionRequest * const q)
    : UpdatePullRequestDescriptionPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
