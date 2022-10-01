/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
