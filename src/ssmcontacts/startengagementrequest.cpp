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

#include "startengagementrequest.h"
#include "startengagementrequest_p.h"
#include "startengagementresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::StartEngagementRequest
 * \brief The StartEngagementRequest class provides an interface for SSMContacts StartEngagement requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::startEngagement
 */

/*!
 * Constructs a copy of \a other.
 */
StartEngagementRequest::StartEngagementRequest(const StartEngagementRequest &other)
    : SSMContactsRequest(new StartEngagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartEngagementRequest object.
 */
StartEngagementRequest::StartEngagementRequest()
    : SSMContactsRequest(new StartEngagementRequestPrivate(SSMContactsRequest::StartEngagementAction, this))
{

}

/*!
 * \reimp
 */
bool StartEngagementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartEngagementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartEngagementRequest::response(QNetworkReply * const reply) const
{
    return new StartEngagementResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::StartEngagementRequestPrivate
 * \brief The StartEngagementRequestPrivate class provides private implementation for StartEngagementRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a StartEngagementRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
StartEngagementRequestPrivate::StartEngagementRequestPrivate(
    const SSMContactsRequest::Action action, StartEngagementRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartEngagementRequest
 * class' copy constructor.
 */
StartEngagementRequestPrivate::StartEngagementRequestPrivate(
    const StartEngagementRequestPrivate &other, StartEngagementRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
