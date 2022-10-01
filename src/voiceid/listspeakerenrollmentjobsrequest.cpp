// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listspeakerenrollmentjobsrequest.h"
#include "listspeakerenrollmentjobsrequest_p.h"
#include "listspeakerenrollmentjobsresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::ListSpeakerEnrollmentJobsRequest
 * \brief The ListSpeakerEnrollmentJobsRequest class provides an interface for VoiceId ListSpeakerEnrollmentJobs requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::listSpeakerEnrollmentJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListSpeakerEnrollmentJobsRequest::ListSpeakerEnrollmentJobsRequest(const ListSpeakerEnrollmentJobsRequest &other)
    : VoiceIdRequest(new ListSpeakerEnrollmentJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSpeakerEnrollmentJobsRequest object.
 */
ListSpeakerEnrollmentJobsRequest::ListSpeakerEnrollmentJobsRequest()
    : VoiceIdRequest(new ListSpeakerEnrollmentJobsRequestPrivate(VoiceIdRequest::ListSpeakerEnrollmentJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSpeakerEnrollmentJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSpeakerEnrollmentJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSpeakerEnrollmentJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListSpeakerEnrollmentJobsResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::ListSpeakerEnrollmentJobsRequestPrivate
 * \brief The ListSpeakerEnrollmentJobsRequestPrivate class provides private implementation for ListSpeakerEnrollmentJobsRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a ListSpeakerEnrollmentJobsRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
ListSpeakerEnrollmentJobsRequestPrivate::ListSpeakerEnrollmentJobsRequestPrivate(
    const VoiceIdRequest::Action action, ListSpeakerEnrollmentJobsRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSpeakerEnrollmentJobsRequest
 * class' copy constructor.
 */
ListSpeakerEnrollmentJobsRequestPrivate::ListSpeakerEnrollmentJobsRequestPrivate(
    const ListSpeakerEnrollmentJobsRequestPrivate &other, ListSpeakerEnrollmentJobsRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
