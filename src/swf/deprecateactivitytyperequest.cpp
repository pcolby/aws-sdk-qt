// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deprecateactivitytyperequest.h"
#include "deprecateactivitytyperequest_p.h"
#include "deprecateactivitytyperesponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DeprecateActivityTypeRequest
 * \brief The DeprecateActivityTypeRequest class provides an interface for Swf DeprecateActivityType requests.
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
 * \sa SwfClient::deprecateActivityType
 */

/*!
 * Constructs a copy of \a other.
 */
DeprecateActivityTypeRequest::DeprecateActivityTypeRequest(const DeprecateActivityTypeRequest &other)
    : SwfRequest(new DeprecateActivityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeprecateActivityTypeRequest object.
 */
DeprecateActivityTypeRequest::DeprecateActivityTypeRequest()
    : SwfRequest(new DeprecateActivityTypeRequestPrivate(SwfRequest::DeprecateActivityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeprecateActivityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeprecateActivityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeprecateActivityTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeprecateActivityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::DeprecateActivityTypeRequestPrivate
 * \brief The DeprecateActivityTypeRequestPrivate class provides private implementation for DeprecateActivityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DeprecateActivityTypeRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
DeprecateActivityTypeRequestPrivate::DeprecateActivityTypeRequestPrivate(
    const SwfRequest::Action action, DeprecateActivityTypeRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeprecateActivityTypeRequest
 * class' copy constructor.
 */
DeprecateActivityTypeRequestPrivate::DeprecateActivityTypeRequestPrivate(
    const DeprecateActivityTypeRequestPrivate &other, DeprecateActivityTypeRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
