// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteknowledgebaserequest.h"
#include "deleteknowledgebaserequest_p.h"
#include "deleteknowledgebaseresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::DeleteKnowledgeBaseRequest
 * \brief The DeleteKnowledgeBaseRequest class provides an interface for Wisdom DeleteKnowledgeBase requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::deleteKnowledgeBase
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteKnowledgeBaseRequest::DeleteKnowledgeBaseRequest(const DeleteKnowledgeBaseRequest &other)
    : WisdomRequest(new DeleteKnowledgeBaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteKnowledgeBaseRequest object.
 */
DeleteKnowledgeBaseRequest::DeleteKnowledgeBaseRequest()
    : WisdomRequest(new DeleteKnowledgeBaseRequestPrivate(WisdomRequest::DeleteKnowledgeBaseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteKnowledgeBaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteKnowledgeBaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteKnowledgeBaseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteKnowledgeBaseResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::DeleteKnowledgeBaseRequestPrivate
 * \brief The DeleteKnowledgeBaseRequestPrivate class provides private implementation for DeleteKnowledgeBaseRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a DeleteKnowledgeBaseRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
DeleteKnowledgeBaseRequestPrivate::DeleteKnowledgeBaseRequestPrivate(
    const WisdomRequest::Action action, DeleteKnowledgeBaseRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteKnowledgeBaseRequest
 * class' copy constructor.
 */
DeleteKnowledgeBaseRequestPrivate::DeleteKnowledgeBaseRequestPrivate(
    const DeleteKnowledgeBaseRequestPrivate &other, DeleteKnowledgeBaseRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
