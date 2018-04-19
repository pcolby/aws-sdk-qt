/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "countopenworkflowexecutionsrequest.h"
#include "countopenworkflowexecutionsrequest_p.h"
#include "countopenworkflowexecutionsresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::CountOpenWorkflowExecutionsRequest
 * \brief The CountOpenWorkflowExecutionsRequest class provides an interface for SWF CountOpenWorkflowExecutions requests.
 *
 * \inmodule QtAwsSWF
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
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SWFClient::countOpenWorkflowExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
CountOpenWorkflowExecutionsRequest::CountOpenWorkflowExecutionsRequest(const CountOpenWorkflowExecutionsRequest &other)
    : SWFRequest(new CountOpenWorkflowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CountOpenWorkflowExecutionsRequest object.
 */
CountOpenWorkflowExecutionsRequest::CountOpenWorkflowExecutionsRequest()
    : SWFRequest(new CountOpenWorkflowExecutionsRequestPrivate(SWFRequest::CountOpenWorkflowExecutionsAction, this))
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
 * \class QtAws::SWF::CountOpenWorkflowExecutionsRequestPrivate
 * \brief The CountOpenWorkflowExecutionsRequestPrivate class provides private implementation for CountOpenWorkflowExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 *
 * Constructs a CountOpenWorkflowExecutionsRequestPrivate object for SWF \a action with,
 * public implementation \a q.
 */
CountOpenWorkflowExecutionsRequestPrivate::CountOpenWorkflowExecutionsRequestPrivate(
    const SWFRequest::Action action, CountOpenWorkflowExecutionsRequest * const q)
    : SWFRequestPrivate(action, q)
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
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
