// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describephonenumbersrequest.h"
#include "describephonenumbersrequest_p.h"
#include "describephonenumbersresponse.h"
#include "pinpointsmsvoicev2request_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribePhoneNumbersRequest
 * \brief The DescribePhoneNumbersRequest class provides an interface for PinpointSmsVoiceV2 DescribePhoneNumbers requests.
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
 * \sa PinpointSmsVoiceV2Client::describePhoneNumbers
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePhoneNumbersRequest::DescribePhoneNumbersRequest(const DescribePhoneNumbersRequest &other)
    : PinpointSmsVoiceV2Request(new DescribePhoneNumbersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePhoneNumbersRequest object.
 */
DescribePhoneNumbersRequest::DescribePhoneNumbersRequest()
    : PinpointSmsVoiceV2Request(new DescribePhoneNumbersRequestPrivate(PinpointSmsVoiceV2Request::DescribePhoneNumbersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePhoneNumbersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePhoneNumbersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePhoneNumbersRequest::response(QNetworkReply * const reply) const
{
    return new DescribePhoneNumbersResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribePhoneNumbersRequestPrivate
 * \brief The DescribePhoneNumbersRequestPrivate class provides private implementation for DescribePhoneNumbersRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a DescribePhoneNumbersRequestPrivate object for PinpointSmsVoiceV2 \a action,
 * with public implementation \a q.
 */
DescribePhoneNumbersRequestPrivate::DescribePhoneNumbersRequestPrivate(
    const PinpointSmsVoiceV2Request::Action action, DescribePhoneNumbersRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePhoneNumbersRequest
 * class' copy constructor.
 */
DescribePhoneNumbersRequestPrivate::DescribePhoneNumbersRequestPrivate(
    const DescribePhoneNumbersRequestPrivate &other, DescribePhoneNumbersRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
