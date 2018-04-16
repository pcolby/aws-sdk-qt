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

#include "unsubscribefromeventrequest.h"
#include "unsubscribefromeventrequest_p.h"
#include "unsubscribefromeventresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::UnsubscribeFromEventRequest
 *
 * \brief The UnsubscribeFromEventRequest class encapsulates Inspector UnsubscribeFromEvent requests.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::unsubscribeFromEvent
 */

/*!
 * @brief  Constructs a new UnsubscribeFromEventRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnsubscribeFromEventRequest::UnsubscribeFromEventRequest(const UnsubscribeFromEventRequest &other)
    : InspectorRequest(new UnsubscribeFromEventRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UnsubscribeFromEventRequest object.
 */
UnsubscribeFromEventRequest::UnsubscribeFromEventRequest()
    : InspectorRequest(new UnsubscribeFromEventRequestPrivate(InspectorRequest::UnsubscribeFromEventAction, this))
{

}

/*!
 * \reimp
 */
bool UnsubscribeFromEventRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UnsubscribeFromEventResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnsubscribeFromEventResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * UnsubscribeFromEventRequest::response(QNetworkReply * const reply) const
{
    return new UnsubscribeFromEventResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UnsubscribeFromEventRequestPrivate
 *
 * @brief  Private implementation for UnsubscribeFromEventRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UnsubscribeFromEventRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public UnsubscribeFromEventRequest instance.
 */
UnsubscribeFromEventRequestPrivate::UnsubscribeFromEventRequestPrivate(
    const InspectorRequest::Action action, UnsubscribeFromEventRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UnsubscribeFromEventRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnsubscribeFromEventRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnsubscribeFromEventRequest instance.
 */
UnsubscribeFromEventRequestPrivate::UnsubscribeFromEventRequestPrivate(
    const UnsubscribeFromEventRequestPrivate &other, UnsubscribeFromEventRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
