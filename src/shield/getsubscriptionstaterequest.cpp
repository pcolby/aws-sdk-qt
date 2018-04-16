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

#include "getsubscriptionstaterequest.h"
#include "getsubscriptionstaterequest_p.h"
#include "getsubscriptionstateresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::GetSubscriptionStateRequest
 *
 * \brief The GetSubscriptionStateRequest class encapsulates Shield GetSubscriptionState requests.
 *
 * \ingroup Shield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 *
 * \sa ShieldClient::getSubscriptionState
 */

/*!
 * @brief  Constructs a new GetSubscriptionStateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSubscriptionStateRequest::GetSubscriptionStateRequest(const GetSubscriptionStateRequest &other)
    : ShieldRequest(new GetSubscriptionStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetSubscriptionStateRequest object.
 */
GetSubscriptionStateRequest::GetSubscriptionStateRequest()
    : ShieldRequest(new GetSubscriptionStateRequestPrivate(ShieldRequest::GetSubscriptionStateAction, this))
{

}

/*!
 * \reimp
 */
bool GetSubscriptionStateRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetSubscriptionStateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSubscriptionStateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ShieldClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSubscriptionStateRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionStateResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetSubscriptionStateRequestPrivate
 *
 * @brief  Private implementation for GetSubscriptionStateRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionStateRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public GetSubscriptionStateRequest instance.
 */
GetSubscriptionStateRequestPrivate::GetSubscriptionStateRequestPrivate(
    const ShieldRequest::Action action, GetSubscriptionStateRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionStateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionStateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSubscriptionStateRequest instance.
 */
GetSubscriptionStateRequestPrivate::GetSubscriptionStateRequestPrivate(
    const GetSubscriptionStateRequestPrivate &other, GetSubscriptionStateRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
