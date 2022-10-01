// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepoolsrequest.h"
#include "describepoolsrequest_p.h"
#include "describepoolsresponse.h"
#include "pinpointsmsvoicev2request_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribePoolsRequest
 * \brief The DescribePoolsRequest class provides an interface for PinpointSmsVoiceV2 DescribePools requests.
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
 * \sa PinpointSmsVoiceV2Client::describePools
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePoolsRequest::DescribePoolsRequest(const DescribePoolsRequest &other)
    : PinpointSmsVoiceV2Request(new DescribePoolsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePoolsRequest object.
 */
DescribePoolsRequest::DescribePoolsRequest()
    : PinpointSmsVoiceV2Request(new DescribePoolsRequestPrivate(PinpointSmsVoiceV2Request::DescribePoolsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePoolsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePoolsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePoolsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePoolsResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribePoolsRequestPrivate
 * \brief The DescribePoolsRequestPrivate class provides private implementation for DescribePoolsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a DescribePoolsRequestPrivate object for PinpointSmsVoiceV2 \a action,
 * with public implementation \a q.
 */
DescribePoolsRequestPrivate::DescribePoolsRequestPrivate(
    const PinpointSmsVoiceV2Request::Action action, DescribePoolsRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePoolsRequest
 * class' copy constructor.
 */
DescribePoolsRequestPrivate::DescribePoolsRequestPrivate(
    const DescribePoolsRequestPrivate &other, DescribePoolsRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
