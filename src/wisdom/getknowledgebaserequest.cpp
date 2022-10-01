// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getknowledgebaserequest.h"
#include "getknowledgebaserequest_p.h"
#include "getknowledgebaseresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetKnowledgeBaseRequest
 * \brief The GetKnowledgeBaseRequest class provides an interface for Wisdom GetKnowledgeBase requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getKnowledgeBase
 */

/*!
 * Constructs a copy of \a other.
 */
GetKnowledgeBaseRequest::GetKnowledgeBaseRequest(const GetKnowledgeBaseRequest &other)
    : WisdomRequest(new GetKnowledgeBaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetKnowledgeBaseRequest object.
 */
GetKnowledgeBaseRequest::GetKnowledgeBaseRequest()
    : WisdomRequest(new GetKnowledgeBaseRequestPrivate(WisdomRequest::GetKnowledgeBaseAction, this))
{

}

/*!
 * \reimp
 */
bool GetKnowledgeBaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetKnowledgeBaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetKnowledgeBaseRequest::response(QNetworkReply * const reply) const
{
    return new GetKnowledgeBaseResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::GetKnowledgeBaseRequestPrivate
 * \brief The GetKnowledgeBaseRequestPrivate class provides private implementation for GetKnowledgeBaseRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetKnowledgeBaseRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
GetKnowledgeBaseRequestPrivate::GetKnowledgeBaseRequestPrivate(
    const WisdomRequest::Action action, GetKnowledgeBaseRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetKnowledgeBaseRequest
 * class' copy constructor.
 */
GetKnowledgeBaseRequestPrivate::GetKnowledgeBaseRequestPrivate(
    const GetKnowledgeBaseRequestPrivate &other, GetKnowledgeBaseRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
