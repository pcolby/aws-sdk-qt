// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeledgerrequest.h"
#include "describeledgerrequest_p.h"
#include "describeledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::DescribeLedgerRequest
 * \brief The DescribeLedgerRequest class provides an interface for Qldb DescribeLedger requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::describeLedger
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLedgerRequest::DescribeLedgerRequest(const DescribeLedgerRequest &other)
    : QldbRequest(new DescribeLedgerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLedgerRequest object.
 */
DescribeLedgerRequest::DescribeLedgerRequest()
    : QldbRequest(new DescribeLedgerRequestPrivate(QldbRequest::DescribeLedgerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLedgerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLedgerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLedgerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLedgerResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::DescribeLedgerRequestPrivate
 * \brief The DescribeLedgerRequestPrivate class provides private implementation for DescribeLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a DescribeLedgerRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
DescribeLedgerRequestPrivate::DescribeLedgerRequestPrivate(
    const QldbRequest::Action action, DescribeLedgerRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLedgerRequest
 * class' copy constructor.
 */
DescribeLedgerRequestPrivate::DescribeLedgerRequestPrivate(
    const DescribeLedgerRequestPrivate &other, DescribeLedgerRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
