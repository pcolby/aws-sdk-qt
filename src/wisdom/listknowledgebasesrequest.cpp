// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listknowledgebasesrequest.h"
#include "listknowledgebasesrequest_p.h"
#include "listknowledgebasesresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::ListKnowledgeBasesRequest
 * \brief The ListKnowledgeBasesRequest class provides an interface for Wisdom ListKnowledgeBases requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::listKnowledgeBases
 */

/*!
 * Constructs a copy of \a other.
 */
ListKnowledgeBasesRequest::ListKnowledgeBasesRequest(const ListKnowledgeBasesRequest &other)
    : WisdomRequest(new ListKnowledgeBasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListKnowledgeBasesRequest object.
 */
ListKnowledgeBasesRequest::ListKnowledgeBasesRequest()
    : WisdomRequest(new ListKnowledgeBasesRequestPrivate(WisdomRequest::ListKnowledgeBasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListKnowledgeBasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListKnowledgeBasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListKnowledgeBasesRequest::response(QNetworkReply * const reply) const
{
    return new ListKnowledgeBasesResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::ListKnowledgeBasesRequestPrivate
 * \brief The ListKnowledgeBasesRequestPrivate class provides private implementation for ListKnowledgeBasesRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a ListKnowledgeBasesRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
ListKnowledgeBasesRequestPrivate::ListKnowledgeBasesRequestPrivate(
    const WisdomRequest::Action action, ListKnowledgeBasesRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListKnowledgeBasesRequest
 * class' copy constructor.
 */
ListKnowledgeBasesRequestPrivate::ListKnowledgeBasesRequestPrivate(
    const ListKnowledgeBasesRequestPrivate &other, ListKnowledgeBasesRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
