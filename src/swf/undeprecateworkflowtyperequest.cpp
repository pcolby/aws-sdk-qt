// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "undeprecateworkflowtyperequest.h"
#include "undeprecateworkflowtyperequest_p.h"
#include "undeprecateworkflowtyperesponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::UndeprecateWorkflowTypeRequest
 * \brief The UndeprecateWorkflowTypeRequest class provides an interface for Swf UndeprecateWorkflowType requests.
 *
 * \inmodule QtAwsSwf
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::undeprecateWorkflowType
 */

/*!
 * Constructs a copy of \a other.
 */
UndeprecateWorkflowTypeRequest::UndeprecateWorkflowTypeRequest(const UndeprecateWorkflowTypeRequest &other)
    : SwfRequest(new UndeprecateWorkflowTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UndeprecateWorkflowTypeRequest object.
 */
UndeprecateWorkflowTypeRequest::UndeprecateWorkflowTypeRequest()
    : SwfRequest(new UndeprecateWorkflowTypeRequestPrivate(SwfRequest::UndeprecateWorkflowTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UndeprecateWorkflowTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UndeprecateWorkflowTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UndeprecateWorkflowTypeRequest::response(QNetworkReply * const reply) const
{
    return new UndeprecateWorkflowTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::UndeprecateWorkflowTypeRequestPrivate
 * \brief The UndeprecateWorkflowTypeRequestPrivate class provides private implementation for UndeprecateWorkflowTypeRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a UndeprecateWorkflowTypeRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
UndeprecateWorkflowTypeRequestPrivate::UndeprecateWorkflowTypeRequestPrivate(
    const SwfRequest::Action action, UndeprecateWorkflowTypeRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UndeprecateWorkflowTypeRequest
 * class' copy constructor.
 */
UndeprecateWorkflowTypeRequestPrivate::UndeprecateWorkflowTypeRequestPrivate(
    const UndeprecateWorkflowTypeRequestPrivate &other, UndeprecateWorkflowTypeRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
