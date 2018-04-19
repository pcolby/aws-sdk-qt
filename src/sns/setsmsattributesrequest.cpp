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

#include "setsmsattributesrequest.h"
#include "setsmsattributesrequest_p.h"
#include "setsmsattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::SetSMSAttributesRequest
 * \brief The SetSMSAttributesRequest class provides an interface for SNS SetSMSAttributes requests.
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
 * \sa SnsClient::setSMSAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
SetSMSAttributesRequest::SetSMSAttributesRequest(const SetSMSAttributesRequest &other)
    : SNSRequest(new SetSMSAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetSMSAttributesRequest object.
 */
SetSMSAttributesRequest::SetSMSAttributesRequest()
    : SNSRequest(new SetSMSAttributesRequestPrivate(SNSRequest::SetSMSAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool SetSMSAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetSMSAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetSMSAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SetSMSAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SNS::SetSMSAttributesRequestPrivate
 * \brief The SetSMSAttributesRequestPrivate class provides private implementation for SetSMSAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a SetSMSAttributesRequestPrivate object for SNS \a action,
 * with public implementation \a q.
 */
SetSMSAttributesRequestPrivate::SetSMSAttributesRequestPrivate(
    const SNSRequest::Action action, SetSMSAttributesRequest * const q)
    : SNSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetSMSAttributesRequest
 * class' copy constructor.
 */
SetSMSAttributesRequestPrivate::SetSMSAttributesRequestPrivate(
    const SetSMSAttributesRequestPrivate &other, SetSMSAttributesRequest * const q)
    : SNSRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
