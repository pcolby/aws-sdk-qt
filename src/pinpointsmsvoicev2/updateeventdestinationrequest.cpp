// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateeventdestinationrequest.h"
#include "updateeventdestinationrequest_p.h"
#include "updateeventdestinationresponse.h"
#include "pinpointsmsvoicev2request_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::UpdateEventDestinationRequest
 * \brief The UpdateEventDestinationRequest class provides an interface for PinpointSmsVoiceV2 UpdateEventDestination requests.
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 *
 *  Welcome to the <i>Amazon Pinpoint SMS and Voice, version 2 API Reference</i>. This guide provides information about
 *  Amazon Pinpoint SMS and Voice, version 2 API resources, including supported HTTP methods, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Pinpoint is an Amazon Web Services service that you can use to engage with your recipients across multiple
 *  messaging channels. The Amazon Pinpoint SMS and Voice, version 2 API provides programmatic access to options that are
 *  unique to the SMS and voice channels and supplements the resources provided by the Amazon Pinpoint
 * 
 *  API>
 * 
 *  If you're new to Amazon Pinpoint, it's also helpful to review the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html"> Amazon Pinpoint Developer Guide</a>. The
 *  <i>Amazon Pinpoint Developer Guide</i> provides tutorials, code samples, and procedures that demonstrate how to use
 *  Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint functionality into mobile apps and other
 *  types of applications. The guide also provides key information, such as Amazon Pinpoint integration with other Amazon
 *  Web Services services, and the quotas that apply to use of the
 *
 * \sa PinpointSmsVoiceV2Client::updateEventDestination
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEventDestinationRequest::UpdateEventDestinationRequest(const UpdateEventDestinationRequest &other)
    : PinpointSmsVoiceV2Request(new UpdateEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEventDestinationRequest object.
 */
UpdateEventDestinationRequest::UpdateEventDestinationRequest()
    : PinpointSmsVoiceV2Request(new UpdateEventDestinationRequestPrivate(PinpointSmsVoiceV2Request::UpdateEventDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEventDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEventDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEventDestinationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEventDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::UpdateEventDestinationRequestPrivate
 * \brief The UpdateEventDestinationRequestPrivate class provides private implementation for UpdateEventDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a UpdateEventDestinationRequestPrivate object for PinpointSmsVoiceV2 \a action,
 * with public implementation \a q.
 */
UpdateEventDestinationRequestPrivate::UpdateEventDestinationRequestPrivate(
    const PinpointSmsVoiceV2Request::Action action, UpdateEventDestinationRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEventDestinationRequest
 * class' copy constructor.
 */
UpdateEventDestinationRequestPrivate::UpdateEventDestinationRequestPrivate(
    const UpdateEventDestinationRequestPrivate &other, UpdateEventDestinationRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
