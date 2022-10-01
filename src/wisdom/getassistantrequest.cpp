// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassistantrequest.h"
#include "getassistantrequest_p.h"
#include "getassistantresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetAssistantRequest
 * \brief The GetAssistantRequest class provides an interface for Wisdom GetAssistant requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getAssistant
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssistantRequest::GetAssistantRequest(const GetAssistantRequest &other)
    : WisdomRequest(new GetAssistantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssistantRequest object.
 */
GetAssistantRequest::GetAssistantRequest()
    : WisdomRequest(new GetAssistantRequestPrivate(WisdomRequest::GetAssistantAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssistantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssistantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssistantRequest::response(QNetworkReply * const reply) const
{
    return new GetAssistantResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::GetAssistantRequestPrivate
 * \brief The GetAssistantRequestPrivate class provides private implementation for GetAssistantRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetAssistantRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
GetAssistantRequestPrivate::GetAssistantRequestPrivate(
    const WisdomRequest::Action action, GetAssistantRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssistantRequest
 * class' copy constructor.
 */
GetAssistantRequestPrivate::GetAssistantRequestPrivate(
    const GetAssistantRequestPrivate &other, GetAssistantRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
