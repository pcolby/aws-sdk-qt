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

#include "notifywhenuploadedrequest.h"
#include "notifywhenuploadedrequest_p.h"
#include "notifywhenuploadedresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  NotifyWhenUploadedRequest
 *
 * @brief  Implements StorageGateway NotifyWhenUploaded requests.
 *
 * @see    StorageGatewayClient::notifyWhenUploaded
 */

/**
 * @brief  Constructs a new NotifyWhenUploadedRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
NotifyWhenUploadedRequest::NotifyWhenUploadedRequest(const NotifyWhenUploadedRequest &other)
    : StorageGatewayRequest(new NotifyWhenUploadedRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new NotifyWhenUploadedRequest object.
 */
NotifyWhenUploadedRequest::NotifyWhenUploadedRequest()
    : StorageGatewayRequest(new NotifyWhenUploadedRequestPrivate(StorageGatewayRequest::NotifyWhenUploadedAction, this))
{

}

bool NotifyWhenUploadedRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an NotifyWhenUploadedResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An NotifyWhenUploadedResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyWhenUploadedRequest::response(QNetworkReply * const reply) const
{
    return new NotifyWhenUploadedResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  NotifyWhenUploadedRequestPrivate
 *
 * @brief  Private implementation for NotifyWhenUploadedRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new NotifyWhenUploadedRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public NotifyWhenUploadedRequest instance.
 */
NotifyWhenUploadedRequestPrivate::NotifyWhenUploadedRequestPrivate(
    const StorageGatewayRequest::Action action, NotifyWhenUploadedRequest * const q)
    : StorageGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new NotifyWhenUploadedRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the NotifyWhenUploadedRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public NotifyWhenUploadedRequest instance.
 */
NotifyWhenUploadedRequestPrivate::NotifyWhenUploadedRequestPrivate(
    const NotifyWhenUploadedRequestPrivate &other, NotifyWhenUploadedRequest * const q)
    : StorageGatewayRequestPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
