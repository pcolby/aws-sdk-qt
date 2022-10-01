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

#include "batchgetdocumentstatusrequest.h"
#include "batchgetdocumentstatusrequest_p.h"
#include "batchgetdocumentstatusresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::BatchGetDocumentStatusRequest
 * \brief The BatchGetDocumentStatusRequest class provides an interface for Kendra BatchGetDocumentStatus requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::batchGetDocumentStatus
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetDocumentStatusRequest::BatchGetDocumentStatusRequest(const BatchGetDocumentStatusRequest &other)
    : KendraRequest(new BatchGetDocumentStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetDocumentStatusRequest object.
 */
BatchGetDocumentStatusRequest::BatchGetDocumentStatusRequest()
    : KendraRequest(new BatchGetDocumentStatusRequestPrivate(KendraRequest::BatchGetDocumentStatusAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetDocumentStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetDocumentStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetDocumentStatusRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetDocumentStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::BatchGetDocumentStatusRequestPrivate
 * \brief The BatchGetDocumentStatusRequestPrivate class provides private implementation for BatchGetDocumentStatusRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a BatchGetDocumentStatusRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
BatchGetDocumentStatusRequestPrivate::BatchGetDocumentStatusRequestPrivate(
    const KendraRequest::Action action, BatchGetDocumentStatusRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetDocumentStatusRequest
 * class' copy constructor.
 */
BatchGetDocumentStatusRequestPrivate::BatchGetDocumentStatusRequestPrivate(
    const BatchGetDocumentStatusRequestPrivate &other, BatchGetDocumentStatusRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
