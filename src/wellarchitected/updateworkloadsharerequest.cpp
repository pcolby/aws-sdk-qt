// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
