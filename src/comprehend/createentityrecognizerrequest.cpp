// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createentityrecognizerrequest.h"
#include "createentityrecognizerrequest_p.h"
#include "createentityrecognizerresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::CreateEntityRecognizerRequest
 * \brief The CreateEntityRecognizerRequest class provides an interface for Comprehend CreateEntityRecognizer requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::createEntityRecognizer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEntityRecognizerRequest::CreateEntityRecognizerRequest(const CreateEntityRecognizerRequest &other)
    : ComprehendRequest(new CreateEntityRecognizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEntityRecognizerRequest object.
 */
CreateEntityRecognizerRequest::CreateEntityRecognizerRequest()
    : ComprehendRequest(new CreateEntityRecognizerRequestPrivate(ComprehendRequest::CreateEntityRecognizerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEntityRecognizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEntityRecognizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEntityRecognizerRequest::response(QNetworkReply * const reply) const
{
    return new CreateEntityRecognizerResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::CreateEntityRecognizerRequestPrivate
 * \brief The CreateEntityRecognizerRequestPrivate class provides private implementation for CreateEntityRecognizerRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a CreateEntityRecognizerRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
CreateEntityRecognizerRequestPrivate::CreateEntityRecognizerRequestPrivate(
    const ComprehendRequest::Action action, CreateEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEntityRecognizerRequest
 * class' copy constructor.
 */
CreateEntityRecognizerRequestPrivate::CreateEntityRecognizerRequestPrivate(
    const CreateEntityRecognizerRequestPrivate &other, CreateEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
