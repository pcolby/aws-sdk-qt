// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchupdatetablerowsrequest.h"
#include "batchupdatetablerowsrequest_p.h"
#include "batchupdatetablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchUpdateTableRowsRequest
 * \brief The BatchUpdateTableRowsRequest class provides an interface for Honeycode BatchUpdateTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchUpdateTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpdateTableRowsRequest::BatchUpdateTableRowsRequest(const BatchUpdateTableRowsRequest &other)
    : HoneycodeRequest(new BatchUpdateTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpdateTableRowsRequest object.
 */
BatchUpdateTableRowsRequest::BatchUpdateTableRowsRequest()
    : HoneycodeRequest(new BatchUpdateTableRowsRequestPrivate(HoneycodeRequest::BatchUpdateTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpdateTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpdateTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpdateTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpdateTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::BatchUpdateTableRowsRequestPrivate
 * \brief The BatchUpdateTableRowsRequestPrivate class provides private implementation for BatchUpdateTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchUpdateTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
BatchUpdateTableRowsRequestPrivate::BatchUpdateTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, BatchUpdateTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpdateTableRowsRequest
 * class' copy constructor.
 */
BatchUpdateTableRowsRequestPrivate::BatchUpdateTableRowsRequestPrivate(
    const BatchUpdateTableRowsRequestPrivate &other, BatchUpdateTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
