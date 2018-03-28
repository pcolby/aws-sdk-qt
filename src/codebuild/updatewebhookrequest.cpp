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

#include "updatewebhookrequest.h"
#include "updatewebhookrequest_p.h"
#include "updatewebhookresponse.h"
#include "codebuildrequest_p.h"

namespace AWS {
namespace CodeBuild {

/**
 * @class  UpdateWebhookRequest
 *
 * @brief  Implements CodeBuild UpdateWebhook requests.
 *
 * @see    CodeBuildClient::updateWebhook
 */

/**
 * @brief  Constructs a new UpdateWebhookRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateWebhookRequest::UpdateWebhookRequest(const UpdateWebhookRequest &other)
    : CodeBuildRequest(new UpdateWebhookRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateWebhookRequest object.
 */
UpdateWebhookRequest::UpdateWebhookRequest()
    : CodeBuildRequest(new UpdateWebhookRequestPrivate(CodeBuildRequest::UpdateWebhookAction, this))
{

}

bool UpdateWebhookRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateWebhookResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateWebhookResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
AwsAbstractResponse * UpdateWebhookRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWebhookResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateWebhookRequestPrivate
 *
 * @brief  Private implementation for UpdateWebhookRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateWebhookRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public UpdateWebhookRequest instance.
 */
UpdateWebhookRequestPrivate::UpdateWebhookRequestPrivate(
    const CodeBuildRequest::Action action, UpdateWebhookRequest * const q)
    : UpdateWebhookPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateWebhookRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateWebhookRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateWebhookRequest instance.
 */
UpdateWebhookRequestPrivate::UpdateWebhookRequestPrivate(
    const UpdateWebhookRequestPrivate &other, UpdateWebhookRequest * const q)
    : UpdateWebhookPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace AWS
