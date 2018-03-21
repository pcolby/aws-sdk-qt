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

#include "createimagebuilderstreamingurlrequest.h"
#include "createimagebuilderstreamingurlrequest_p.h"
#include "createimagebuilderstreamingurlresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  CreateImageBuilderStreamingURLRequest
 *
 * @brief  Implements AppStream CreateImageBuilderStreamingURL requests.
 *
 * @see    AppStreamClient::createImageBuilderStreamingURL
 */

/**
 * @brief  Constructs a new CreateImageBuilderStreamingURLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateImageBuilderStreamingURLRequest::CreateImageBuilderStreamingURLRequest(const CreateImageBuilderStreamingURLRequest &other)
    : AppStreamRequest(new CreateImageBuilderStreamingURLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateImageBuilderStreamingURLRequest object.
 */
CreateImageBuilderStreamingURLRequest::CreateImageBuilderStreamingURLRequest()
    : AppStreamRequest(new CreateImageBuilderStreamingURLRequestPrivate(AppStreamRequest::CreateImageBuilderStreamingURLAction, this))
{

}

bool CreateImageBuilderStreamingURLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateImageBuilderStreamingURLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateImageBuilderStreamingURLResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * CreateImageBuilderStreamingURLRequest::response(QNetworkReply * const reply) const
{
    return new CreateImageBuilderStreamingURLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateImageBuilderStreamingURLRequestPrivate
 *
 * @brief  Private implementation for CreateImageBuilderStreamingURLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateImageBuilderStreamingURLRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public CreateImageBuilderStreamingURLRequest instance.
 */
CreateImageBuilderStreamingURLRequestPrivate::CreateImageBuilderStreamingURLRequestPrivate(
    const AppStreamRequest::Action action, CreateImageBuilderStreamingURLRequest * const q)
    : CreateImageBuilderStreamingURLPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateImageBuilderStreamingURLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateImageBuilderStreamingURLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateImageBuilderStreamingURLRequest instance.
 */
CreateImageBuilderStreamingURLRequestPrivate::CreateImageBuilderStreamingURLRequestPrivate(
    const CreateImageBuilderStreamingURLRequestPrivate &other, CreateImageBuilderStreamingURLRequest * const q)
    : CreateImageBuilderStreamingURLPrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
