// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassistantassociationrequest.h"
#include "getassistantassociationrequest_p.h"
#include "getassistantassociationresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetAssistantAssociationRequest
 * \brief The GetAssistantAssociationRequest class provides an interface for Wisdom GetAssistantAssociation requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getAssistantAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssistantAssociationRequest::GetAssistantAssociationRequest(const GetAssistantAssociationRequest &other)
    : WisdomRequest(new GetAssistantAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssistantAssociationRequest object.
 */
GetAssistantAssociationRequest::GetAssistantAssociationRequest()
    : WisdomRequest(new GetAssistantAssociationRequestPrivate(WisdomRequest::GetAssistantAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssistantAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssistantAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssistantAssociationRequest::response(QNetworkReply * const reply) const
{
    return new GetAssistantAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::GetAssistantAssociationRequestPrivate
 * \brief The GetAssistantAssociationRequestPrivate class provides private implementation for GetAssistantAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetAssistantAssociationRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
GetAssistantAssociationRequestPrivate::GetAssistantAssociationRequestPrivate(
    const WisdomRequest::Action action, GetAssistantAssociationRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssistantAssociationRequest
 * class' copy constructor.
 */
GetAssistantAssociationRequestPrivate::GetAssistantAssociationRequestPrivate(
    const GetAssistantAssociationRequestPrivate &other, GetAssistantAssociationRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
