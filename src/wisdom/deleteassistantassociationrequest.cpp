// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassistantassociationrequest.h"
#include "deleteassistantassociationrequest_p.h"
#include "deleteassistantassociationresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::DeleteAssistantAssociationRequest
 * \brief The DeleteAssistantAssociationRequest class provides an interface for Wisdom DeleteAssistantAssociation requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::deleteAssistantAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAssistantAssociationRequest::DeleteAssistantAssociationRequest(const DeleteAssistantAssociationRequest &other)
    : WisdomRequest(new DeleteAssistantAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssistantAssociationRequest object.
 */
DeleteAssistantAssociationRequest::DeleteAssistantAssociationRequest()
    : WisdomRequest(new DeleteAssistantAssociationRequestPrivate(WisdomRequest::DeleteAssistantAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssistantAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssistantAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssistantAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssistantAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::DeleteAssistantAssociationRequestPrivate
 * \brief The DeleteAssistantAssociationRequestPrivate class provides private implementation for DeleteAssistantAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a DeleteAssistantAssociationRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
DeleteAssistantAssociationRequestPrivate::DeleteAssistantAssociationRequestPrivate(
    const WisdomRequest::Action action, DeleteAssistantAssociationRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssistantAssociationRequest
 * class' copy constructor.
 */
DeleteAssistantAssociationRequestPrivate::DeleteAssistantAssociationRequestPrivate(
    const DeleteAssistantAssociationRequestPrivate &other, DeleteAssistantAssociationRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
