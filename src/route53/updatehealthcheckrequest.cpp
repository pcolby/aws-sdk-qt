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

#include "updatehealthcheckrequest.h"
#include "updatehealthcheckrequest_p.h"
#include "updatehealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateHealthCheckRequest
 *
 * \brief The UpdateHealthCheckRequest class provides an interface for Route53 UpdateHealthCheck requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::updateHealthCheck
 */

/*!
 * @brief  Constructs a new UpdateHealthCheckRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateHealthCheckRequest::UpdateHealthCheckRequest(const UpdateHealthCheckRequest &other)
    : Route53Request(new UpdateHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateHealthCheckRequest object.
 */
UpdateHealthCheckRequest::UpdateHealthCheckRequest()
    : Route53Request(new UpdateHealthCheckRequestPrivate(Route53Request::UpdateHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateHealthCheckResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateHealthCheckResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * UpdateHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHealthCheckResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateHealthCheckRequestPrivate
 *
 * @brief  Private implementation for UpdateHealthCheckRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateHealthCheckRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public UpdateHealthCheckRequest instance.
 */
UpdateHealthCheckRequestPrivate::UpdateHealthCheckRequestPrivate(
    const Route53Request::Action action, UpdateHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateHealthCheckRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateHealthCheckRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateHealthCheckRequest instance.
 */
UpdateHealthCheckRequestPrivate::UpdateHealthCheckRequestPrivate(
    const UpdateHealthCheckRequestPrivate &other, UpdateHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
