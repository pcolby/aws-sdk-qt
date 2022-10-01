// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateindexrequest.h"
#include "updateindexrequest_p.h"
#include "updateindexresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateIndexRequest
 * \brief The UpdateIndexRequest class provides an interface for Kendra UpdateIndex requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateIndex
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIndexRequest::UpdateIndexRequest(const UpdateIndexRequest &other)
    : KendraRequest(new UpdateIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIndexRequest object.
 */
UpdateIndexRequest::UpdateIndexRequest()
    : KendraRequest(new UpdateIndexRequestPrivate(KendraRequest::UpdateIndexAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIndexRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::UpdateIndexRequestPrivate
 * \brief The UpdateIndexRequestPrivate class provides private implementation for UpdateIndexRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateIndexRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateIndexRequestPrivate::UpdateIndexRequestPrivate(
    const KendraRequest::Action action, UpdateIndexRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIndexRequest
 * class' copy constructor.
 */
UpdateIndexRequestPrivate::UpdateIndexRequestPrivate(
    const UpdateIndexRequestPrivate &other, UpdateIndexRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
