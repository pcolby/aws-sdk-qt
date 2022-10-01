// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchupserttablerowsrequest.h"
#include "batchupserttablerowsrequest_p.h"
#include "batchupserttablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchUpsertTableRowsRequest
 * \brief The BatchUpsertTableRowsRequest class provides an interface for Honeycode BatchUpsertTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchUpsertTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpsertTableRowsRequest::BatchUpsertTableRowsRequest(const BatchUpsertTableRowsRequest &other)
    : HoneycodeRequest(new BatchUpsertTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpsertTableRowsRequest object.
 */
BatchUpsertTableRowsRequest::BatchUpsertTableRowsRequest()
    : HoneycodeRequest(new BatchUpsertTableRowsRequestPrivate(HoneycodeRequest::BatchUpsertTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpsertTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpsertTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpsertTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpsertTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::BatchUpsertTableRowsRequestPrivate
 * \brief The BatchUpsertTableRowsRequestPrivate class provides private implementation for BatchUpsertTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchUpsertTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
BatchUpsertTableRowsRequestPrivate::BatchUpsertTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, BatchUpsertTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpsertTableRowsRequest
 * class' copy constructor.
 */
BatchUpsertTableRowsRequestPrivate::BatchUpsertTableRowsRequestPrivate(
    const BatchUpsertTableRowsRequestPrivate &other, BatchUpsertTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
