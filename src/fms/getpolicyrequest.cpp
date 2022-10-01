// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpolicyrequest.h"
#include "getpolicyrequest_p.h"
#include "getpolicyresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetPolicyRequest
 * \brief The GetPolicyRequest class provides an interface for Fms GetPolicy requests.
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
 * \sa FmsClient::getPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetPolicyRequest::GetPolicyRequest(const GetPolicyRequest &other)
    : FmsRequest(new GetPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPolicyRequest object.
 */
GetPolicyRequest::GetPolicyRequest()
    : FmsRequest(new GetPolicyRequestPrivate(FmsRequest::GetPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::GetPolicyRequestPrivate
 * \brief The GetPolicyRequestPrivate class provides private implementation for GetPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetPolicyRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const FmsRequest::Action action, GetPolicyRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPolicyRequest
 * class' copy constructor.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const GetPolicyRequestPrivate &other, GetPolicyRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
