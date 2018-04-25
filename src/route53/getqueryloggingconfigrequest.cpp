/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getqueryloggingconfigrequest.h"
#include "getqueryloggingconfigrequest_p.h"
#include "getqueryloggingconfigresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetQueryLoggingConfigRequest
 * \brief The GetQueryLoggingConfigRequest class provides an interface for Route53 GetQueryLoggingConfig requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getQueryLoggingConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetQueryLoggingConfigRequest::GetQueryLoggingConfigRequest(const GetQueryLoggingConfigRequest &other)
    : Route53Request(new GetQueryLoggingConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQueryLoggingConfigRequest object.
 */
GetQueryLoggingConfigRequest::GetQueryLoggingConfigRequest()
    : Route53Request(new GetQueryLoggingConfigRequestPrivate(Route53Request::GetQueryLoggingConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetQueryLoggingConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQueryLoggingConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQueryLoggingConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetQueryLoggingConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetQueryLoggingConfigRequestPrivate
 * \brief The GetQueryLoggingConfigRequestPrivate class provides private implementation for GetQueryLoggingConfigRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetQueryLoggingConfigRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetQueryLoggingConfigRequestPrivate::GetQueryLoggingConfigRequestPrivate(
    const Route53Request::Action action, GetQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQueryLoggingConfigRequest
 * class' copy constructor.
 */
GetQueryLoggingConfigRequestPrivate::GetQueryLoggingConfigRequestPrivate(
    const GetQueryLoggingConfigRequestPrivate &other, GetQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
