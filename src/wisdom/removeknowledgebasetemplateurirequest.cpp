// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeknowledgebasetemplateurirequest.h"
#include "removeknowledgebasetemplateurirequest_p.h"
#include "removeknowledgebasetemplateuriresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::RemoveKnowledgeBaseTemplateUriRequest
 * \brief The RemoveKnowledgeBaseTemplateUriRequest class provides an interface for Wisdom RemoveKnowledgeBaseTemplateUri requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::removeKnowledgeBaseTemplateUri
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveKnowledgeBaseTemplateUriRequest::RemoveKnowledgeBaseTemplateUriRequest(const RemoveKnowledgeBaseTemplateUriRequest &other)
    : WisdomRequest(new RemoveKnowledgeBaseTemplateUriRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveKnowledgeBaseTemplateUriRequest object.
 */
RemoveKnowledgeBaseTemplateUriRequest::RemoveKnowledgeBaseTemplateUriRequest()
    : WisdomRequest(new RemoveKnowledgeBaseTemplateUriRequestPrivate(WisdomRequest::RemoveKnowledgeBaseTemplateUriAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveKnowledgeBaseTemplateUriRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveKnowledgeBaseTemplateUriResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveKnowledgeBaseTemplateUriRequest::response(QNetworkReply * const reply) const
{
    return new RemoveKnowledgeBaseTemplateUriResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::RemoveKnowledgeBaseTemplateUriRequestPrivate
 * \brief The RemoveKnowledgeBaseTemplateUriRequestPrivate class provides private implementation for RemoveKnowledgeBaseTemplateUriRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a RemoveKnowledgeBaseTemplateUriRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
RemoveKnowledgeBaseTemplateUriRequestPrivate::RemoveKnowledgeBaseTemplateUriRequestPrivate(
    const WisdomRequest::Action action, RemoveKnowledgeBaseTemplateUriRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveKnowledgeBaseTemplateUriRequest
 * class' copy constructor.
 */
RemoveKnowledgeBaseTemplateUriRequestPrivate::RemoveKnowledgeBaseTemplateUriRequestPrivate(
    const RemoveKnowledgeBaseTemplateUriRequestPrivate &other, RemoveKnowledgeBaseTemplateUriRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
