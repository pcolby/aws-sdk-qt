/*
    Copyright 2013-2020 Paul Colby

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

#include "registerworkflowtyperequest.h"
#include "registerworkflowtyperequest_p.h"
#include "registerworkflowtyperesponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::RegisterWorkflowTypeRequest
 * \brief The RegisterWorkflowTypeRequest class provides an interface for SWF RegisterWorkflowType requests.
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
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::registerWorkflowType
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterWorkflowTypeRequest::RegisterWorkflowTypeRequest(const RegisterWorkflowTypeRequest &other)
    : SwfRequest(new RegisterWorkflowTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterWorkflowTypeRequest object.
 */
RegisterWorkflowTypeRequest::RegisterWorkflowTypeRequest()
    : SwfRequest(new RegisterWorkflowTypeRequestPrivate(SwfRequest::RegisterWorkflowTypeAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterWorkflowTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterWorkflowTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterWorkflowTypeRequest::response(QNetworkReply * const reply) const
{
    return new RegisterWorkflowTypeResponse(*this, reply);
}

/*!
 * \class QtAws::SWF::RegisterWorkflowTypeRequestPrivate
 * \brief The RegisterWorkflowTypeRequestPrivate class provides private implementation for RegisterWorkflowTypeRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a RegisterWorkflowTypeRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
RegisterWorkflowTypeRequestPrivate::RegisterWorkflowTypeRequestPrivate(
    const SwfRequest::Action action, RegisterWorkflowTypeRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterWorkflowTypeRequest
 * class' copy constructor.
 */
RegisterWorkflowTypeRequestPrivate::RegisterWorkflowTypeRequestPrivate(
    const RegisterWorkflowTypeRequestPrivate &other, RegisterWorkflowTypeRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
