// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdocumentclassificationjobrequest.h"
#include "startdocumentclassificationjobrequest_p.h"
#include "startdocumentclassificationjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartDocumentClassificationJobRequest
 * \brief The StartDocumentClassificationJobRequest class provides an interface for Comprehend StartDocumentClassificationJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startDocumentClassificationJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartDocumentClassificationJobRequest::StartDocumentClassificationJobRequest(const StartDocumentClassificationJobRequest &other)
    : ComprehendRequest(new StartDocumentClassificationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDocumentClassificationJobRequest object.
 */
StartDocumentClassificationJobRequest::StartDocumentClassificationJobRequest()
    : ComprehendRequest(new StartDocumentClassificationJobRequestPrivate(ComprehendRequest::StartDocumentClassificationJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartDocumentClassificationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDocumentClassificationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDocumentClassificationJobRequest::response(QNetworkReply * const reply) const
{
    return new StartDocumentClassificationJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartDocumentClassificationJobRequestPrivate
 * \brief The StartDocumentClassificationJobRequestPrivate class provides private implementation for StartDocumentClassificationJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartDocumentClassificationJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartDocumentClassificationJobRequestPrivate::StartDocumentClassificationJobRequestPrivate(
    const ComprehendRequest::Action action, StartDocumentClassificationJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDocumentClassificationJobRequest
 * class' copy constructor.
 */
StartDocumentClassificationJobRequestPrivate::StartDocumentClassificationJobRequestPrivate(
    const StartDocumentClassificationJobRequestPrivate &other, StartDocumentClassificationJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
