// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmilestonesrequest.h"
#include "listmilestonesrequest_p.h"
#include "listmilestonesresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListMilestonesRequest
 * \brief The ListMilestonesRequest class provides an interface for WellArchitected ListMilestones requests.
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
 * \sa WellArchitectedClient::listMilestones
 */

/*!
 * Constructs a copy of \a other.
 */
ListMilestonesRequest::ListMilestonesRequest(const ListMilestonesRequest &other)
    : WellArchitectedRequest(new ListMilestonesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMilestonesRequest object.
 */
ListMilestonesRequest::ListMilestonesRequest()
    : WellArchitectedRequest(new ListMilestonesRequestPrivate(WellArchitectedRequest::ListMilestonesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMilestonesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMilestonesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMilestonesRequest::response(QNetworkReply * const reply) const
{
    return new ListMilestonesResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::ListMilestonesRequestPrivate
 * \brief The ListMilestonesRequestPrivate class provides private implementation for ListMilestonesRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListMilestonesRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
ListMilestonesRequestPrivate::ListMilestonesRequestPrivate(
    const WellArchitectedRequest::Action action, ListMilestonesRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMilestonesRequest
 * class' copy constructor.
 */
ListMilestonesRequestPrivate::ListMilestonesRequestPrivate(
    const ListMilestonesRequestPrivate &other, ListMilestonesRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
