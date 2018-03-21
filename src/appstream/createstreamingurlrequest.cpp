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

#include "createstreamingurlrequest.h"
#include "createstreamingurlrequest_p.h"
#include "createstreamingurlresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  CreateStreamingURLRequest
 *
 * @brief  Implements AppStream CreateStreamingURL requests.
 *
 * @see    AppStreamClient::createStreamingURL
 */

/**
 * @brief  Constructs a new CreateStreamingURLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamingURLResponse::CreateStreamingURLResponse(

/**
 * @brief  Constructs a new CreateStreamingURLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStreamingURLRequest::CreateStreamingURLRequest(const CreateStreamingURLRequest &other)
    : AppStreamRequest(new CreateStreamingURLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStreamingURLRequest object.
 */
CreateStreamingURLRequest::CreateStreamingURLRequest()
    : AppStreamRequest(new CreateStreamingURLRequestPrivate(AppStreamRequest::CreateStreamingURLAction, this))
{

}

bool CreateStreamingURLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStreamingURLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStreamingURLResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * CreateStreamingURLRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingURLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStreamingURLRequestPrivate
 *
 * @brief  Private implementation for CreateStreamingURLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamingURLRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public CreateStreamingURLRequest instance.
 */
CreateStreamingURLRequestPrivate::CreateStreamingURLRequestPrivate(
    const AppStreamRequest::Action action, CreateStreamingURLRequest * const q)
    : CreateStreamingURLPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamingURLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingURLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStreamingURLRequest instance.
 */
CreateStreamingURLRequestPrivate::CreateStreamingURLRequestPrivate(
    const CreateStreamingURLRequestPrivate &other, CreateStreamingURLRequest * const q)
    : CreateStreamingURLPrivate(other, q)
{

}
