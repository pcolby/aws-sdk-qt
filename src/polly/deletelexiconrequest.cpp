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

#include "deletelexiconrequest.h"
#include "deletelexiconrequest_p.h"
#include "deletelexiconresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::DeleteLexiconRequest
 *
 * \brief The DeleteLexiconRequest class encapsulates Polly DeleteLexicon requests.
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
 * \sa PollyClient::deleteLexicon
 */

/*!
 * @brief  Constructs a new DeleteLexiconRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLexiconRequest::DeleteLexiconRequest(const DeleteLexiconRequest &other)
    : PollyRequest(new DeleteLexiconRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteLexiconRequest object.
 */
DeleteLexiconRequest::DeleteLexiconRequest()
    : PollyRequest(new DeleteLexiconRequestPrivate(PollyRequest::DeleteLexiconAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLexiconRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteLexiconResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLexiconResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PollyClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLexiconRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLexiconResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteLexiconRequestPrivate
 *
 * @brief  Private implementation for DeleteLexiconRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteLexiconRequestPrivate object.
 *
 * @param  action  Polly action being performed.
 * @param  q       Pointer to this object's public DeleteLexiconRequest instance.
 */
DeleteLexiconRequestPrivate::DeleteLexiconRequestPrivate(
    const PollyRequest::Action action, DeleteLexiconRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteLexiconRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLexiconRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLexiconRequest instance.
 */
DeleteLexiconRequestPrivate::DeleteLexiconRequestPrivate(
    const DeleteLexiconRequestPrivate &other, DeleteLexiconRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
