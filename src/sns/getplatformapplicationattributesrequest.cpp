// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getplatformapplicationattributesrequest.h"
#include "getplatformapplicationattributesrequest_p.h"
#include "getplatformapplicationattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::GetPlatformApplicationAttributesRequest
 * \brief The GetPlatformApplicationAttributesRequest class provides an interface for Sns GetPlatformApplicationAttributes requests.
 *
 * \inmodule QtAwsSns
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see the <a
 *  href="http://aws.amazon.com/sns/">Amazon SNS product page</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  For information on the permissions you need to use this API, see <a
 *  href="https://docs.aws.amazon.com/sns/latest/dg/sns-authentication-and-access-control.html">Identity and access
 *  management in Amazon SNS</a> in the <i>Amazon SNS Developer Guide.</i>
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SnsClient::getPlatformApplicationAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetPlatformApplicationAttributesRequest::GetPlatformApplicationAttributesRequest(const GetPlatformApplicationAttributesRequest &other)
    : SnsRequest(new GetPlatformApplicationAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPlatformApplicationAttributesRequest object.
 */
GetPlatformApplicationAttributesRequest::GetPlatformApplicationAttributesRequest()
    : SnsRequest(new GetPlatformApplicationAttributesRequestPrivate(SnsRequest::GetPlatformApplicationAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetPlatformApplicationAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPlatformApplicationAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPlatformApplicationAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetPlatformApplicationAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::Sns::GetPlatformApplicationAttributesRequestPrivate
 * \brief The GetPlatformApplicationAttributesRequestPrivate class provides private implementation for GetPlatformApplicationAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a GetPlatformApplicationAttributesRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
GetPlatformApplicationAttributesRequestPrivate::GetPlatformApplicationAttributesRequestPrivate(
    const SnsRequest::Action action, GetPlatformApplicationAttributesRequest * const q)
    : SnsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPlatformApplicationAttributesRequest
 * class' copy constructor.
 */
GetPlatformApplicationAttributesRequestPrivate::GetPlatformApplicationAttributesRequestPrivate(
    const GetPlatformApplicationAttributesRequestPrivate &other, GetPlatformApplicationAttributesRequest * const q)
    : SnsRequestPrivate(other, q)
{

}

} // namespace Sns
} // namespace QtAws
