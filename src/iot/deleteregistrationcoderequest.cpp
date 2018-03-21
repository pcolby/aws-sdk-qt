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

#include "deleteregistrationcoderequest.h"
#include "deleteregistrationcoderequest_p.h"
#include "deleteregistrationcoderesponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DeleteRegistrationCodeRequest
 *
 * @brief  Implements IoT DeleteRegistrationCode requests.
 *
 * @see    IoTClient::deleteRegistrationCode
 */

/**
 * @brief  Constructs a new DeleteRegistrationCodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRegistrationCodeResponse::DeleteRegistrationCodeResponse(

/**
 * @brief  Constructs a new DeleteRegistrationCodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRegistrationCodeRequest::DeleteRegistrationCodeRequest(const DeleteRegistrationCodeRequest &other)
    : IoTRequest(new DeleteRegistrationCodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRegistrationCodeRequest object.
 */
DeleteRegistrationCodeRequest::DeleteRegistrationCodeRequest()
    : IoTRequest(new DeleteRegistrationCodeRequestPrivate(IoTRequest::DeleteRegistrationCodeAction, this))
{

}

bool DeleteRegistrationCodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRegistrationCodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRegistrationCodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DeleteRegistrationCodeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRegistrationCodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRegistrationCodeRequestPrivate
 *
 * @brief  Private implementation for DeleteRegistrationCodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRegistrationCodeRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeleteRegistrationCodeRequest instance.
 */
DeleteRegistrationCodeRequestPrivate::DeleteRegistrationCodeRequestPrivate(
    const IoTRequest::Action action, DeleteRegistrationCodeRequest * const q)
    : DeleteRegistrationCodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRegistrationCodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRegistrationCodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRegistrationCodeRequest instance.
 */
DeleteRegistrationCodeRequestPrivate::DeleteRegistrationCodeRequestPrivate(
    const DeleteRegistrationCodeRequestPrivate &other, DeleteRegistrationCodeRequest * const q)
    : DeleteRegistrationCodePrivate(other, q)
{

}
