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

#include "deletewebhookrequest.h"
#include "deletewebhookrequest_p.h"
#include "deletewebhookresponse.h"
#include "codebuildrequest_p.h"

namespace AWS {
namespace CodeBuild {

/**
 * @class  DeleteWebhookRequest
 *
 * @brief  Implements CodeBuild DeleteWebhook requests.
 *
 * @see    CodeBuildClient::deleteWebhook
 */

/**
 * @brief  Constructs a new DeleteWebhookRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteWebhookRequest::DeleteWebhookRequest(const DeleteWebhookRequest &other)
    : CodeBuildRequest(new DeleteWebhookRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteWebhookRequest object.
 */
DeleteWebhookRequest::DeleteWebhookRequest()
    : CodeBuildRequest(new DeleteWebhookRequestPrivate(CodeBuildRequest::DeleteWebhookAction, this))
{

}

bool DeleteWebhookRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteWebhookResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteWebhookResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
AwsAbstractResponse * DeleteWebhookRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWebhookResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteWebhookRequestPrivate
 *
 * @brief  Private implementation for DeleteWebhookRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteWebhookRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public DeleteWebhookRequest instance.
 */
DeleteWebhookRequestPrivate::DeleteWebhookRequestPrivate(
    const CodeBuildRequest::Action action, DeleteWebhookRequest * const q)
    : DeleteWebhookPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteWebhookRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteWebhookRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteWebhookRequest instance.
 */
DeleteWebhookRequestPrivate::DeleteWebhookRequestPrivate(
    const DeleteWebhookRequestPrivate &other, DeleteWebhookRequest * const q)
    : DeleteWebhookPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace AWS
