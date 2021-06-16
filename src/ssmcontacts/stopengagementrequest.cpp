/*
    Copyright 2013-2021 Paul Colby

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

#include "stopengagementrequest.h"
#include "stopengagementrequest_p.h"
#include "stopengagementresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::StopEngagementRequest
 * \brief The StopEngagementRequest class provides an interface for SSMContacts StopEngagement requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::stopEngagement
 */

/*!
 * Constructs a copy of \a other.
 */
StopEngagementRequest::StopEngagementRequest(const StopEngagementRequest &other)
    : SSMContactsRequest(new StopEngagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopEngagementRequest object.
 */
StopEngagementRequest::StopEngagementRequest()
    : SSMContactsRequest(new StopEngagementRequestPrivate(SSMContactsRequest::StopEngagementAction, this))
{

}

/*!
 * \reimp
 */
bool StopEngagementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopEngagementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopEngagementRequest::response(QNetworkReply * const reply) const
{
    return new StopEngagementResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::StopEngagementRequestPrivate
 * \brief The StopEngagementRequestPrivate class provides private implementation for StopEngagementRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a StopEngagementRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
StopEngagementRequestPrivate::StopEngagementRequestPrivate(
    const SSMContactsRequest::Action action, StopEngagementRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopEngagementRequest
 * class' copy constructor.
 */
StopEngagementRequestPrivate::StopEngagementRequestPrivate(
    const StopEngagementRequestPrivate &other, StopEngagementRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
