// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterulerequest.h"
#include "updaterulerequest_p.h"
#include "updateruleresponse.h"
#include "rbinrequest_p.h"

namespace QtAws {
namespace Rbin {

/*!
 * \class QtAws::Rbin::UpdateRuleRequest
 * \brief The UpdateRuleRequest class provides an interface for Rbin UpdateRule requests.
 *
 * \inmodule QtAwsRbin
 *
 *  This is the <i>Recycle Bin API Reference</i>. This documentation provides descriptions and syntax for each of the
 *  actions and data types in Recycle
 * 
 *  Bin>
 * 
 *  Recycle Bin is a resource recovery feature that enables you to restore accidentally deleted snapshots and EBS-backed
 *  AMIs. When using Recycle Bin, if your resources are deleted, they are retained in the Recycle Bin for a time period that
 *  you
 * 
 *  specify>
 * 
 *  You can restore a resource from the Recycle Bin at any time before its retention period expires. After you restore a
 *  resource from the Recycle Bin, the resource is removed from the Recycle Bin, and you can then use it in the same way you
 *  use any other resource of that type in your account. If the retention period expires and the resource is not restored,
 *  the resource is permanently deleted from the Recycle Bin and is no longer available for recovery. For more information
 *  about Recycle Bin, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-recycle-bin.html"> Recycle
 *  Bin</a> in the <i>Amazon Elastic Compute Cloud User
 *
 * \sa RbinClient::updateRule
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRuleRequest::UpdateRuleRequest(const UpdateRuleRequest &other)
    : RbinRequest(new UpdateRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRuleRequest object.
 */
UpdateRuleRequest::UpdateRuleRequest()
    : RbinRequest(new UpdateRuleRequestPrivate(RbinRequest::UpdateRuleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRuleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Rbin::UpdateRuleRequestPrivate
 * \brief The UpdateRuleRequestPrivate class provides private implementation for UpdateRuleRequest.
 * \internal
 *
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a UpdateRuleRequestPrivate object for Rbin \a action,
 * with public implementation \a q.
 */
UpdateRuleRequestPrivate::UpdateRuleRequestPrivate(
    const RbinRequest::Action action, UpdateRuleRequest * const q)
    : RbinRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRuleRequest
 * class' copy constructor.
 */
UpdateRuleRequestPrivate::UpdateRuleRequestPrivate(
    const UpdateRuleRequestPrivate &other, UpdateRuleRequest * const q)
    : RbinRequestPrivate(other, q)
{

}

} // namespace Rbin
} // namespace QtAws
