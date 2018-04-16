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

#include "postcontentrequest.h"
#include "postcontentrequest_p.h"
#include "postcontentresponse.h"
#include "lexruntimeservicerequest_p.h"

namespace QtAws {
namespace LexRuntimeService {

/*!
 * \class QtAws::LexRuntimeService::PostContentRequest
 *
 * \brief The PostContentRequest class encapsulates LexRuntimeService PostContent requests.
 *
 * \ingroup LexRuntimeService
 *
 *  Amazon Lex provides both build and runtime endpoints. Each endpoint provides a set of operations (API). Your
 *  conversational bot uses the runtime API to understand user utterances (user input text or voice). For example, suppose a
 *  user says "I want pizza", your bot sends this input to Amazon Lex using the runtime API. Amazon Lex recognizes that the
 *  user request is for the OrderPizza intent (one of the intents defined in the bot). Then Amazon Lex engages in user
 *  conversation on behalf of the bot to elicit required information (slot values, such as pizza size and crust type), and
 *  then performs fulfillment activity (that you configured when you created the bot). You use the build-time API to create
 *  and manage your Amazon Lex bot. For a list of build-time operations, see the build-time API, .
 *
 * \sa LexRuntimeServiceClient::postContent
 */

/*!
 * @brief  Constructs a new PostContentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PostContentRequest::PostContentRequest(const PostContentRequest &other)
    : LexRuntimeServiceRequest(new PostContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PostContentRequest object.
 */
PostContentRequest::PostContentRequest()
    : LexRuntimeServiceRequest(new PostContentRequestPrivate(LexRuntimeServiceRequest::PostContentAction, this))
{

}

/*!
 * \reimp
 */
bool PostContentRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PostContentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PostContentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexRuntimeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * PostContentRequest::response(QNetworkReply * const reply) const
{
    return new PostContentResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PostContentRequestPrivate
 *
 * @brief  Private implementation for PostContentRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PostContentRequestPrivate object.
 *
 * @param  action  LexRuntimeService action being performed.
 * @param  q       Pointer to this object's public PostContentRequest instance.
 */
PostContentRequestPrivate::PostContentRequestPrivate(
    const LexRuntimeServiceRequest::Action action, PostContentRequest * const q)
    : LexRuntimeServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PostContentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PostContentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PostContentRequest instance.
 */
PostContentRequestPrivate::PostContentRequestPrivate(
    const PostContentRequestPrivate &other, PostContentRequest * const q)
    : LexRuntimeServiceRequestPrivate(other, q)
{

}

} // namespace LexRuntimeService
} // namespace QtAws
