// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteidentitypolicyrequest.h"
#include "deleteidentitypolicyrequest_p.h"
#include "deleteidentitypolicyresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteIdentityPolicyRequest
 * \brief The DeleteIdentityPolicyRequest class provides an interface for Ses DeleteIdentityPolicy requests.
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
 * \sa SesClient::deleteIdentityPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIdentityPolicyRequest::DeleteIdentityPolicyRequest(const DeleteIdentityPolicyRequest &other)
    : SesRequest(new DeleteIdentityPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIdentityPolicyRequest object.
 */
DeleteIdentityPolicyRequest::DeleteIdentityPolicyRequest()
    : SesRequest(new DeleteIdentityPolicyRequestPrivate(SesRequest::DeleteIdentityPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIdentityPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIdentityPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIdentityPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DeleteIdentityPolicyRequestPrivate
 * \brief The DeleteIdentityPolicyRequestPrivate class provides private implementation for DeleteIdentityPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteIdentityPolicyRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteIdentityPolicyRequestPrivate::DeleteIdentityPolicyRequestPrivate(
    const SesRequest::Action action, DeleteIdentityPolicyRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityPolicyRequest
 * class' copy constructor.
 */
DeleteIdentityPolicyRequestPrivate::DeleteIdentityPolicyRequestPrivate(
    const DeleteIdentityPolicyRequestPrivate &other, DeleteIdentityPolicyRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
