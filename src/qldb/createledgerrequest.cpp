// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createledgerrequest.h"
#include "createledgerrequest_p.h"
#include "createledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::CreateLedgerRequest
 * \brief The CreateLedgerRequest class provides an interface for Qldb CreateLedger requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::createLedger
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLedgerRequest::CreateLedgerRequest(const CreateLedgerRequest &other)
    : QldbRequest(new CreateLedgerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLedgerRequest object.
 */
CreateLedgerRequest::CreateLedgerRequest()
    : QldbRequest(new CreateLedgerRequestPrivate(QldbRequest::CreateLedgerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLedgerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLedgerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLedgerRequest::response(QNetworkReply * const reply) const
{
    return new CreateLedgerResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::CreateLedgerRequestPrivate
 * \brief The CreateLedgerRequestPrivate class provides private implementation for CreateLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a CreateLedgerRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
CreateLedgerRequestPrivate::CreateLedgerRequestPrivate(
    const QldbRequest::Action action, CreateLedgerRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLedgerRequest
 * class' copy constructor.
 */
CreateLedgerRequestPrivate::CreateLedgerRequestPrivate(
    const CreateLedgerRequestPrivate &other, CreateLedgerRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
