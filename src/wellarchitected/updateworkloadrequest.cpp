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

#include "updateworkloadrequest.h"
#include "updateworkloadrequest_p.h"
#include "updateworkloadresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateWorkloadRequest
 * \brief The UpdateWorkloadRequest class provides an interface for WellArchitected UpdateWorkload requests.
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
 * \sa WellArchitectedClient::updateWorkload
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkloadRequest::UpdateWorkloadRequest(const UpdateWorkloadRequest &other)
    : WellArchitectedRequest(new UpdateWorkloadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkloadRequest object.
 */
UpdateWorkloadRequest::UpdateWorkloadRequest()
    : WellArchitectedRequest(new UpdateWorkloadRequestPrivate(WellArchitectedRequest::UpdateWorkloadAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkloadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkloadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkloadRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkloadResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::UpdateWorkloadRequestPrivate
 * \brief The UpdateWorkloadRequestPrivate class provides private implementation for UpdateWorkloadRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateWorkloadRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
UpdateWorkloadRequestPrivate::UpdateWorkloadRequestPrivate(
    const WellArchitectedRequest::Action action, UpdateWorkloadRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkloadRequest
 * class' copy constructor.
 */
UpdateWorkloadRequestPrivate::UpdateWorkloadRequestPrivate(
    const UpdateWorkloadRequestPrivate &other, UpdateWorkloadRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
