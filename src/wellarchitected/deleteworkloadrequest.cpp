// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkloadrequest.h"
#include "deleteworkloadrequest_p.h"
#include "deleteworkloadresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::DeleteWorkloadRequest
 * \brief The DeleteWorkloadRequest class provides an interface for WellArchitected DeleteWorkload requests.
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
 * \sa WellArchitectedClient::deleteWorkload
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkloadRequest::DeleteWorkloadRequest(const DeleteWorkloadRequest &other)
    : WellArchitectedRequest(new DeleteWorkloadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkloadRequest object.
 */
DeleteWorkloadRequest::DeleteWorkloadRequest()
    : WellArchitectedRequest(new DeleteWorkloadRequestPrivate(WellArchitectedRequest::DeleteWorkloadAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkloadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkloadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkloadRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkloadResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::DeleteWorkloadRequestPrivate
 * \brief The DeleteWorkloadRequestPrivate class provides private implementation for DeleteWorkloadRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a DeleteWorkloadRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
DeleteWorkloadRequestPrivate::DeleteWorkloadRequestPrivate(
    const WellArchitectedRequest::Action action, DeleteWorkloadRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkloadRequest
 * class' copy constructor.
 */
DeleteWorkloadRequestPrivate::DeleteWorkloadRequestPrivate(
    const DeleteWorkloadRequestPrivate &other, DeleteWorkloadRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
