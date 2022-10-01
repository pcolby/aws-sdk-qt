// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmemberaccountsrequest.h"
#include "listmemberaccountsrequest_p.h"
#include "listmemberaccountsresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListMemberAccountsRequest
 * \brief The ListMemberAccountsRequest class provides an interface for Fms ListMemberAccounts requests.
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
 * \sa FmsClient::listMemberAccounts
 */

/*!
 * Constructs a copy of \a other.
 */
ListMemberAccountsRequest::ListMemberAccountsRequest(const ListMemberAccountsRequest &other)
    : FmsRequest(new ListMemberAccountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMemberAccountsRequest object.
 */
ListMemberAccountsRequest::ListMemberAccountsRequest()
    : FmsRequest(new ListMemberAccountsRequestPrivate(FmsRequest::ListMemberAccountsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMemberAccountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMemberAccountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMemberAccountsRequest::response(QNetworkReply * const reply) const
{
    return new ListMemberAccountsResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::ListMemberAccountsRequestPrivate
 * \brief The ListMemberAccountsRequestPrivate class provides private implementation for ListMemberAccountsRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListMemberAccountsRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
ListMemberAccountsRequestPrivate::ListMemberAccountsRequestPrivate(
    const FmsRequest::Action action, ListMemberAccountsRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMemberAccountsRequest
 * class' copy constructor.
 */
ListMemberAccountsRequestPrivate::ListMemberAccountsRequestPrivate(
    const ListMemberAccountsRequestPrivate &other, ListMemberAccountsRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
