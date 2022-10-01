// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepolicyrequest.h"
#include "deletepolicyrequest_p.h"
#include "deletepolicyresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DeletePolicyRequest
 * \brief The DeletePolicyRequest class provides an interface for Fms DeletePolicy requests.
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
 * \sa FmsClient::deletePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePolicyRequest::DeletePolicyRequest(const DeletePolicyRequest &other)
    : FmsRequest(new DeletePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePolicyRequest object.
 */
DeletePolicyRequest::DeletePolicyRequest()
    : FmsRequest(new DeletePolicyRequestPrivate(FmsRequest::DeletePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::DeletePolicyRequestPrivate
 * \brief The DeletePolicyRequestPrivate class provides private implementation for DeletePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DeletePolicyRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const FmsRequest::Action action, DeletePolicyRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePolicyRequest
 * class' copy constructor.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const DeletePolicyRequestPrivate &other, DeletePolicyRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
