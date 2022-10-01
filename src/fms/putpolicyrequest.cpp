// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpolicyrequest.h"
#include "putpolicyrequest_p.h"
#include "putpolicyresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::PutPolicyRequest
 * \brief The PutPolicyRequest class provides an interface for Fms PutPolicy requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::putPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutPolicyRequest::PutPolicyRequest(const PutPolicyRequest &other)
    : FmsRequest(new PutPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPolicyRequest object.
 */
PutPolicyRequest::PutPolicyRequest()
    : FmsRequest(new PutPolicyRequestPrivate(FmsRequest::PutPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::PutPolicyRequestPrivate
 * \brief The PutPolicyRequestPrivate class provides private implementation for PutPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a PutPolicyRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
PutPolicyRequestPrivate::PutPolicyRequestPrivate(
    const FmsRequest::Action action, PutPolicyRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPolicyRequest
 * class' copy constructor.
 */
PutPolicyRequestPrivate::PutPolicyRequestPrivate(
    const PutPolicyRequestPrivate &other, PutPolicyRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
