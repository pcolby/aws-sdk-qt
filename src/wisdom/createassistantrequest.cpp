// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassistantrequest.h"
#include "createassistantrequest_p.h"
#include "createassistantresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateAssistantRequest
 * \brief The CreateAssistantRequest class provides an interface for Wisdom CreateAssistant requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createAssistant
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAssistantRequest::CreateAssistantRequest(const CreateAssistantRequest &other)
    : WisdomRequest(new CreateAssistantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAssistantRequest object.
 */
CreateAssistantRequest::CreateAssistantRequest()
    : WisdomRequest(new CreateAssistantRequestPrivate(WisdomRequest::CreateAssistantAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAssistantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAssistantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAssistantRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssistantResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::CreateAssistantRequestPrivate
 * \brief The CreateAssistantRequestPrivate class provides private implementation for CreateAssistantRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateAssistantRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
CreateAssistantRequestPrivate::CreateAssistantRequestPrivate(
    const WisdomRequest::Action action, CreateAssistantRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAssistantRequest
 * class' copy constructor.
 */
CreateAssistantRequestPrivate::CreateAssistantRequestPrivate(
    const CreateAssistantRequestPrivate &other, CreateAssistantRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
