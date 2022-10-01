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

#include "releasephonenumberrequest.h"
#include "releasephonenumberrequest_p.h"
#include "releasephonenumberresponse.h"
#include "pinpointsmsvoicev2request_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::ReleasePhoneNumberRequest
 * \brief The ReleasePhoneNumberRequest class provides an interface for PinpointSmsVoiceV2 ReleasePhoneNumber requests.
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
 * \sa PinpointSmsVoiceV2Client::releasePhoneNumber
 */

/*!
 * Constructs a copy of \a other.
 */
ReleasePhoneNumberRequest::ReleasePhoneNumberRequest(const ReleasePhoneNumberRequest &other)
    : PinpointSmsVoiceV2Request(new ReleasePhoneNumberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReleasePhoneNumberRequest object.
 */
ReleasePhoneNumberRequest::ReleasePhoneNumberRequest()
    : PinpointSmsVoiceV2Request(new ReleasePhoneNumberRequestPrivate(PinpointSmsVoiceV2Request::ReleasePhoneNumberAction, this))
{

}

/*!
 * \reimp
 */
bool ReleasePhoneNumberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReleasePhoneNumberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReleasePhoneNumberRequest::response(QNetworkReply * const reply) const
{
    return new ReleasePhoneNumberResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::ReleasePhoneNumberRequestPrivate
 * \brief The ReleasePhoneNumberRequestPrivate class provides private implementation for ReleasePhoneNumberRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a ReleasePhoneNumberRequestPrivate object for PinpointSmsVoiceV2 \a action,
 * with public implementation \a q.
 */
ReleasePhoneNumberRequestPrivate::ReleasePhoneNumberRequestPrivate(
    const PinpointSmsVoiceV2Request::Action action, ReleasePhoneNumberRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReleasePhoneNumberRequest
 * class' copy constructor.
 */
ReleasePhoneNumberRequestPrivate::ReleasePhoneNumberRequestPrivate(
    const ReleasePhoneNumberRequestPrivate &other, ReleasePhoneNumberRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
