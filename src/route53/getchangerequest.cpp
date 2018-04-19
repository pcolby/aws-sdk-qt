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

#include "getchangerequest.h"
#include "getchangerequest_p.h"
#include "getchangeresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetChangeRequest
 * \brief The GetChangeRequest class provides an interface for Route53 GetChange requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getChange
 */

/*!
 * Constructs a copy of \a other.
 */
GetChangeRequest::GetChangeRequest(const GetChangeRequest &other)
    : Route53Request(new GetChangeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChangeRequest object.
 */
GetChangeRequest::GetChangeRequest()
    : Route53Request(new GetChangeRequestPrivate(Route53Request::GetChangeAction, this))
{

}

/*!
 * \reimp
 */
bool GetChangeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChangeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChangeRequest::response(QNetworkReply * const reply) const
{
    return new GetChangeResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetChangeRequestPrivate
 * \brief The GetChangeRequestPrivate class provides private implementation for GetChangeRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetChangeRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetChangeRequestPrivate::GetChangeRequestPrivate(
    const Route53Request::Action action, GetChangeRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChangeRequest
 * class' copy constructor.
 */
GetChangeRequestPrivate::GetChangeRequestPrivate(
    const GetChangeRequestPrivate &other, GetChangeRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
