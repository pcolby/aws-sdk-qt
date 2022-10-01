// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdocumentclassifierrequest.h"
#include "createdocumentclassifierrequest_p.h"
#include "createdocumentclassifierresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::CreateDocumentClassifierRequest
 * \brief The CreateDocumentClassifierRequest class provides an interface for Comprehend CreateDocumentClassifier requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::createDocumentClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDocumentClassifierRequest::CreateDocumentClassifierRequest(const CreateDocumentClassifierRequest &other)
    : ComprehendRequest(new CreateDocumentClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDocumentClassifierRequest object.
 */
CreateDocumentClassifierRequest::CreateDocumentClassifierRequest()
    : ComprehendRequest(new CreateDocumentClassifierRequestPrivate(ComprehendRequest::CreateDocumentClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDocumentClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDocumentClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDocumentClassifierRequest::response(QNetworkReply * const reply) const
{
    return new CreateDocumentClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::CreateDocumentClassifierRequestPrivate
 * \brief The CreateDocumentClassifierRequestPrivate class provides private implementation for CreateDocumentClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a CreateDocumentClassifierRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
CreateDocumentClassifierRequestPrivate::CreateDocumentClassifierRequestPrivate(
    const ComprehendRequest::Action action, CreateDocumentClassifierRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDocumentClassifierRequest
 * class' copy constructor.
 */
CreateDocumentClassifierRequestPrivate::CreateDocumentClassifierRequestPrivate(
    const CreateDocumentClassifierRequestPrivate &other, CreateDocumentClassifierRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
