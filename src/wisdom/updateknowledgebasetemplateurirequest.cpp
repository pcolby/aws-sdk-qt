// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateknowledgebasetemplateurirequest.h"
#include "updateknowledgebasetemplateurirequest_p.h"
#include "updateknowledgebasetemplateuriresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::UpdateKnowledgeBaseTemplateUriRequest
 * \brief The UpdateKnowledgeBaseTemplateUriRequest class provides an interface for Wisdom UpdateKnowledgeBaseTemplateUri requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::updateKnowledgeBaseTemplateUri
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateKnowledgeBaseTemplateUriRequest::UpdateKnowledgeBaseTemplateUriRequest(const UpdateKnowledgeBaseTemplateUriRequest &other)
    : WisdomRequest(new UpdateKnowledgeBaseTemplateUriRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateKnowledgeBaseTemplateUriRequest object.
 */
UpdateKnowledgeBaseTemplateUriRequest::UpdateKnowledgeBaseTemplateUriRequest()
    : WisdomRequest(new UpdateKnowledgeBaseTemplateUriRequestPrivate(WisdomRequest::UpdateKnowledgeBaseTemplateUriAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateKnowledgeBaseTemplateUriRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateKnowledgeBaseTemplateUriResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateKnowledgeBaseTemplateUriRequest::response(QNetworkReply * const reply) const
{
    return new UpdateKnowledgeBaseTemplateUriResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::UpdateKnowledgeBaseTemplateUriRequestPrivate
 * \brief The UpdateKnowledgeBaseTemplateUriRequestPrivate class provides private implementation for UpdateKnowledgeBaseTemplateUriRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a UpdateKnowledgeBaseTemplateUriRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
UpdateKnowledgeBaseTemplateUriRequestPrivate::UpdateKnowledgeBaseTemplateUriRequestPrivate(
    const WisdomRequest::Action action, UpdateKnowledgeBaseTemplateUriRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateKnowledgeBaseTemplateUriRequest
 * class' copy constructor.
 */
UpdateKnowledgeBaseTemplateUriRequestPrivate::UpdateKnowledgeBaseTemplateUriRequestPrivate(
    const UpdateKnowledgeBaseTemplateUriRequestPrivate &other, UpdateKnowledgeBaseTemplateUriRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
