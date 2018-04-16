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

#include "translatetextrequest.h"
#include "translatetextrequest_p.h"
#include "translatetextresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::TranslateTextRequest
 *
 * \brief The TranslateTextRequest class provides an interface for Translate TranslateText requests.
 *
 * \ingroup Translate
 *
 *  Provides translation between English and one of six languages, or between one of the six languages and
 *
 * \sa TranslateClient::translateText
 */

/*!
 * @brief  Constructs a new TranslateTextRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TranslateTextRequest::TranslateTextRequest(const TranslateTextRequest &other)
    : TranslateRequest(new TranslateTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new TranslateTextRequest object.
 */
TranslateTextRequest::TranslateTextRequest()
    : TranslateRequest(new TranslateTextRequestPrivate(TranslateRequest::TranslateTextAction, this))
{

}

/*!
 * \reimp
 */
bool TranslateTextRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an TranslateTextResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TranslateTextResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  TranslateClient::send
 */
QtAws::Core::AwsAbstractResponse * TranslateTextRequest::response(QNetworkReply * const reply) const
{
    return new TranslateTextResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  TranslateTextRequestPrivate
 *
 * @brief  Private implementation for TranslateTextRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TranslateTextRequestPrivate object.
 *
 * @param  action  Translate action being performed.
 * @param  q       Pointer to this object's public TranslateTextRequest instance.
 */
TranslateTextRequestPrivate::TranslateTextRequestPrivate(
    const TranslateRequest::Action action, TranslateTextRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new TranslateTextRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TranslateTextRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TranslateTextRequest instance.
 */
TranslateTextRequestPrivate::TranslateTextRequestPrivate(
    const TranslateTextRequestPrivate &other, TranslateTextRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
