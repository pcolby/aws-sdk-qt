// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerdomainrequest.h"
#include "registerdomainrequest_p.h"
#include "registerdomainresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RegisterDomainRequest
 * \brief The RegisterDomainRequest class provides an interface for Swf RegisterDomain requests.
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
 * \sa SwfClient::registerDomain
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterDomainRequest::RegisterDomainRequest(const RegisterDomainRequest &other)
    : SwfRequest(new RegisterDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterDomainRequest object.
 */
RegisterDomainRequest::RegisterDomainRequest()
    : SwfRequest(new RegisterDomainRequestPrivate(SwfRequest::RegisterDomainAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterDomainRequest::response(QNetworkReply * const reply) const
{
    return new RegisterDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::RegisterDomainRequestPrivate
 * \brief The RegisterDomainRequestPrivate class provides private implementation for RegisterDomainRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RegisterDomainRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
RegisterDomainRequestPrivate::RegisterDomainRequestPrivate(
    const SwfRequest::Action action, RegisterDomainRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterDomainRequest
 * class' copy constructor.
 */
RegisterDomainRequestPrivate::RegisterDomainRequestPrivate(
    const RegisterDomainRequestPrivate &other, RegisterDomainRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
