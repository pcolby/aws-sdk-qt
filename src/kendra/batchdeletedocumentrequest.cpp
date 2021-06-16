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

#include "batchdeletedocumentrequest.h"
#include "batchdeletedocumentrequest_p.h"
#include "batchdeletedocumentresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::BatchDeleteDocumentRequest
 * \brief The BatchDeleteDocumentRequest class provides an interface for kendra BatchDeleteDocument requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::batchDeleteDocument
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteDocumentRequest::BatchDeleteDocumentRequest(const BatchDeleteDocumentRequest &other)
    : kendraRequest(new BatchDeleteDocumentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteDocumentRequest object.
 */
BatchDeleteDocumentRequest::BatchDeleteDocumentRequest()
    : kendraRequest(new BatchDeleteDocumentRequestPrivate(kendraRequest::BatchDeleteDocumentAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteDocumentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteDocumentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteDocumentRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteDocumentResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::BatchDeleteDocumentRequestPrivate
 * \brief The BatchDeleteDocumentRequestPrivate class provides private implementation for BatchDeleteDocumentRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a BatchDeleteDocumentRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
BatchDeleteDocumentRequestPrivate::BatchDeleteDocumentRequestPrivate(
    const kendraRequest::Action action, BatchDeleteDocumentRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteDocumentRequest
 * class' copy constructor.
 */
BatchDeleteDocumentRequestPrivate::BatchDeleteDocumentRequestPrivate(
    const BatchDeleteDocumentRequestPrivate &other, BatchDeleteDocumentRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
