// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateemailidentitypolicyrequest.h"
#include "updateemailidentitypolicyrequest_p.h"
#include "updateemailidentitypolicyresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::UpdateEmailIdentityPolicyRequest
 * \brief The UpdateEmailIdentityPolicyRequest class provides an interface for SESv2 UpdateEmailIdentityPolicy requests.
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
 * \sa SESv2Client::updateEmailIdentityPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEmailIdentityPolicyRequest::UpdateEmailIdentityPolicyRequest(const UpdateEmailIdentityPolicyRequest &other)
    : SESv2Request(new UpdateEmailIdentityPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEmailIdentityPolicyRequest object.
 */
UpdateEmailIdentityPolicyRequest::UpdateEmailIdentityPolicyRequest()
    : SESv2Request(new UpdateEmailIdentityPolicyRequestPrivate(SESv2Request::UpdateEmailIdentityPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEmailIdentityPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEmailIdentityPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEmailIdentityPolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEmailIdentityPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::UpdateEmailIdentityPolicyRequestPrivate
 * \brief The UpdateEmailIdentityPolicyRequestPrivate class provides private implementation for UpdateEmailIdentityPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a UpdateEmailIdentityPolicyRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
UpdateEmailIdentityPolicyRequestPrivate::UpdateEmailIdentityPolicyRequestPrivate(
    const SESv2Request::Action action, UpdateEmailIdentityPolicyRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEmailIdentityPolicyRequest
 * class' copy constructor.
 */
UpdateEmailIdentityPolicyRequestPrivate::UpdateEmailIdentityPolicyRequestPrivate(
    const UpdateEmailIdentityPolicyRequestPrivate &other, UpdateEmailIdentityPolicyRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
