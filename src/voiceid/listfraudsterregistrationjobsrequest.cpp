// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
