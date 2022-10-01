// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createattendeerequest.h"
#include "createattendeerequest_p.h"
#include "createattendeeresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::CreateAttendeeRequest
 * \brief The CreateAttendeeRequest class provides an interface for ChimeSdkMeetings CreateAttendee requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::createAttendee
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAttendeeRequest::CreateAttendeeRequest(const CreateAttendeeRequest &other)
    : ChimeSdkMeetingsRequest(new CreateAttendeeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAttendeeRequest object.
 */
CreateAttendeeRequest::CreateAttendeeRequest()
    : ChimeSdkMeetingsRequest(new CreateAttendeeRequestPrivate(ChimeSdkMeetingsRequest::CreateAttendeeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAttendeeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAttendeeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAttendeeRequest::response(QNetworkReply * const reply) const
{
    return new CreateAttendeeResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::CreateAttendeeRequestPrivate
 * \brief The CreateAttendeeRequestPrivate class provides private implementation for CreateAttendeeRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a CreateAttendeeRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
CreateAttendeeRequestPrivate::CreateAttendeeRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, CreateAttendeeRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAttendeeRequest
 * class' copy constructor.
 */
CreateAttendeeRequestPrivate::CreateAttendeeRequestPrivate(
    const CreateAttendeeRequestPrivate &other, CreateAttendeeRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
