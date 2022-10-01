// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getemailidentitypoliciesrequest.h"
#include "getemailidentitypoliciesrequest_p.h"
#include "getemailidentitypoliciesresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetEmailIdentityPoliciesRequest
 * \brief The GetEmailIdentityPoliciesRequest class provides an interface for SESv2 GetEmailIdentityPolicies requests.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::getEmailIdentityPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
GetEmailIdentityPoliciesRequest::GetEmailIdentityPoliciesRequest(const GetEmailIdentityPoliciesRequest &other)
    : SESv2Request(new GetEmailIdentityPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEmailIdentityPoliciesRequest object.
 */
GetEmailIdentityPoliciesRequest::GetEmailIdentityPoliciesRequest()
    : SESv2Request(new GetEmailIdentityPoliciesRequestPrivate(SESv2Request::GetEmailIdentityPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool GetEmailIdentityPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEmailIdentityPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEmailIdentityPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new GetEmailIdentityPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetEmailIdentityPoliciesRequestPrivate
 * \brief The GetEmailIdentityPoliciesRequestPrivate class provides private implementation for GetEmailIdentityPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetEmailIdentityPoliciesRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetEmailIdentityPoliciesRequestPrivate::GetEmailIdentityPoliciesRequestPrivate(
    const SESv2Request::Action action, GetEmailIdentityPoliciesRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEmailIdentityPoliciesRequest
 * class' copy constructor.
 */
GetEmailIdentityPoliciesRequestPrivate::GetEmailIdentityPoliciesRequestPrivate(
    const GetEmailIdentityPoliciesRequestPrivate &other, GetEmailIdentityPoliciesRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
