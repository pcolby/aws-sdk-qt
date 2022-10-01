// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "countopenworkflowexecutionsrequest.h"
#include "countopenworkflowexecutionsrequest_p.h"
#include "countopenworkflowexecutionsresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::CountOpenWorkflowExecutionsRequest
 * \brief The CountOpenWorkflowExecutionsRequest class provides an interface for Swf CountOpenWorkflowExecutions requests.
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
 * \sa SwfClient::countOpenWorkflowExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
CountOpenWorkflowExecutionsRequest::CountOpenWorkflowExecutionsRequest(const CountOpenWorkflowExecutionsRequest &other)
    : SwfRequest(new CountOpenWorkflowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CountOpenWorkflowExecutionsRequest object.
 */
CountOpenWorkflowExecutionsRequest::CountOpenWorkflowExecutionsRequest()
    : SwfRequest(new CountOpenWorkflowExecutionsRequestPrivate(SwfRequest::CountOpenWorkflowExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool CountOpenWorkflowExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CountOpenWorkflowExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CountOpenWorkflowExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new CountOpenWorkflowExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::CountOpenWorkflowExecutionsRequestPrivate
 * \brief The CountOpenWorkflowExecutionsRequestPrivate class provides private implementation for CountOpenWorkflowExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a CountOpenWorkflowExecutionsRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
CountOpenWorkflowExecutionsRequestPrivate::CountOpenWorkflowExecutionsRequestPrivate(
    const SwfRequest::Action action, CountOpenWorkflowExecutionsRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CountOpenWorkflowExecutionsRequest
 * class' copy constructor.
 */
CountOpenWorkflowExecutionsRequestPrivate::CountOpenWorkflowExecutionsRequestPrivate(
    const CountOpenWorkflowExecutionsRequestPrivate &other, CountOpenWorkflowExecutionsRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
