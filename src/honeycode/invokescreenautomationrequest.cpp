// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
