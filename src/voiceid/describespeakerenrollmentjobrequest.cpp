// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describespeakerenrollmentjobrequest.h"
#include "describespeakerenrollmentjobrequest_p.h"
#include "describespeakerenrollmentjobresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeSpeakerEnrollmentJobRequest
 * \brief The DescribeSpeakerEnrollmentJobRequest class provides an interface for VoiceId DescribeSpeakerEnrollmentJob requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeSpeakerEnrollmentJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSpeakerEnrollmentJobRequest::DescribeSpeakerEnrollmentJobRequest(const DescribeSpeakerEnrollmentJobRequest &other)
    : VoiceIdRequest(new DescribeSpeakerEnrollmentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSpeakerEnrollmentJobRequest object.
 */
DescribeSpeakerEnrollmentJobRequest::DescribeSpeakerEnrollmentJobRequest()
    : VoiceIdRequest(new DescribeSpeakerEnrollmentJobRequestPrivate(VoiceIdRequest::DescribeSpeakerEnrollmentJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSpeakerEnrollmentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSpeakerEnrollmentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSpeakerEnrollmentJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpeakerEnrollmentJobResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::DescribeSpeakerEnrollmentJobRequestPrivate
 * \brief The DescribeSpeakerEnrollmentJobRequestPrivate class provides private implementation for DescribeSpeakerEnrollmentJobRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeSpeakerEnrollmentJobRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
DescribeSpeakerEnrollmentJobRequestPrivate::DescribeSpeakerEnrollmentJobRequestPrivate(
    const VoiceIdRequest::Action action, DescribeSpeakerEnrollmentJobRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpeakerEnrollmentJobRequest
 * class' copy constructor.
 */
DescribeSpeakerEnrollmentJobRequestPrivate::DescribeSpeakerEnrollmentJobRequestPrivate(
    const DescribeSpeakerEnrollmentJobRequestPrivate &other, DescribeSpeakerEnrollmentJobRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
