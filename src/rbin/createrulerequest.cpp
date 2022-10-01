// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrulerequest.h"
#include "createrulerequest_p.h"
#include "createruleresponse.h"
#include "rbinrequest_p.h"

namespace QtAws {
namespace Rbin {

/*!
 * \class QtAws::Rbin::CreateRuleRequest
 * \brief The CreateRuleRequest class provides an interface for Rbin CreateRule requests.
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
 * \sa RbinClient::createRule
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRuleRequest::CreateRuleRequest(const CreateRuleRequest &other)
    : RbinRequest(new CreateRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRuleRequest object.
 */
CreateRuleRequest::CreateRuleRequest()
    : RbinRequest(new CreateRuleRequestPrivate(RbinRequest::CreateRuleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Rbin::CreateRuleRequestPrivate
 * \brief The CreateRuleRequestPrivate class provides private implementation for CreateRuleRequest.
 * \internal
 *
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a CreateRuleRequestPrivate object for Rbin \a action,
 * with public implementation \a q.
 */
CreateRuleRequestPrivate::CreateRuleRequestPrivate(
    const RbinRequest::Action action, CreateRuleRequest * const q)
    : RbinRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRuleRequest
 * class' copy constructor.
 */
CreateRuleRequestPrivate::CreateRuleRequestPrivate(
    const CreateRuleRequestPrivate &other, CreateRuleRequest * const q)
    : RbinRequestPrivate(other, q)
{

}

} // namespace Rbin
} // namespace QtAws
