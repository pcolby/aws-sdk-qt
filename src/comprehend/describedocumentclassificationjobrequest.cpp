// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedocumentclassificationjobrequest.h"
#include "describedocumentclassificationjobrequest_p.h"
#include "describedocumentclassificationjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeDocumentClassificationJobRequest
 * \brief The DescribeDocumentClassificationJobRequest class provides an interface for Comprehend DescribeDocumentClassificationJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeDocumentClassificationJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDocumentClassificationJobRequest::DescribeDocumentClassificationJobRequest(const DescribeDocumentClassificationJobRequest &other)
    : ComprehendRequest(new DescribeDocumentClassificationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDocumentClassificationJobRequest object.
 */
DescribeDocumentClassificationJobRequest::DescribeDocumentClassificationJobRequest()
    : ComprehendRequest(new DescribeDocumentClassificationJobRequestPrivate(ComprehendRequest::DescribeDocumentClassificationJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDocumentClassificationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDocumentClassificationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDocumentClassificationJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDocumentClassificationJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeDocumentClassificationJobRequestPrivate
 * \brief The DescribeDocumentClassificationJobRequestPrivate class provides private implementation for DescribeDocumentClassificationJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeDocumentClassificationJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeDocumentClassificationJobRequestPrivate::DescribeDocumentClassificationJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeDocumentClassificationJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDocumentClassificationJobRequest
 * class' copy constructor.
 */
DescribeDocumentClassificationJobRequestPrivate::DescribeDocumentClassificationJobRequestPrivate(
    const DescribeDocumentClassificationJobRequestPrivate &other, DescribeDocumentClassificationJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
