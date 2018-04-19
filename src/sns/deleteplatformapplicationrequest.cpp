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

#include "deleteplatformapplicationrequest.h"
#include "deleteplatformapplicationrequest_p.h"
#include "deleteplatformapplicationresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::DeletePlatformApplicationRequest
 * \brief The DeletePlatformApplicationRequest class provides an interface for SNS DeletePlatformApplication requests.
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
 * \sa SnsClient::deletePlatformApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePlatformApplicationRequest::DeletePlatformApplicationRequest(const DeletePlatformApplicationRequest &other)
    : SNSRequest(new DeletePlatformApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePlatformApplicationRequest object.
 */
DeletePlatformApplicationRequest::DeletePlatformApplicationRequest()
    : SNSRequest(new DeletePlatformApplicationRequestPrivate(SNSRequest::DeletePlatformApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePlatformApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePlatformApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePlatformApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeletePlatformApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::SNS::DeletePlatformApplicationRequestPrivate
 * \brief The DeletePlatformApplicationRequestPrivate class provides private implementation for DeletePlatformApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a DeletePlatformApplicationRequestPrivate object for SNS \a action,
 * with public implementation \a q.
 */
DeletePlatformApplicationRequestPrivate::DeletePlatformApplicationRequestPrivate(
    const SNSRequest::Action action, DeletePlatformApplicationRequest * const q)
    : SNSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePlatformApplicationRequest
 * class' copy constructor.
 */
DeletePlatformApplicationRequestPrivate::DeletePlatformApplicationRequestPrivate(
    const DeletePlatformApplicationRequestPrivate &other, DeletePlatformApplicationRequest * const q)
    : SNSRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
