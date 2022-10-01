// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchupdateattendeecapabilitiesexceptrequest.h"
#include "batchupdateattendeecapabilitiesexceptrequest_p.h"
#include "batchupdateattendeecapabilitiesexceptresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::BatchUpdateAttendeeCapabilitiesExceptRequest
 * \brief The BatchUpdateAttendeeCapabilitiesExceptRequest class provides an interface for ChimeSdkMeetings BatchUpdateAttendeeCapabilitiesExcept requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::batchUpdateAttendeeCapabilitiesExcept
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpdateAttendeeCapabilitiesExceptRequest::BatchUpdateAttendeeCapabilitiesExceptRequest(const BatchUpdateAttendeeCapabilitiesExceptRequest &other)
    : ChimeSdkMeetingsRequest(new BatchUpdateAttendeeCapabilitiesExceptRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpdateAttendeeCapabilitiesExceptRequest object.
 */
BatchUpdateAttendeeCapabilitiesExceptRequest::BatchUpdateAttendeeCapabilitiesExceptRequest()
    : ChimeSdkMeetingsRequest(new BatchUpdateAttendeeCapabilitiesExceptRequestPrivate(ChimeSdkMeetingsRequest::BatchUpdateAttendeeCapabilitiesExceptAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpdateAttendeeCapabilitiesExceptRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpdateAttendeeCapabilitiesExceptResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpdateAttendeeCapabilitiesExceptRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpdateAttendeeCapabilitiesExceptResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::BatchUpdateAttendeeCapabilitiesExceptRequestPrivate
 * \brief The BatchUpdateAttendeeCapabilitiesExceptRequestPrivate class provides private implementation for BatchUpdateAttendeeCapabilitiesExceptRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a BatchUpdateAttendeeCapabilitiesExceptRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
BatchUpdateAttendeeCapabilitiesExceptRequestPrivate::BatchUpdateAttendeeCapabilitiesExceptRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, BatchUpdateAttendeeCapabilitiesExceptRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpdateAttendeeCapabilitiesExceptRequest
 * class' copy constructor.
 */
BatchUpdateAttendeeCapabilitiesExceptRequestPrivate::BatchUpdateAttendeeCapabilitiesExceptRequestPrivate(
    const BatchUpdateAttendeeCapabilitiesExceptRequestPrivate &other, BatchUpdateAttendeeCapabilitiesExceptRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
