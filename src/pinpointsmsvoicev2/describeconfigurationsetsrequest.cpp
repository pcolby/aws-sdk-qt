// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationsetsrequest.h"
#include "describeconfigurationsetsrequest_p.h"
#include "describeconfigurationsetsresponse.h"
#include "pinpointsmsvoicev2request_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribeConfigurationSetsRequest
 * \brief The DescribeConfigurationSetsRequest class provides an interface for PinpointSmsVoiceV2 DescribeConfigurationSets requests.
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
 * \sa PinpointSmsVoiceV2Client::describeConfigurationSets
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConfigurationSetsRequest::DescribeConfigurationSetsRequest(const DescribeConfigurationSetsRequest &other)
    : PinpointSmsVoiceV2Request(new DescribeConfigurationSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConfigurationSetsRequest object.
 */
DescribeConfigurationSetsRequest::DescribeConfigurationSetsRequest()
    : PinpointSmsVoiceV2Request(new DescribeConfigurationSetsRequestPrivate(PinpointSmsVoiceV2Request::DescribeConfigurationSetsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConfigurationSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConfigurationSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationSetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationSetsResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribeConfigurationSetsRequestPrivate
 * \brief The DescribeConfigurationSetsRequestPrivate class provides private implementation for DescribeConfigurationSetsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a DescribeConfigurationSetsRequestPrivate object for PinpointSmsVoiceV2 \a action,
 * with public implementation \a q.
 */
DescribeConfigurationSetsRequestPrivate::DescribeConfigurationSetsRequestPrivate(
    const PinpointSmsVoiceV2Request::Action action, DescribeConfigurationSetsRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationSetsRequest
 * class' copy constructor.
 */
DescribeConfigurationSetsRequestPrivate::DescribeConfigurationSetsRequestPrivate(
    const DescribeConfigurationSetsRequestPrivate &other, DescribeConfigurationSetsRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
