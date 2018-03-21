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

#include "createresourcerequest.h"
#include "createresourcerequest_p.h"
#include "createresourceresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  CreateResourceRequest
 *
 * @brief  Implements WorkMail CreateResource requests.
 *
 * @see    WorkMailClient::createResource
 */

/**
 * @brief  Constructs a new CreateResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResourceResponse::CreateResourceResponse(

/**
 * @brief  Constructs a new CreateResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateResourceRequest::CreateResourceRequest(const CreateResourceRequest &other)
    : WorkMailRequest(new CreateResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateResourceRequest object.
 */
CreateResourceRequest::CreateResourceRequest()
    : WorkMailRequest(new CreateResourceRequestPrivate(WorkMailRequest::CreateResourceAction, this))
{

}

bool CreateResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * CreateResourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateResourceRequestPrivate
 *
 * @brief  Private implementation for CreateResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public CreateResourceRequest instance.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const WorkMailRequest::Action action, CreateResourceRequest * const q)
    : CreateResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateResourceRequest instance.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const CreateResourceRequestPrivate &other, CreateResourceRequest * const q)
    : CreateResourcePrivate(other, q)
{

}
