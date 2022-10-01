// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "queryassistantrequest.h"
#include "queryassistantrequest_p.h"
#include "queryassistantresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::QueryAssistantRequest
 * \brief The QueryAssistantRequest class provides an interface for Wisdom QueryAssistant requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::queryAssistant
 */

/*!
 * Constructs a copy of \a other.
 */
QueryAssistantRequest::QueryAssistantRequest(const QueryAssistantRequest &other)
    : WisdomRequest(new QueryAssistantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QueryAssistantRequest object.
 */
QueryAssistantRequest::QueryAssistantRequest()
    : WisdomRequest(new QueryAssistantRequestPrivate(WisdomRequest::QueryAssistantAction, this))
{

}

/*!
 * \reimp
 */
bool QueryAssistantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a QueryAssistantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryAssistantRequest::response(QNetworkReply * const reply) const
{
    return new QueryAssistantResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::QueryAssistantRequestPrivate
 * \brief The QueryAssistantRequestPrivate class provides private implementation for QueryAssistantRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a QueryAssistantRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
QueryAssistantRequestPrivate::QueryAssistantRequestPrivate(
    const WisdomRequest::Action action, QueryAssistantRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the QueryAssistantRequest
 * class' copy constructor.
 */
QueryAssistantRequestPrivate::QueryAssistantRequestPrivate(
    const QueryAssistantRequestPrivate &other, QueryAssistantRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
