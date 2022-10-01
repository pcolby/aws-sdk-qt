// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkloadsrequest.h"
#include "listworkloadsrequest_p.h"
#include "listworkloadsresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListWorkloadsRequest
 * \brief The ListWorkloadsRequest class provides an interface for WellArchitected ListWorkloads requests.
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
 * \sa WellArchitectedClient::listWorkloads
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkloadsRequest::ListWorkloadsRequest(const ListWorkloadsRequest &other)
    : WellArchitectedRequest(new ListWorkloadsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkloadsRequest object.
 */
ListWorkloadsRequest::ListWorkloadsRequest()
    : WellArchitectedRequest(new ListWorkloadsRequestPrivate(WellArchitectedRequest::ListWorkloadsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkloadsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkloadsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkloadsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkloadsResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::ListWorkloadsRequestPrivate
 * \brief The ListWorkloadsRequestPrivate class provides private implementation for ListWorkloadsRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListWorkloadsRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
ListWorkloadsRequestPrivate::ListWorkloadsRequestPrivate(
    const WellArchitectedRequest::Action action, ListWorkloadsRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkloadsRequest
 * class' copy constructor.
 */
ListWorkloadsRequestPrivate::ListWorkloadsRequestPrivate(
    const ListWorkloadsRequestPrivate &other, ListWorkloadsRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
