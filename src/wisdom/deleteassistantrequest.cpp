// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassistantrequest.h"
#include "deleteassistantrequest_p.h"
#include "deleteassistantresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::DeleteAssistantRequest
 * \brief The DeleteAssistantRequest class provides an interface for Wisdom DeleteAssistant requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::deleteAssistant
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAssistantRequest::DeleteAssistantRequest(const DeleteAssistantRequest &other)
    : WisdomRequest(new DeleteAssistantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssistantRequest object.
 */
DeleteAssistantRequest::DeleteAssistantRequest()
    : WisdomRequest(new DeleteAssistantRequestPrivate(WisdomRequest::DeleteAssistantAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssistantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssistantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssistantRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssistantResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::DeleteAssistantRequestPrivate
 * \brief The DeleteAssistantRequestPrivate class provides private implementation for DeleteAssistantRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a DeleteAssistantRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
DeleteAssistantRequestPrivate::DeleteAssistantRequestPrivate(
    const WisdomRequest::Action action, DeleteAssistantRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssistantRequest
 * class' copy constructor.
 */
DeleteAssistantRequestPrivate::DeleteAssistantRequestPrivate(
    const DeleteAssistantRequestPrivate &other, DeleteAssistantRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
