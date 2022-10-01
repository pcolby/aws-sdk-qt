// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteemailidentitypolicyrequest.h"
#include "deleteemailidentitypolicyrequest_p.h"
#include "deleteemailidentitypolicyresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteEmailIdentityPolicyRequest
 * \brief The DeleteEmailIdentityPolicyRequest class provides an interface for SESv2 DeleteEmailIdentityPolicy requests.
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
 * \sa SESv2Client::deleteEmailIdentityPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEmailIdentityPolicyRequest::DeleteEmailIdentityPolicyRequest(const DeleteEmailIdentityPolicyRequest &other)
    : SESv2Request(new DeleteEmailIdentityPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEmailIdentityPolicyRequest object.
 */
DeleteEmailIdentityPolicyRequest::DeleteEmailIdentityPolicyRequest()
    : SESv2Request(new DeleteEmailIdentityPolicyRequestPrivate(SESv2Request::DeleteEmailIdentityPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEmailIdentityPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEmailIdentityPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEmailIdentityPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEmailIdentityPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::DeleteEmailIdentityPolicyRequestPrivate
 * \brief The DeleteEmailIdentityPolicyRequestPrivate class provides private implementation for DeleteEmailIdentityPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteEmailIdentityPolicyRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
DeleteEmailIdentityPolicyRequestPrivate::DeleteEmailIdentityPolicyRequestPrivate(
    const SESv2Request::Action action, DeleteEmailIdentityPolicyRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEmailIdentityPolicyRequest
 * class' copy constructor.
 */
DeleteEmailIdentityPolicyRequestPrivate::DeleteEmailIdentityPolicyRequestPrivate(
    const DeleteEmailIdentityPolicyRequestPrivate &other, DeleteEmailIdentityPolicyRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
