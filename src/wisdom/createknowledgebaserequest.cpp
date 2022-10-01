// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createknowledgebaserequest.h"
#include "createknowledgebaserequest_p.h"
#include "createknowledgebaseresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateKnowledgeBaseRequest
 * \brief The CreateKnowledgeBaseRequest class provides an interface for Wisdom CreateKnowledgeBase requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createKnowledgeBase
 */

/*!
 * Constructs a copy of \a other.
 */
CreateKnowledgeBaseRequest::CreateKnowledgeBaseRequest(const CreateKnowledgeBaseRequest &other)
    : WisdomRequest(new CreateKnowledgeBaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateKnowledgeBaseRequest object.
 */
CreateKnowledgeBaseRequest::CreateKnowledgeBaseRequest()
    : WisdomRequest(new CreateKnowledgeBaseRequestPrivate(WisdomRequest::CreateKnowledgeBaseAction, this))
{

}

/*!
 * \reimp
 */
bool CreateKnowledgeBaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateKnowledgeBaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateKnowledgeBaseRequest::response(QNetworkReply * const reply) const
{
    return new CreateKnowledgeBaseResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::CreateKnowledgeBaseRequestPrivate
 * \brief The CreateKnowledgeBaseRequestPrivate class provides private implementation for CreateKnowledgeBaseRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateKnowledgeBaseRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
CreateKnowledgeBaseRequestPrivate::CreateKnowledgeBaseRequestPrivate(
    const WisdomRequest::Action action, CreateKnowledgeBaseRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateKnowledgeBaseRequest
 * class' copy constructor.
 */
CreateKnowledgeBaseRequestPrivate::CreateKnowledgeBaseRequestPrivate(
    const CreateKnowledgeBaseRequestPrivate &other, CreateKnowledgeBaseRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
