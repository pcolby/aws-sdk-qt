// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettopicattributesrequest.h"
#include "gettopicattributesrequest_p.h"
#include "gettopicattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::GetTopicAttributesRequest
 * \brief The GetTopicAttributesRequest class provides an interface for Sns GetTopicAttributes requests.
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
 * \sa SnsClient::getTopicAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetTopicAttributesRequest::GetTopicAttributesRequest(const GetTopicAttributesRequest &other)
    : SnsRequest(new GetTopicAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTopicAttributesRequest object.
 */
GetTopicAttributesRequest::GetTopicAttributesRequest()
    : SnsRequest(new GetTopicAttributesRequestPrivate(SnsRequest::GetTopicAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetTopicAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTopicAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTopicAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetTopicAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::Sns::GetTopicAttributesRequestPrivate
 * \brief The GetTopicAttributesRequestPrivate class provides private implementation for GetTopicAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a GetTopicAttributesRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
GetTopicAttributesRequestPrivate::GetTopicAttributesRequestPrivate(
    const SnsRequest::Action action, GetTopicAttributesRequest * const q)
    : SnsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTopicAttributesRequest
 * class' copy constructor.
 */
GetTopicAttributesRequestPrivate::GetTopicAttributesRequestPrivate(
    const GetTopicAttributesRequestPrivate &other, GetTopicAttributesRequest * const q)
    : SnsRequestPrivate(other, q)
{

}

} // namespace Sns
} // namespace QtAws
