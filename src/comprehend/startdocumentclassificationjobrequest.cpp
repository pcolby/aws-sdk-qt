/*
    Copyright 2013-2019 Paul Colby

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
