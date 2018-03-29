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

#include "deletestreamprocessorrequest.h"
#include "deletestreamprocessorrequest_p.h"
#include "deletestreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/**
 * @class  DeleteStreamProcessorRequest
 *
 * @brief  Implements Rekognition DeleteStreamProcessor requests.
 *
 * @see    RekognitionClient::deleteStreamProcessor
 */

/**
 * @brief  Constructs a new DeleteStreamProcessorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteStreamProcessorRequest::DeleteStreamProcessorRequest(const DeleteStreamProcessorRequest &other)
    : RekognitionRequest(new DeleteStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteStreamProcessorRequest object.
 */
DeleteStreamProcessorRequest::DeleteStreamProcessorRequest()
    : RekognitionRequest(new DeleteStreamProcessorRequestPrivate(RekognitionRequest::DeleteStreamProcessorAction, this))
{

}

bool DeleteStreamProcessorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteStreamProcessorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteStreamProcessorResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * DeleteStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamProcessorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteStreamProcessorRequestPrivate
 *
 * @brief  Private implementation for DeleteStreamProcessorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStreamProcessorRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public DeleteStreamProcessorRequest instance.
 */
DeleteStreamProcessorRequestPrivate::DeleteStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, DeleteStreamProcessorRequest * const q)
    : DeleteStreamProcessorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStreamProcessorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamProcessorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteStreamProcessorRequest instance.
 */
DeleteStreamProcessorRequestPrivate::DeleteStreamProcessorRequestPrivate(
    const DeleteStreamProcessorRequestPrivate &other, DeleteStreamProcessorRequest * const q)
    : DeleteStreamProcessorPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
