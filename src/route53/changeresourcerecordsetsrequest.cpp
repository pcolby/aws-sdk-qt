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

#include "changeresourcerecordsetsrequest.h"
#include "changeresourcerecordsetsrequest_p.h"
#include "changeresourcerecordsetsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ChangeResourceRecordSetsRequest
 * \brief The ChangeResourceRecordSetsRequest class provides an interface for Route53 ChangeResourceRecordSets requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::changeResourceRecordSets
 */

/*!
 * Constructs a copy of \a other.
 */
ChangeResourceRecordSetsRequest::ChangeResourceRecordSetsRequest(const ChangeResourceRecordSetsRequest &other)
    : Route53Request(new ChangeResourceRecordSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ChangeResourceRecordSetsRequest object.
 */
ChangeResourceRecordSetsRequest::ChangeResourceRecordSetsRequest()
    : Route53Request(new ChangeResourceRecordSetsRequestPrivate(Route53Request::ChangeResourceRecordSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ChangeResourceRecordSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ChangeResourceRecordSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangeResourceRecordSetsRequest::response(QNetworkReply * const reply) const
{
    return new ChangeResourceRecordSetsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ChangeResourceRecordSetsRequestPrivate
 * \brief The ChangeResourceRecordSetsRequestPrivate class provides private implementation for ChangeResourceRecordSetsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 *
 * Constructs a ChangeResourceRecordSetsRequestPrivate object for Route53 \a action with,
 * public implementation \a q.
 */
ChangeResourceRecordSetsRequestPrivate::ChangeResourceRecordSetsRequestPrivate(
    const Route53Request::Action action, ChangeResourceRecordSetsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ChangeResourceRecordSetsRequest
 * class' copy constructor.
 */
ChangeResourceRecordSetsRequestPrivate::ChangeResourceRecordSetsRequestPrivate(
    const ChangeResourceRecordSetsRequestPrivate &other, ChangeResourceRecordSetsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
