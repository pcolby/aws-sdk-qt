// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedocumentclassifierrequest.h"
#include "describedocumentclassifierrequest_p.h"
#include "describedocumentclassifierresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeDocumentClassifierRequest
 * \brief The DescribeDocumentClassifierRequest class provides an interface for Comprehend DescribeDocumentClassifier requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeDocumentClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDocumentClassifierRequest::DescribeDocumentClassifierRequest(const DescribeDocumentClassifierRequest &other)
    : ComprehendRequest(new DescribeDocumentClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDocumentClassifierRequest object.
 */
DescribeDocumentClassifierRequest::DescribeDocumentClassifierRequest()
    : ComprehendRequest(new DescribeDocumentClassifierRequestPrivate(ComprehendRequest::DescribeDocumentClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDocumentClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDocumentClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDocumentClassifierRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDocumentClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeDocumentClassifierRequestPrivate
 * \brief The DescribeDocumentClassifierRequestPrivate class provides private implementation for DescribeDocumentClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeDocumentClassifierRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeDocumentClassifierRequestPrivate::DescribeDocumentClassifierRequestPrivate(
    const ComprehendRequest::Action action, DescribeDocumentClassifierRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDocumentClassifierRequest
 * class' copy constructor.
 */
DescribeDocumentClassifierRequestPrivate::DescribeDocumentClassifierRequestPrivate(
    const DescribeDocumentClassifierRequestPrivate &other, DescribeDocumentClassifierRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
