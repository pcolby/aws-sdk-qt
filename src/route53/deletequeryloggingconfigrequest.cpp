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

#include "deletequeryloggingconfigrequest.h"
#include "deletequeryloggingconfigrequest_p.h"
#include "deletequeryloggingconfigresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteQueryLoggingConfigRequest
 * \brief The DeleteQueryLoggingConfigRequest class provides an interface for Route53 DeleteQueryLoggingConfig requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::deleteQueryLoggingConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteQueryLoggingConfigRequest::DeleteQueryLoggingConfigRequest(const DeleteQueryLoggingConfigRequest &other)
    : Route53Request(new DeleteQueryLoggingConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteQueryLoggingConfigRequest object.
 */
DeleteQueryLoggingConfigRequest::DeleteQueryLoggingConfigRequest()
    : Route53Request(new DeleteQueryLoggingConfigRequestPrivate(Route53Request::DeleteQueryLoggingConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQueryLoggingConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteQueryLoggingConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQueryLoggingConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQueryLoggingConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteQueryLoggingConfigRequestPrivate
 * \brief The DeleteQueryLoggingConfigRequestPrivate class provides private implementation for DeleteQueryLoggingConfigRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteQueryLoggingConfigRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteQueryLoggingConfigRequestPrivate::DeleteQueryLoggingConfigRequestPrivate(
    const Route53Request::Action action, DeleteQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteQueryLoggingConfigRequest
 * class' copy constructor.
 */
DeleteQueryLoggingConfigRequestPrivate::DeleteQueryLoggingConfigRequestPrivate(
    const DeleteQueryLoggingConfigRequestPrivate &other, DeleteQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
