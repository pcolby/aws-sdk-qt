/*
    Copyright 2013-2019 Paul Colby

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

#include "deprecatedomainrequest.h"
#include "deprecatedomainrequest_p.h"
#include "deprecatedomainresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::DeprecateDomainRequest
 * \brief The DeprecateDomainRequest class provides an interface for SWF DeprecateDomain requests.
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
 * \class QtAws::SWF::DeprecateDomainRequestPrivate
 * \brief The DeprecateDomainRequestPrivate class provides private implementation for DeprecateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
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

} // namespace SWF
} // namespace QtAws
