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

#include "deletereusabledelegationsetrequest.h"
#include "deletereusabledelegationsetrequest_p.h"
#include "deletereusabledelegationsetresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteReusableDelegationSetRequest
 *
 * \brief The DeleteReusableDelegationSetRequest class provides an interface for Route53 DeleteReusableDelegationSet requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::deleteReusableDelegationSet
 */

/*!
 * @brief  Constructs a new DeleteReusableDelegationSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReusableDelegationSetRequest::DeleteReusableDelegationSetRequest(const DeleteReusableDelegationSetRequest &other)
    : Route53Request(new DeleteReusableDelegationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteReusableDelegationSetRequest object.
 */
DeleteReusableDelegationSetRequest::DeleteReusableDelegationSetRequest()
    : Route53Request(new DeleteReusableDelegationSetRequestPrivate(Route53Request::DeleteReusableDelegationSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReusableDelegationSetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteReusableDelegationSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReusableDelegationSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReusableDelegationSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReusableDelegationSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteReusableDelegationSetRequestPrivate
 *
 * @brief  Private implementation for DeleteReusableDelegationSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReusableDelegationSetRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public DeleteReusableDelegationSetRequest instance.
 */
DeleteReusableDelegationSetRequestPrivate::DeleteReusableDelegationSetRequestPrivate(
    const Route53Request::Action action, DeleteReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReusableDelegationSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReusableDelegationSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReusableDelegationSetRequest instance.
 */
DeleteReusableDelegationSetRequestPrivate::DeleteReusableDelegationSetRequestPrivate(
    const DeleteReusableDelegationSetRequestPrivate &other, DeleteReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
