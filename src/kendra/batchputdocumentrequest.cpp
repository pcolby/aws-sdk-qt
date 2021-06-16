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

#include "batchputdocumentrequest.h"
#include "batchputdocumentrequest_p.h"
#include "batchputdocumentresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::BatchPutDocumentRequest
 * \brief The BatchPutDocumentRequest class provides an interface for kendra BatchPutDocument requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::batchPutDocument
 */

/*!
 * Constructs a copy of \a other.
 */
BatchPutDocumentRequest::BatchPutDocumentRequest(const BatchPutDocumentRequest &other)
    : kendraRequest(new BatchPutDocumentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchPutDocumentRequest object.
 */
BatchPutDocumentRequest::BatchPutDocumentRequest()
    : kendraRequest(new BatchPutDocumentRequestPrivate(kendraRequest::BatchPutDocumentAction, this))
{

}

/*!
 * \reimp
 */
bool BatchPutDocumentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchPutDocumentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchPutDocumentRequest::response(QNetworkReply * const reply) const
{
    return new BatchPutDocumentResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::BatchPutDocumentRequestPrivate
 * \brief The BatchPutDocumentRequestPrivate class provides private implementation for BatchPutDocumentRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a BatchPutDocumentRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
BatchPutDocumentRequestPrivate::BatchPutDocumentRequestPrivate(
    const kendraRequest::Action action, BatchPutDocumentRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchPutDocumentRequest
 * class' copy constructor.
 */
BatchPutDocumentRequestPrivate::BatchPutDocumentRequestPrivate(
    const BatchPutDocumentRequestPrivate &other, BatchPutDocumentRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
