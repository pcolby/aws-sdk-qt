// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deprecatedomainrequest.h"
#include "deprecatedomainrequest_p.h"
#include "deprecatedomainresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DeprecateDomainRequest
 * \brief The DeprecateDomainRequest class provides an interface for Swf DeprecateDomain requests.
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
 * \sa SwfClient::deprecateDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DeprecateDomainRequest::DeprecateDomainRequest(const DeprecateDomainRequest &other)
    : SwfRequest(new DeprecateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeprecateDomainRequest object.
 */
DeprecateDomainRequest::DeprecateDomainRequest()
    : SwfRequest(new DeprecateDomainRequestPrivate(SwfRequest::DeprecateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeprecateDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeprecateDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeprecateDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeprecateDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::DeprecateDomainRequestPrivate
 * \brief The DeprecateDomainRequestPrivate class provides private implementation for DeprecateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DeprecateDomainRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
DeprecateDomainRequestPrivate::DeprecateDomainRequestPrivate(
    const SwfRequest::Action action, DeprecateDomainRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeprecateDomainRequest
 * class' copy constructor.
 */
DeprecateDomainRequestPrivate::DeprecateDomainRequestPrivate(
    const DeprecateDomainRequestPrivate &other, DeprecateDomainRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
