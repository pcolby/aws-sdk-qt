// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpoolrequest.h"
#include "createpoolrequest_p.h"
#include "createpoolresponse.h"
#include "pinpointsmsvoicev2request_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::CreatePoolRequest
 * \brief The CreatePoolRequest class provides an interface for PinpointSmsVoiceV2 CreatePool requests.
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
 * \sa PinpointSmsVoiceV2Client::createPool
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePoolRequest::CreatePoolRequest(const CreatePoolRequest &other)
    : PinpointSmsVoiceV2Request(new CreatePoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePoolRequest object.
 */
CreatePoolRequest::CreatePoolRequest()
    : PinpointSmsVoiceV2Request(new CreatePoolRequestPrivate(PinpointSmsVoiceV2Request::CreatePoolAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePoolRequest::response(QNetworkReply * const reply) const
{
    return new CreatePoolResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::CreatePoolRequestPrivate
 * \brief The CreatePoolRequestPrivate class provides private implementation for CreatePoolRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a CreatePoolRequestPrivate object for PinpointSmsVoiceV2 \a action,
 * with public implementation \a q.
 */
CreatePoolRequestPrivate::CreatePoolRequestPrivate(
    const PinpointSmsVoiceV2Request::Action action, CreatePoolRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePoolRequest
 * class' copy constructor.
 */
CreatePoolRequestPrivate::CreatePoolRequestPrivate(
    const CreatePoolRequestPrivate &other, CreatePoolRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
