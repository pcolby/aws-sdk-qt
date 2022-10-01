// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateledgerrequest.h"
#include "updateledgerrequest_p.h"
#include "updateledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::UpdateLedgerRequest
 * \brief The UpdateLedgerRequest class provides an interface for Qldb UpdateLedger requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::updateLedger
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLedgerRequest::UpdateLedgerRequest(const UpdateLedgerRequest &other)
    : QldbRequest(new UpdateLedgerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLedgerRequest object.
 */
UpdateLedgerRequest::UpdateLedgerRequest()
    : QldbRequest(new UpdateLedgerRequestPrivate(QldbRequest::UpdateLedgerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLedgerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLedgerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLedgerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLedgerResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::UpdateLedgerRequestPrivate
 * \brief The UpdateLedgerRequestPrivate class provides private implementation for UpdateLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a UpdateLedgerRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
UpdateLedgerRequestPrivate::UpdateLedgerRequestPrivate(
    const QldbRequest::Action action, UpdateLedgerRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLedgerRequest
 * class' copy constructor.
 */
UpdateLedgerRequestPrivate::UpdateLedgerRequestPrivate(
    const UpdateLedgerRequestPrivate &other, UpdateLedgerRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
