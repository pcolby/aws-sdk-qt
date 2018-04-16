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

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::PutLexiconRequest
 *
 * \brief The PutLexiconRequest class encapsulates Polly PutLexicon requests.
 *
 * \ingroup Polly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::putLexicon
 */

/*!
 * @brief  Constructs a new PutLexiconRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutLexiconRequest::PutLexiconRequest(const PutLexiconRequest &other)
    : PollyRequest(new PutLexiconRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutLexiconRequest object.
 */
PutLexiconRequest::PutLexiconRequest()
    : PollyRequest(new PutLexiconRequestPrivate(PollyRequest::PutLexiconAction, this))
{

}

/*!
 * \reimp
 */
bool PutLexiconRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutLexiconResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutLexiconResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PollyClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLexiconRequest::response(QNetworkReply * const reply) const
{
    return new PutLexiconResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutLexiconRequestPrivate
 *
 * @brief  Private implementation for PutLexiconRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutLexiconRequestPrivate object.
 *
 * @param  action  Polly action being performed.
 * @param  q       Pointer to this object's public PutLexiconRequest instance.
 */
PutLexiconRequestPrivate::PutLexiconRequestPrivate(
    const PollyRequest::Action action, PutLexiconRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
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
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
