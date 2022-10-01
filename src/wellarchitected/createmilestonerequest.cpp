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

#include "createmilestonerequest.h"
#include "createmilestonerequest_p.h"
#include "createmilestoneresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateMilestoneRequest
 * \brief The CreateMilestoneRequest class provides an interface for WellArchitected CreateMilestone requests.
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
 * \sa WellArchitectedClient::createMilestone
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMilestoneRequest::CreateMilestoneRequest(const CreateMilestoneRequest &other)
    : WellArchitectedRequest(new CreateMilestoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMilestoneRequest object.
 */
CreateMilestoneRequest::CreateMilestoneRequest()
    : WellArchitectedRequest(new CreateMilestoneRequestPrivate(WellArchitectedRequest::CreateMilestoneAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMilestoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMilestoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMilestoneRequest::response(QNetworkReply * const reply) const
{
    return new CreateMilestoneResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::CreateMilestoneRequestPrivate
 * \brief The CreateMilestoneRequestPrivate class provides private implementation for CreateMilestoneRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateMilestoneRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
CreateMilestoneRequestPrivate::CreateMilestoneRequestPrivate(
    const WellArchitectedRequest::Action action, CreateMilestoneRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMilestoneRequest
 * class' copy constructor.
 */
CreateMilestoneRequestPrivate::CreateMilestoneRequestPrivate(
    const CreateMilestoneRequestPrivate &other, CreateMilestoneRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
