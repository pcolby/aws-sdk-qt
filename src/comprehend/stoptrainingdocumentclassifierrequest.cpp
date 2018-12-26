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
