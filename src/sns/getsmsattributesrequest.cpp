// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsmsattributesrequest.h"
#include "getsmsattributesrequest_p.h"
#include "getsmsattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::GetSMSAttributesRequest
 * \brief The GetSMSAttributesRequest class provides an interface for Sns GetSMSAttributes requests.
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
 * \sa SnsClient::getSMSAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetSMSAttributesRequest::GetSMSAttributesRequest(const GetSMSAttributesRequest &other)
    : SnsRequest(new GetSMSAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSMSAttributesRequest object.
 */
GetSMSAttributesRequest::GetSMSAttributesRequest()
    : SnsRequest(new GetSMSAttributesRequestPrivate(SnsRequest::GetSMSAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSMSAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSMSAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSMSAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetSMSAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::Sns::GetSMSAttributesRequestPrivate
 * \brief The GetSMSAttributesRequestPrivate class provides private implementation for GetSMSAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a GetSMSAttributesRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
GetSMSAttributesRequestPrivate::GetSMSAttributesRequestPrivate(
    const SnsRequest::Action action, GetSMSAttributesRequest * const q)
    : SnsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSMSAttributesRequest
 * class' copy constructor.
 */
GetSMSAttributesRequestPrivate::GetSMSAttributesRequestPrivate(
    const GetSMSAttributesRequestPrivate &other, GetSMSAttributesRequest * const q)
    : SnsRequestPrivate(other, q)
{

}

} // namespace Sns
} // namespace QtAws
