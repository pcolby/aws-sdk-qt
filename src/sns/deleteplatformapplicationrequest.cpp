// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteplatformapplicationrequest.h"
#include "deleteplatformapplicationrequest_p.h"
#include "deleteplatformapplicationresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::DeletePlatformApplicationRequest
 * \brief The DeletePlatformApplicationRequest class provides an interface for Sns DeletePlatformApplication requests.
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
 * \sa SnsClient::deletePlatformApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePlatformApplicationRequest::DeletePlatformApplicationRequest(const DeletePlatformApplicationRequest &other)
    : SnsRequest(new DeletePlatformApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePlatformApplicationRequest object.
 */
DeletePlatformApplicationRequest::DeletePlatformApplicationRequest()
    : SnsRequest(new DeletePlatformApplicationRequestPrivate(SnsRequest::DeletePlatformApplicationAction, this))
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
 * \class QtAws::Sns::DeletePlatformApplicationRequestPrivate
 * \brief The DeletePlatformApplicationRequestPrivate class provides private implementation for DeletePlatformApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a DeletePlatformApplicationRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
DeletePlatformApplicationRequestPrivate::DeletePlatformApplicationRequestPrivate(
    const SnsRequest::Action action, DeletePlatformApplicationRequest * const q)
    : SnsRequestPrivate(action, q)
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
    : SnsRequestPrivate(other, q)
{

}

} // namespace Sns
} // namespace QtAws
