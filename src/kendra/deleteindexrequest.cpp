// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteindexrequest.h"
#include "deleteindexrequest_p.h"
#include "deleteindexresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteIndexRequest
 * \brief The DeleteIndexRequest class provides an interface for Kendra DeleteIndex requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteIndex
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIndexRequest::DeleteIndexRequest(const DeleteIndexRequest &other)
    : KendraRequest(new DeleteIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIndexRequest object.
 */
DeleteIndexRequest::DeleteIndexRequest()
    : KendraRequest(new DeleteIndexRequestPrivate(KendraRequest::DeleteIndexAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIndexRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteIndexRequestPrivate
 * \brief The DeleteIndexRequestPrivate class provides private implementation for DeleteIndexRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteIndexRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteIndexRequestPrivate::DeleteIndexRequestPrivate(
    const KendraRequest::Action action, DeleteIndexRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIndexRequest
 * class' copy constructor.
 */
DeleteIndexRequestPrivate::DeleteIndexRequestPrivate(
    const DeleteIndexRequestPrivate &other, DeleteIndexRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
