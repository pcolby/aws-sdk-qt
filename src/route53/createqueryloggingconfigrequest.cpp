/*
    Copyright 2013-2019 Paul Colby

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

#include "createqueryloggingconfigrequest.h"
#include "createqueryloggingconfigrequest_p.h"
#include "createqueryloggingconfigresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateQueryLoggingConfigRequest
 * \brief The CreateQueryLoggingConfigRequest class provides an interface for Route53 CreateQueryLoggingConfig requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::createQueryLoggingConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateQueryLoggingConfigRequest::CreateQueryLoggingConfigRequest(const CreateQueryLoggingConfigRequest &other)
    : Route53Request(new CreateQueryLoggingConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateQueryLoggingConfigRequest object.
 */
CreateQueryLoggingConfigRequest::CreateQueryLoggingConfigRequest()
    : Route53Request(new CreateQueryLoggingConfigRequestPrivate(Route53Request::CreateQueryLoggingConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateQueryLoggingConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateQueryLoggingConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateQueryLoggingConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateQueryLoggingConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateQueryLoggingConfigRequestPrivate
 * \brief The CreateQueryLoggingConfigRequestPrivate class provides private implementation for CreateQueryLoggingConfigRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateQueryLoggingConfigRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateQueryLoggingConfigRequestPrivate::CreateQueryLoggingConfigRequestPrivate(
    const Route53Request::Action action, CreateQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateQueryLoggingConfigRequest
 * class' copy constructor.
 */
CreateQueryLoggingConfigRequestPrivate::CreateQueryLoggingConfigRequestPrivate(
    const CreateQueryLoggingConfigRequestPrivate &other, CreateQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
