// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkflowtyperequest.h"
#include "describeworkflowtyperequest_p.h"
#include "describeworkflowtyperesponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DescribeWorkflowTypeRequest
 * \brief The DescribeWorkflowTypeRequest class provides an interface for Swf DescribeWorkflowType requests.
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
 * \sa SwfClient::describeWorkflowType
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkflowTypeRequest::DescribeWorkflowTypeRequest(const DescribeWorkflowTypeRequest &other)
    : SwfRequest(new DescribeWorkflowTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkflowTypeRequest object.
 */
DescribeWorkflowTypeRequest::DescribeWorkflowTypeRequest()
    : SwfRequest(new DescribeWorkflowTypeRequestPrivate(SwfRequest::DescribeWorkflowTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkflowTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkflowTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkflowTypeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkflowTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::DescribeWorkflowTypeRequestPrivate
 * \brief The DescribeWorkflowTypeRequestPrivate class provides private implementation for DescribeWorkflowTypeRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DescribeWorkflowTypeRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
DescribeWorkflowTypeRequestPrivate::DescribeWorkflowTypeRequestPrivate(
    const SwfRequest::Action action, DescribeWorkflowTypeRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkflowTypeRequest
 * class' copy constructor.
 */
DescribeWorkflowTypeRequestPrivate::DescribeWorkflowTypeRequestPrivate(
    const DescribeWorkflowTypeRequestPrivate &other, DescribeWorkflowTypeRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
