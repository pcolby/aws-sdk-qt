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

#include "listlexiconsrequest.h"
#include "listlexiconsrequest_p.h"
#include "listlexiconsresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::ListLexiconsRequest
 *
 * \brief The ListLexiconsRequest class encapsulates Polly ListLexicons requests.
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
 * \sa PollyClient::listLexicons
 */

/*!
 * @brief  Constructs a new ListLexiconsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListLexiconsRequest::ListLexiconsRequest(const ListLexiconsRequest &other)
    : PollyRequest(new ListLexiconsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListLexiconsRequest object.
 */
ListLexiconsRequest::ListLexiconsRequest()
    : PollyRequest(new ListLexiconsRequestPrivate(PollyRequest::ListLexiconsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLexiconsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListLexiconsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListLexiconsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PollyClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLexiconsRequest::response(QNetworkReply * const reply) const
{
    return new ListLexiconsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListLexiconsRequestPrivate
 *
 * @brief  Private implementation for ListLexiconsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListLexiconsRequestPrivate object.
 *
 * @param  action  Polly action being performed.
 * @param  q       Pointer to this object's public ListLexiconsRequest instance.
 */
ListLexiconsRequestPrivate::ListLexiconsRequestPrivate(
    const PollyRequest::Action action, ListLexiconsRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListLexiconsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListLexiconsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListLexiconsRequest instance.
 */
ListLexiconsRequestPrivate::ListLexiconsRequestPrivate(
    const ListLexiconsRequestPrivate &other, ListLexiconsRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
