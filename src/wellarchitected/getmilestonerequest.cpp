// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmilestonerequest.h"
#include "getmilestonerequest_p.h"
#include "getmilestoneresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetMilestoneRequest
 * \brief The GetMilestoneRequest class provides an interface for WellArchitected GetMilestone requests.
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
 * \sa WellArchitectedClient::getMilestone
 */

/*!
 * Constructs a copy of \a other.
 */
GetMilestoneRequest::GetMilestoneRequest(const GetMilestoneRequest &other)
    : WellArchitectedRequest(new GetMilestoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMilestoneRequest object.
 */
GetMilestoneRequest::GetMilestoneRequest()
    : WellArchitectedRequest(new GetMilestoneRequestPrivate(WellArchitectedRequest::GetMilestoneAction, this))
{

}

/*!
 * \reimp
 */
bool GetMilestoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMilestoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMilestoneRequest::response(QNetworkReply * const reply) const
{
    return new GetMilestoneResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::GetMilestoneRequestPrivate
 * \brief The GetMilestoneRequestPrivate class provides private implementation for GetMilestoneRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetMilestoneRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
GetMilestoneRequestPrivate::GetMilestoneRequestPrivate(
    const WellArchitectedRequest::Action action, GetMilestoneRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMilestoneRequest
 * class' copy constructor.
 */
GetMilestoneRequestPrivate::GetMilestoneRequestPrivate(
    const GetMilestoneRequestPrivate &other, GetMilestoneRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
