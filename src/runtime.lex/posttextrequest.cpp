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

#include "posttextrequest.h"
#include "posttextrequest_p.h"
#include "posttextresponse.h"
#include "lexruntimeservicerequest_p.h"

namespace QtAws {
namespace LexRuntimeService {

/*!
 * \class QtAws::LexRuntimeService::PostTextRequest
 *
 * \brief The PostTextRequest class encapsulates LexRuntimeService PostText requests.
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
 * \sa LexRuntimeServiceClient::postText
 */

/*!
 * @brief  Constructs a new PostTextRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PostTextRequest::PostTextRequest(const PostTextRequest &other)
    : LexRuntimeServiceRequest(new PostTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PostTextRequest object.
 */
PostTextRequest::PostTextRequest()
    : LexRuntimeServiceRequest(new PostTextRequestPrivate(LexRuntimeServiceRequest::PostTextAction, this))
{

}

/*!
 * \reimp
 */
bool PostTextRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PostTextResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PostTextResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexRuntimeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * PostTextRequest::response(QNetworkReply * const reply) const
{
    return new PostTextResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PostTextRequestPrivate
 *
 * @brief  Private implementation for PostTextRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PostTextRequestPrivate object.
 *
 * @param  action  LexRuntimeService action being performed.
 * @param  q       Pointer to this object's public PostTextRequest instance.
 */
PostTextRequestPrivate::PostTextRequestPrivate(
    const LexRuntimeServiceRequest::Action action, PostTextRequest * const q)
    : LexRuntimeServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PostTextRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PostTextRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PostTextRequest instance.
 */
PostTextRequestPrivate::PostTextRequestPrivate(
    const PostTextRequestPrivate &other, PostTextRequest * const q)
    : LexRuntimeServiceRequestPrivate(other, q)
{

}

} // namespace LexRuntimeService
} // namespace QtAws
