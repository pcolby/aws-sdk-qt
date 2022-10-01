// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpoliciesrequest.h"
#include "listpoliciesrequest_p.h"
#include "listpoliciesresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListPoliciesRequest
 * \brief The ListPoliciesRequest class provides an interface for Fms ListPolicies requests.
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
 * \sa FmsClient::listPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListPoliciesRequest::ListPoliciesRequest(const ListPoliciesRequest &other)
    : FmsRequest(new ListPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPoliciesRequest object.
 */
ListPoliciesRequest::ListPoliciesRequest()
    : FmsRequest(new ListPoliciesRequestPrivate(FmsRequest::ListPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::ListPoliciesRequestPrivate
 * \brief The ListPoliciesRequestPrivate class provides private implementation for ListPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListPoliciesRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
ListPoliciesRequestPrivate::ListPoliciesRequestPrivate(
    const FmsRequest::Action action, ListPoliciesRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPoliciesRequest
 * class' copy constructor.
 */
ListPoliciesRequestPrivate::ListPoliciesRequestPrivate(
    const ListPoliciesRequestPrivate &other, ListPoliciesRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
