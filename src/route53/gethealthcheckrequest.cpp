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

#include "gethealthcheckrequest.h"
#include "gethealthcheckrequest_p.h"
#include "gethealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckRequest
 *
 * \brief The GetHealthCheckRequest class encapsulates Route53 GetHealthCheck requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::getHealthCheck
 */

/*!
 * @brief  Constructs a new GetHealthCheckRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHealthCheckRequest::GetHealthCheckRequest(const GetHealthCheckRequest &other)
    : Route53Request(new GetHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetHealthCheckRequest object.
 */
GetHealthCheckRequest::GetHealthCheckRequest()
    : Route53Request(new GetHealthCheckRequestPrivate(Route53Request::GetHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool GetHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetHealthCheckResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHealthCheckResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * GetHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetHealthCheckRequestPrivate
 *
 * @brief  Private implementation for GetHealthCheckRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetHealthCheckRequest instance.
 */
GetHealthCheckRequestPrivate::GetHealthCheckRequestPrivate(
    const Route53Request::Action action, GetHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHealthCheckRequest instance.
 */
GetHealthCheckRequestPrivate::GetHealthCheckRequestPrivate(
    const GetHealthCheckRequestPrivate &other, GetHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
