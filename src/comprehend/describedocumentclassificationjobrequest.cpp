/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
