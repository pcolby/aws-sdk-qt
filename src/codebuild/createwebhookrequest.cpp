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

#include "createwebhookrequest.h"
#include "createwebhookrequest_p.h"
#include "createwebhookresponse.h"
#include "codebuildrequest_p.h"

namespace AWS {
namespace CodeBuild {

/**
 * @class  CreateWebhookRequest
 *
 * @brief  Implements CodeBuild CreateWebhook requests.
 *
 * @see    CodeBuildClient::createWebhook
 */

/**
 * @brief  Constructs a new CreateWebhookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateWebhookResponse::CreateWebhookResponse(

/**
 * @brief  Constructs a new CreateWebhookRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateWebhookRequest::CreateWebhookRequest(const CreateWebhookRequest &other)
    : CodeBuildRequest(new CreateWebhookRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateWebhookRequest object.
 */
CreateWebhookRequest::CreateWebhookRequest()
    : CodeBuildRequest(new CreateWebhookRequestPrivate(CodeBuildRequest::CreateWebhookAction, this))
{

}

bool CreateWebhookRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateWebhookResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateWebhookResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
AwsAbstractResponse * CreateWebhookRequest::response(QNetworkReply * const reply) const
{
    return new CreateWebhookResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateWebhookRequestPrivate
 *
 * @brief  Private implementation for CreateWebhookRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateWebhookRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public CreateWebhookRequest instance.
 */
CreateWebhookRequestPrivate::CreateWebhookRequestPrivate(
    const CodeBuildRequest::Action action, CreateWebhookRequest * const q)
    : CreateWebhookPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateWebhookRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateWebhookRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateWebhookRequest instance.
 */
CreateWebhookRequestPrivate::CreateWebhookRequestPrivate(
    const CreateWebhookRequestPrivate &other, CreateWebhookRequest * const q)
    : CreateWebhookPrivate(other, q)
{

}
