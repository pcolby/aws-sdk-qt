/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getsubscriptionattributesrequest.h"
#include "getsubscriptionattributesrequest_p.h"
#include "getsubscriptionattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::GetSubscriptionAttributesRequest
 * \brief The GetSubscriptionAttributesRequest class provides an interface for SNS GetSubscriptionAttributes requests.
 *
 * \inmodule QtAwsSNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see <a
 *  href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SnsClient::getSubscriptionAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetSubscriptionAttributesRequest::GetSubscriptionAttributesRequest(const GetSubscriptionAttributesRequest &other)
    : SnsRequest(new GetSubscriptionAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSubscriptionAttributesRequest object.
 */
GetSubscriptionAttributesRequest::GetSubscriptionAttributesRequest()
    : SnsRequest(new GetSubscriptionAttributesRequestPrivate(SnsRequest::GetSubscriptionAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSubscriptionAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSubscriptionAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSubscriptionAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SNS::GetSubscriptionAttributesRequestPrivate
 * \brief The GetSubscriptionAttributesRequestPrivate class provides private implementation for GetSubscriptionAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a GetSubscriptionAttributesRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
GetSubscriptionAttributesRequestPrivate::GetSubscriptionAttributesRequestPrivate(
    const SnsRequest::Action action, GetSubscriptionAttributesRequest * const q)
    : SnsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionAttributesRequest
 * class' copy constructor.
 */
GetSubscriptionAttributesRequestPrivate::GetSubscriptionAttributesRequestPrivate(
    const GetSubscriptionAttributesRequestPrivate &other, GetSubscriptionAttributesRequest * const q)
    : SnsRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
