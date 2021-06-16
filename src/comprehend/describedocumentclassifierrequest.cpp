/*
    Copyright 2013-2021 Paul Colby

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
