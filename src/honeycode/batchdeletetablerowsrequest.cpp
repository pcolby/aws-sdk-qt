// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletetablerowsrequest.h"
#include "batchdeletetablerowsrequest_p.h"
#include "batchdeletetablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchDeleteTableRowsRequest
 * \brief The BatchDeleteTableRowsRequest class provides an interface for Honeycode BatchDeleteTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchDeleteTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteTableRowsRequest::BatchDeleteTableRowsRequest(const BatchDeleteTableRowsRequest &other)
    : HoneycodeRequest(new BatchDeleteTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteTableRowsRequest object.
 */
BatchDeleteTableRowsRequest::BatchDeleteTableRowsRequest()
    : HoneycodeRequest(new BatchDeleteTableRowsRequestPrivate(HoneycodeRequest::BatchDeleteTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::BatchDeleteTableRowsRequestPrivate
 * \brief The BatchDeleteTableRowsRequestPrivate class provides private implementation for BatchDeleteTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchDeleteTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
BatchDeleteTableRowsRequestPrivate::BatchDeleteTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, BatchDeleteTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteTableRowsRequest
 * class' copy constructor.
 */
BatchDeleteTableRowsRequestPrivate::BatchDeleteTableRowsRequestPrivate(
    const BatchDeleteTableRowsRequestPrivate &other, BatchDeleteTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
