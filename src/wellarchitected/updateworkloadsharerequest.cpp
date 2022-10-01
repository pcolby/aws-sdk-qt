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

#include "updateworkloadsharerequest.h"
#include "updateworkloadsharerequest_p.h"
#include "updateworkloadshareresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateWorkloadShareRequest
 * \brief The UpdateWorkloadShareRequest class provides an interface for WellArchitected UpdateWorkloadShare requests.
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
 * \sa WellArchitectedClient::updateWorkloadShare
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkloadShareRequest::UpdateWorkloadShareRequest(const UpdateWorkloadShareRequest &other)
    : WellArchitectedRequest(new UpdateWorkloadShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkloadShareRequest object.
 */
UpdateWorkloadShareRequest::UpdateWorkloadShareRequest()
    : WellArchitectedRequest(new UpdateWorkloadShareRequestPrivate(WellArchitectedRequest::UpdateWorkloadShareAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkloadShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkloadShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkloadShareRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkloadShareResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::UpdateWorkloadShareRequestPrivate
 * \brief The UpdateWorkloadShareRequestPrivate class provides private implementation for UpdateWorkloadShareRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateWorkloadShareRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
UpdateWorkloadShareRequestPrivate::UpdateWorkloadShareRequestPrivate(
    const WellArchitectedRequest::Action action, UpdateWorkloadShareRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkloadShareRequest
 * class' copy constructor.
 */
UpdateWorkloadShareRequestPrivate::UpdateWorkloadShareRequestPrivate(
    const UpdateWorkloadShareRequestPrivate &other, UpdateWorkloadShareRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
