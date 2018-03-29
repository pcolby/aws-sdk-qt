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

#include "synthesizespeechrequest.h"
#include "synthesizespeechrequest_p.h"
#include "synthesizespeechresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/**
 * @class  SynthesizeSpeechRequest
 *
 * @brief  Implements Polly SynthesizeSpeech requests.
 *
 * @see    PollyClient::synthesizeSpeech
 */

/**
 * @brief  Constructs a new SynthesizeSpeechRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SynthesizeSpeechRequest::SynthesizeSpeechRequest(const SynthesizeSpeechRequest &other)
    : PollyRequest(new SynthesizeSpeechRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SynthesizeSpeechRequest object.
 */
SynthesizeSpeechRequest::SynthesizeSpeechRequest()
    : PollyRequest(new SynthesizeSpeechRequestPrivate(PollyRequest::SynthesizeSpeechAction, this))
{

}

bool SynthesizeSpeechRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SynthesizeSpeechResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SynthesizeSpeechResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PollyClient::send
 */
QtAws::Core::AwsAbstractResponse * SynthesizeSpeechRequest::response(QNetworkReply * const reply) const
{
    return new SynthesizeSpeechResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SynthesizeSpeechRequestPrivate
 *
 * @brief  Private implementation for SynthesizeSpeechRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SynthesizeSpeechRequestPrivate object.
 *
 * @param  action  Polly action being performed.
 * @param  q       Pointer to this object's public SynthesizeSpeechRequest instance.
 */
SynthesizeSpeechRequestPrivate::SynthesizeSpeechRequestPrivate(
    const PollyRequest::Action action, SynthesizeSpeechRequest * const q)
    : SynthesizeSpeechPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SynthesizeSpeechRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SynthesizeSpeechRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SynthesizeSpeechRequest instance.
 */
SynthesizeSpeechRequestPrivate::SynthesizeSpeechRequestPrivate(
    const SynthesizeSpeechRequestPrivate &other, SynthesizeSpeechRequest * const q)
    : SynthesizeSpeechPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
