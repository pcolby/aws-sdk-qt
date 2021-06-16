/*
    Copyright 2013-2021 Paul Colby

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

#include "invokescreenautomationrequest.h"
#include "invokescreenautomationrequest_p.h"
#include "invokescreenautomationresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::InvokeScreenAutomationRequest
 * \brief The InvokeScreenAutomationRequest class provides an interface for Honeycode InvokeScreenAutomation requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::invokeScreenAutomation
 */

/*!
 * Constructs a copy of \a other.
 */
InvokeScreenAutomationRequest::InvokeScreenAutomationRequest(const InvokeScreenAutomationRequest &other)
    : HoneycodeRequest(new InvokeScreenAutomationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InvokeScreenAutomationRequest object.
 */
InvokeScreenAutomationRequest::InvokeScreenAutomationRequest()
    : HoneycodeRequest(new InvokeScreenAutomationRequestPrivate(HoneycodeRequest::InvokeScreenAutomationAction, this))
{

}

/*!
 * \reimp
 */
bool InvokeScreenAutomationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InvokeScreenAutomationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InvokeScreenAutomationRequest::response(QNetworkReply * const reply) const
{
    return new InvokeScreenAutomationResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::InvokeScreenAutomationRequestPrivate
 * \brief The InvokeScreenAutomationRequestPrivate class provides private implementation for InvokeScreenAutomationRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a InvokeScreenAutomationRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
InvokeScreenAutomationRequestPrivate::InvokeScreenAutomationRequestPrivate(
    const HoneycodeRequest::Action action, InvokeScreenAutomationRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InvokeScreenAutomationRequest
 * class' copy constructor.
 */
InvokeScreenAutomationRequestPrivate::InvokeScreenAutomationRequestPrivate(
    const InvokeScreenAutomationRequestPrivate &other, InvokeScreenAutomationRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
