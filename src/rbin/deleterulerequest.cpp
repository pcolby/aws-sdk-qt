// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterulerequest.h"
#include "deleterulerequest_p.h"
#include "deleteruleresponse.h"
#include "rbinrequest_p.h"

namespace QtAws {
namespace Rbin {

/*!
 * \class QtAws::Rbin::DeleteRuleRequest
 * \brief The DeleteRuleRequest class provides an interface for Rbin DeleteRule requests.
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
 * \sa RbinClient::deleteRule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRuleRequest::DeleteRuleRequest(const DeleteRuleRequest &other)
    : RbinRequest(new DeleteRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRuleRequest object.
 */
DeleteRuleRequest::DeleteRuleRequest()
    : RbinRequest(new DeleteRuleRequestPrivate(RbinRequest::DeleteRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Rbin::DeleteRuleRequestPrivate
 * \brief The DeleteRuleRequestPrivate class provides private implementation for DeleteRuleRequest.
 * \internal
 *
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a DeleteRuleRequestPrivate object for Rbin \a action,
 * with public implementation \a q.
 */
DeleteRuleRequestPrivate::DeleteRuleRequestPrivate(
    const RbinRequest::Action action, DeleteRuleRequest * const q)
    : RbinRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRuleRequest
 * class' copy constructor.
 */
DeleteRuleRequestPrivate::DeleteRuleRequestPrivate(
    const DeleteRuleRequestPrivate &other, DeleteRuleRequest * const q)
    : RbinRequestPrivate(other, q)
{

}

} // namespace Rbin
} // namespace QtAws
