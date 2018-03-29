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

#include "putlexiconrequest.h"
#include "putlexiconrequest_p.h"
#include "putlexiconresponse.h"
#include "pollyrequest_p.h"

namespace AWS {
namespace Polly {

/**
 * @class  PutLexiconRequest
 *
 * @brief  Implements Polly PutLexicon requests.
 *
 * @see    PollyClient::putLexicon
 */

/**
 * @brief  Constructs a new PutLexiconRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutLexiconRequest::PutLexiconRequest(const PutLexiconRequest &other)
    : PollyRequest(new PutLexiconRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutLexiconRequest object.
 */
PutLexiconRequest::PutLexiconRequest()
    : PollyRequest(new PutLexiconRequestPrivate(PollyRequest::PutLexiconAction, this))
{

}

bool PutLexiconRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutLexiconResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutLexiconResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PollyClient::send
 */
AwsAbstractResponse * PutLexiconRequest::response(QNetworkReply * const reply) const
{
    return new PutLexiconResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutLexiconRequestPrivate
 *
 * @brief  Private implementation for PutLexiconRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutLexiconRequestPrivate object.
 *
 * @param  action  Polly action being performed.
 * @param  q       Pointer to this object's public PutLexiconRequest instance.
 */
PutLexiconRequestPrivate::PutLexiconRequestPrivate(
    const PollyRequest::Action action, PutLexiconRequest * const q)
    : PutLexiconPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutLexiconRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutLexiconRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutLexiconRequest instance.
 */
PutLexiconRequestPrivate::PutLexiconRequestPrivate(
    const PutLexiconRequestPrivate &other, PutLexiconRequest * const q)
    : PutLexiconPrivate(other, q)
{

}

} // namespace Polly
} // namespace AWS
