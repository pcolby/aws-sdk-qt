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

#include "listfraudsterregistrationjobsrequest.h"
#include "listfraudsterregistrationjobsrequest_p.h"
#include "listfraudsterregistrationjobsresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::ListFraudsterRegistrationJobsRequest
 * \brief The ListFraudsterRegistrationJobsRequest class provides an interface for VoiceId ListFraudsterRegistrationJobs requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::listFraudsterRegistrationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListFraudsterRegistrationJobsRequest::ListFraudsterRegistrationJobsRequest(const ListFraudsterRegistrationJobsRequest &other)
    : VoiceIdRequest(new ListFraudsterRegistrationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFraudsterRegistrationJobsRequest object.
 */
ListFraudsterRegistrationJobsRequest::ListFraudsterRegistrationJobsRequest()
    : VoiceIdRequest(new ListFraudsterRegistrationJobsRequestPrivate(VoiceIdRequest::ListFraudsterRegistrationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFraudsterRegistrationJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFraudsterRegistrationJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFraudsterRegistrationJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListFraudsterRegistrationJobsResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::ListFraudsterRegistrationJobsRequestPrivate
 * \brief The ListFraudsterRegistrationJobsRequestPrivate class provides private implementation for ListFraudsterRegistrationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a ListFraudsterRegistrationJobsRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
ListFraudsterRegistrationJobsRequestPrivate::ListFraudsterRegistrationJobsRequestPrivate(
    const VoiceIdRequest::Action action, ListFraudsterRegistrationJobsRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFraudsterRegistrationJobsRequest
 * class' copy constructor.
 */
ListFraudsterRegistrationJobsRequestPrivate::ListFraudsterRegistrationJobsRequestPrivate(
    const ListFraudsterRegistrationJobsRequestPrivate &other, ListFraudsterRegistrationJobsRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
