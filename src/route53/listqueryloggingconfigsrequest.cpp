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

#include "listqueryloggingconfigsrequest.h"
#include "listqueryloggingconfigsrequest_p.h"
#include "listqueryloggingconfigsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListQueryLoggingConfigsRequest
 * \brief The ListQueryLoggingConfigsRequest class provides an interface for Route53 ListQueryLoggingConfigs requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listQueryLoggingConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListQueryLoggingConfigsRequest::ListQueryLoggingConfigsRequest(const ListQueryLoggingConfigsRequest &other)
    : Route53Request(new ListQueryLoggingConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListQueryLoggingConfigsRequest object.
 */
ListQueryLoggingConfigsRequest::ListQueryLoggingConfigsRequest()
    : Route53Request(new ListQueryLoggingConfigsRequestPrivate(Route53Request::ListQueryLoggingConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListQueryLoggingConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListQueryLoggingConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQueryLoggingConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListQueryLoggingConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListQueryLoggingConfigsRequestPrivate
 * \brief The ListQueryLoggingConfigsRequestPrivate class provides private implementation for ListQueryLoggingConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListQueryLoggingConfigsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListQueryLoggingConfigsRequestPrivate::ListQueryLoggingConfigsRequestPrivate(
    const Route53Request::Action action, ListQueryLoggingConfigsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListQueryLoggingConfigsRequest
 * class' copy constructor.
 */
ListQueryLoggingConfigsRequestPrivate::ListQueryLoggingConfigsRequestPrivate(
    const ListQueryLoggingConfigsRequestPrivate &other, ListQueryLoggingConfigsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
