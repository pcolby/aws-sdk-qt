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

#include "detectkeyphrasesrequest.h"
#include "detectkeyphrasesrequest_p.h"
#include "detectkeyphrasesresponse.h"
#include "comprehendrequest_p.h"

namespace AWS {
namespace Comprehend {

/**
 * @class  DetectKeyPhrasesRequest
 *
 * @brief  Implements Comprehend DetectKeyPhrases requests.
 *
 * @see    ComprehendClient::detectKeyPhrases
 */

/**
 * @brief  Constructs a new DetectKeyPhrasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectKeyPhrasesResponse::DetectKeyPhrasesResponse(

/**
 * @brief  Constructs a new DetectKeyPhrasesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetectKeyPhrasesRequest::DetectKeyPhrasesRequest(const DetectKeyPhrasesRequest &other)
    : ComprehendRequest(new DetectKeyPhrasesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetectKeyPhrasesRequest object.
 */
DetectKeyPhrasesRequest::DetectKeyPhrasesRequest()
    : ComprehendRequest(new DetectKeyPhrasesRequestPrivate(ComprehendRequest::DetectKeyPhrasesAction, this))
{

}

bool DetectKeyPhrasesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetectKeyPhrasesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetectKeyPhrasesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
AwsAbstractResponse * DetectKeyPhrasesRequest::response(QNetworkReply * const reply) const
{
    return new DetectKeyPhrasesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetectKeyPhrasesRequestPrivate
 *
 * @brief  Private implementation for DetectKeyPhrasesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectKeyPhrasesRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public DetectKeyPhrasesRequest instance.
 */
DetectKeyPhrasesRequestPrivate::DetectKeyPhrasesRequestPrivate(
    const ComprehendRequest::Action action, DetectKeyPhrasesRequest * const q)
    : DetectKeyPhrasesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetectKeyPhrasesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetectKeyPhrasesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetectKeyPhrasesRequest instance.
 */
DetectKeyPhrasesRequestPrivate::DetectKeyPhrasesRequestPrivate(
    const DetectKeyPhrasesRequestPrivate &other, DetectKeyPhrasesRequest * const q)
    : DetectKeyPhrasesPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace AWS
