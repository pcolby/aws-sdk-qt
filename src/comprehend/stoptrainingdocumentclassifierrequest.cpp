// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptrainingdocumentclassifierrequest.h"
#include "stoptrainingdocumentclassifierrequest_p.h"
#include "stoptrainingdocumentclassifierresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopTrainingDocumentClassifierRequest
 * \brief The StopTrainingDocumentClassifierRequest class provides an interface for Comprehend StopTrainingDocumentClassifier requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopTrainingDocumentClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
StopTrainingDocumentClassifierRequest::StopTrainingDocumentClassifierRequest(const StopTrainingDocumentClassifierRequest &other)
    : ComprehendRequest(new StopTrainingDocumentClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTrainingDocumentClassifierRequest object.
 */
StopTrainingDocumentClassifierRequest::StopTrainingDocumentClassifierRequest()
    : ComprehendRequest(new StopTrainingDocumentClassifierRequestPrivate(ComprehendRequest::StopTrainingDocumentClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool StopTrainingDocumentClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTrainingDocumentClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTrainingDocumentClassifierRequest::response(QNetworkReply * const reply) const
{
    return new StopTrainingDocumentClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopTrainingDocumentClassifierRequestPrivate
 * \brief The StopTrainingDocumentClassifierRequestPrivate class provides private implementation for StopTrainingDocumentClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopTrainingDocumentClassifierRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopTrainingDocumentClassifierRequestPrivate::StopTrainingDocumentClassifierRequestPrivate(
    const ComprehendRequest::Action action, StopTrainingDocumentClassifierRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTrainingDocumentClassifierRequest
 * class' copy constructor.
 */
StopTrainingDocumentClassifierRequestPrivate::StopTrainingDocumentClassifierRequestPrivate(
    const StopTrainingDocumentClassifierRequestPrivate &other, StopTrainingDocumentClassifierRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
