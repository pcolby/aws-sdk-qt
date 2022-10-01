// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassistantassociationrequest.h"
#include "createassistantassociationrequest_p.h"
#include "createassistantassociationresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateAssistantAssociationRequest
 * \brief The CreateAssistantAssociationRequest class provides an interface for Wisdom CreateAssistantAssociation requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createAssistantAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAssistantAssociationRequest::CreateAssistantAssociationRequest(const CreateAssistantAssociationRequest &other)
    : WisdomRequest(new CreateAssistantAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAssistantAssociationRequest object.
 */
CreateAssistantAssociationRequest::CreateAssistantAssociationRequest()
    : WisdomRequest(new CreateAssistantAssociationRequestPrivate(WisdomRequest::CreateAssistantAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAssistantAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAssistantAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAssistantAssociationRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssistantAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::CreateAssistantAssociationRequestPrivate
 * \brief The CreateAssistantAssociationRequestPrivate class provides private implementation for CreateAssistantAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateAssistantAssociationRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
CreateAssistantAssociationRequestPrivate::CreateAssistantAssociationRequestPrivate(
    const WisdomRequest::Action action, CreateAssistantAssociationRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAssistantAssociationRequest
 * class' copy constructor.
 */
CreateAssistantAssociationRequestPrivate::CreateAssistantAssociationRequestPrivate(
    const CreateAssistantAssociationRequestPrivate &other, CreateAssistantAssociationRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
