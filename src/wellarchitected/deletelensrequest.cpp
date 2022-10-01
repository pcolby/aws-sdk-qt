// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelensrequest.h"
#include "deletelensrequest_p.h"
#include "deletelensresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::DeleteLensRequest
 * \brief The DeleteLensRequest class provides an interface for WellArchitected DeleteLens requests.
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
 * \sa WellArchitectedClient::deleteLens
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLensRequest::DeleteLensRequest(const DeleteLensRequest &other)
    : WellArchitectedRequest(new DeleteLensRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLensRequest object.
 */
DeleteLensRequest::DeleteLensRequest()
    : WellArchitectedRequest(new DeleteLensRequestPrivate(WellArchitectedRequest::DeleteLensAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLensRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLensResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLensRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLensResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::DeleteLensRequestPrivate
 * \brief The DeleteLensRequestPrivate class provides private implementation for DeleteLensRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a DeleteLensRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
DeleteLensRequestPrivate::DeleteLensRequestPrivate(
    const WellArchitectedRequest::Action action, DeleteLensRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLensRequest
 * class' copy constructor.
 */
DeleteLensRequestPrivate::DeleteLensRequestPrivate(
    const DeleteLensRequestPrivate &other, DeleteLensRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
