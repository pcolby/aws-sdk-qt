// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setdefaultsenderidrequest.h"
#include "setdefaultsenderidrequest_p.h"
#include "setdefaultsenderidresponse.h"
#include "pinpointsmsvoicev2request_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::SetDefaultSenderIdRequest
 * \brief The SetDefaultSenderIdRequest class provides an interface for PinpointSmsVoiceV2 SetDefaultSenderId requests.
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
 * \sa PinpointSmsVoiceV2Client::setDefaultSenderId
 */

/*!
 * Constructs a copy of \a other.
 */
SetDefaultSenderIdRequest::SetDefaultSenderIdRequest(const SetDefaultSenderIdRequest &other)
    : PinpointSmsVoiceV2Request(new SetDefaultSenderIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetDefaultSenderIdRequest object.
 */
SetDefaultSenderIdRequest::SetDefaultSenderIdRequest()
    : PinpointSmsVoiceV2Request(new SetDefaultSenderIdRequestPrivate(PinpointSmsVoiceV2Request::SetDefaultSenderIdAction, this))
{

}

/*!
 * \reimp
 */
bool SetDefaultSenderIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetDefaultSenderIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetDefaultSenderIdRequest::response(QNetworkReply * const reply) const
{
    return new SetDefaultSenderIdResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::SetDefaultSenderIdRequestPrivate
 * \brief The SetDefaultSenderIdRequestPrivate class provides private implementation for SetDefaultSenderIdRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a SetDefaultSenderIdRequestPrivate object for PinpointSmsVoiceV2 \a action,
 * with public implementation \a q.
 */
SetDefaultSenderIdRequestPrivate::SetDefaultSenderIdRequestPrivate(
    const PinpointSmsVoiceV2Request::Action action, SetDefaultSenderIdRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetDefaultSenderIdRequest
 * class' copy constructor.
 */
SetDefaultSenderIdRequestPrivate::SetDefaultSenderIdRequestPrivate(
    const SetDefaultSenderIdRequestPrivate &other, SetDefaultSenderIdRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
