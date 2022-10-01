// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchcreatetablerowsrequest.h"
#include "batchcreatetablerowsrequest_p.h"
#include "batchcreatetablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchCreateTableRowsRequest
 * \brief The BatchCreateTableRowsRequest class provides an interface for Honeycode BatchCreateTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchCreateTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
BatchCreateTableRowsRequest::BatchCreateTableRowsRequest(const BatchCreateTableRowsRequest &other)
    : HoneycodeRequest(new BatchCreateTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchCreateTableRowsRequest object.
 */
BatchCreateTableRowsRequest::BatchCreateTableRowsRequest()
    : HoneycodeRequest(new BatchCreateTableRowsRequestPrivate(HoneycodeRequest::BatchCreateTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchCreateTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchCreateTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchCreateTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new BatchCreateTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::BatchCreateTableRowsRequestPrivate
 * \brief The BatchCreateTableRowsRequestPrivate class provides private implementation for BatchCreateTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchCreateTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
BatchCreateTableRowsRequestPrivate::BatchCreateTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, BatchCreateTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchCreateTableRowsRequest
 * class' copy constructor.
 */
BatchCreateTableRowsRequestPrivate::BatchCreateTableRowsRequestPrivate(
    const BatchCreateTableRowsRequestPrivate &other, BatchCreateTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
