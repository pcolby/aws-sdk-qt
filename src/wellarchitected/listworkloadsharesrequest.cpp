// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkloadsharesrequest.h"
#include "listworkloadsharesrequest_p.h"
#include "listworkloadsharesresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListWorkloadSharesRequest
 * \brief The ListWorkloadSharesRequest class provides an interface for WellArchitected ListWorkloadShares requests.
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
 * \sa WellArchitectedClient::listWorkloadShares
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkloadSharesRequest::ListWorkloadSharesRequest(const ListWorkloadSharesRequest &other)
    : WellArchitectedRequest(new ListWorkloadSharesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkloadSharesRequest object.
 */
ListWorkloadSharesRequest::ListWorkloadSharesRequest()
    : WellArchitectedRequest(new ListWorkloadSharesRequestPrivate(WellArchitectedRequest::ListWorkloadSharesAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkloadSharesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkloadSharesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkloadSharesRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkloadSharesResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::ListWorkloadSharesRequestPrivate
 * \brief The ListWorkloadSharesRequestPrivate class provides private implementation for ListWorkloadSharesRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListWorkloadSharesRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
ListWorkloadSharesRequestPrivate::ListWorkloadSharesRequestPrivate(
    const WellArchitectedRequest::Action action, ListWorkloadSharesRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkloadSharesRequest
 * class' copy constructor.
 */
ListWorkloadSharesRequestPrivate::ListWorkloadSharesRequestPrivate(
    const ListWorkloadSharesRequestPrivate &other, ListWorkloadSharesRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
