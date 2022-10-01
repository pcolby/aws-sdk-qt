// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatelensesrequest.h"
#include "associatelensesrequest_p.h"
#include "associatelensesresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::AssociateLensesRequest
 * \brief The AssociateLensesRequest class provides an interface for WellArchitected AssociateLenses requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::associateLenses
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateLensesRequest::AssociateLensesRequest(const AssociateLensesRequest &other)
    : WellArchitectedRequest(new AssociateLensesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateLensesRequest object.
 */
AssociateLensesRequest::AssociateLensesRequest()
    : WellArchitectedRequest(new AssociateLensesRequestPrivate(WellArchitectedRequest::AssociateLensesAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateLensesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateLensesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateLensesRequest::response(QNetworkReply * const reply) const
{
    return new AssociateLensesResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::AssociateLensesRequestPrivate
 * \brief The AssociateLensesRequestPrivate class provides private implementation for AssociateLensesRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a AssociateLensesRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
AssociateLensesRequestPrivate::AssociateLensesRequestPrivate(
    const WellArchitectedRequest::Action action, AssociateLensesRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateLensesRequest
 * class' copy constructor.
 */
AssociateLensesRequestPrivate::AssociateLensesRequestPrivate(
    const AssociateLensesRequestPrivate &other, AssociateLensesRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
