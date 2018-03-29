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

#include "comparefacesrequest.h"
#include "comparefacesrequest_p.h"
#include "comparefacesresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/**
 * @class  CompareFacesRequest
 *
 * @brief  Implements Rekognition CompareFaces requests.
 *
 * @see    RekognitionClient::compareFaces
 */

/**
 * @brief  Constructs a new CompareFacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CompareFacesRequest::CompareFacesRequest(const CompareFacesRequest &other)
    : RekognitionRequest(new CompareFacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CompareFacesRequest object.
 */
CompareFacesRequest::CompareFacesRequest()
    : RekognitionRequest(new CompareFacesRequestPrivate(RekognitionRequest::CompareFacesAction, this))
{

}

bool CompareFacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CompareFacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CompareFacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * CompareFacesRequest::response(QNetworkReply * const reply) const
{
    return new CompareFacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CompareFacesRequestPrivate
 *
 * @brief  Private implementation for CompareFacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompareFacesRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public CompareFacesRequest instance.
 */
CompareFacesRequestPrivate::CompareFacesRequestPrivate(
    const RekognitionRequest::Action action, CompareFacesRequest * const q)
    : CompareFacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CompareFacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CompareFacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CompareFacesRequest instance.
 */
CompareFacesRequestPrivate::CompareFacesRequestPrivate(
    const CompareFacesRequestPrivate &other, CompareFacesRequest * const q)
    : CompareFacesPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
