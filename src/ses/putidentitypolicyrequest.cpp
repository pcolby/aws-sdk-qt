// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putidentitypolicyrequest.h"
#include "putidentitypolicyrequest_p.h"
#include "putidentitypolicyresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::PutIdentityPolicyRequest
 * \brief The PutIdentityPolicyRequest class provides an interface for Ses PutIdentityPolicy requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::putIdentityPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutIdentityPolicyRequest::PutIdentityPolicyRequest(const PutIdentityPolicyRequest &other)
    : SesRequest(new PutIdentityPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutIdentityPolicyRequest object.
 */
PutIdentityPolicyRequest::PutIdentityPolicyRequest()
    : SesRequest(new PutIdentityPolicyRequestPrivate(SesRequest::PutIdentityPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutIdentityPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutIdentityPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIdentityPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutIdentityPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::PutIdentityPolicyRequestPrivate
 * \brief The PutIdentityPolicyRequestPrivate class provides private implementation for PutIdentityPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a PutIdentityPolicyRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
PutIdentityPolicyRequestPrivate::PutIdentityPolicyRequestPrivate(
    const SesRequest::Action action, PutIdentityPolicyRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutIdentityPolicyRequest
 * class' copy constructor.
 */
PutIdentityPolicyRequestPrivate::PutIdentityPolicyRequestPrivate(
    const PutIdentityPolicyRequestPrivate &other, PutIdentityPolicyRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
