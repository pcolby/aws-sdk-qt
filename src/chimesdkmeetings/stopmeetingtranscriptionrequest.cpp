// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopmeetingtranscriptionrequest.h"
#include "stopmeetingtranscriptionrequest_p.h"
#include "stopmeetingtranscriptionresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::StopMeetingTranscriptionRequest
 * \brief The StopMeetingTranscriptionRequest class provides an interface for ChimeSdkMeetings StopMeetingTranscription requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::stopMeetingTranscription
 */

/*!
 * Constructs a copy of \a other.
 */
StopMeetingTranscriptionRequest::StopMeetingTranscriptionRequest(const StopMeetingTranscriptionRequest &other)
    : ChimeSdkMeetingsRequest(new StopMeetingTranscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopMeetingTranscriptionRequest object.
 */
StopMeetingTranscriptionRequest::StopMeetingTranscriptionRequest()
    : ChimeSdkMeetingsRequest(new StopMeetingTranscriptionRequestPrivate(ChimeSdkMeetingsRequest::StopMeetingTranscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool StopMeetingTranscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopMeetingTranscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopMeetingTranscriptionRequest::response(QNetworkReply * const reply) const
{
    return new StopMeetingTranscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::StopMeetingTranscriptionRequestPrivate
 * \brief The StopMeetingTranscriptionRequestPrivate class provides private implementation for StopMeetingTranscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a StopMeetingTranscriptionRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
StopMeetingTranscriptionRequestPrivate::StopMeetingTranscriptionRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, StopMeetingTranscriptionRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopMeetingTranscriptionRequest
 * class' copy constructor.
 */
StopMeetingTranscriptionRequestPrivate::StopMeetingTranscriptionRequestPrivate(
    const StopMeetingTranscriptionRequestPrivate &other, StopMeetingTranscriptionRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
