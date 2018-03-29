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

#include "getjobdocumentrequest.h"
#include "getjobdocumentrequest_p.h"
#include "getjobdocumentresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  GetJobDocumentRequest
 *
 * @brief  Implements IoT GetJobDocument requests.
 *
 * @see    IoTClient::getJobDocument
 */

/**
 * @brief  Constructs a new GetJobDocumentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobDocumentRequest::GetJobDocumentRequest(const GetJobDocumentRequest &other)
    : IoTRequest(new GetJobDocumentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobDocumentRequest object.
 */
GetJobDocumentRequest::GetJobDocumentRequest()
    : IoTRequest(new GetJobDocumentRequestPrivate(IoTRequest::GetJobDocumentAction, this))
{

}

bool GetJobDocumentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobDocumentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobDocumentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * GetJobDocumentRequest::response(QNetworkReply * const reply) const
{
    return new GetJobDocumentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobDocumentRequestPrivate
 *
 * @brief  Private implementation for GetJobDocumentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobDocumentRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public GetJobDocumentRequest instance.
 */
GetJobDocumentRequestPrivate::GetJobDocumentRequestPrivate(
    const IoTRequest::Action action, GetJobDocumentRequest * const q)
    : GetJobDocumentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobDocumentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobDocumentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobDocumentRequest instance.
 */
GetJobDocumentRequestPrivate::GetJobDocumentRequestPrivate(
    const GetJobDocumentRequestPrivate &other, GetJobDocumentRequest * const q)
    : GetJobDocumentPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
