// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateledgerpermissionsmoderequest.h"
#include "updateledgerpermissionsmoderequest_p.h"
#include "updateledgerpermissionsmoderesponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::UpdateLedgerPermissionsModeRequest
 * \brief The UpdateLedgerPermissionsModeRequest class provides an interface for Qldb UpdateLedgerPermissionsMode requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::updateLedgerPermissionsMode
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLedgerPermissionsModeRequest::UpdateLedgerPermissionsModeRequest(const UpdateLedgerPermissionsModeRequest &other)
    : QldbRequest(new UpdateLedgerPermissionsModeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLedgerPermissionsModeRequest object.
 */
UpdateLedgerPermissionsModeRequest::UpdateLedgerPermissionsModeRequest()
    : QldbRequest(new UpdateLedgerPermissionsModeRequestPrivate(QldbRequest::UpdateLedgerPermissionsModeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLedgerPermissionsModeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLedgerPermissionsModeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLedgerPermissionsModeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLedgerPermissionsModeResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::UpdateLedgerPermissionsModeRequestPrivate
 * \brief The UpdateLedgerPermissionsModeRequestPrivate class provides private implementation for UpdateLedgerPermissionsModeRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a UpdateLedgerPermissionsModeRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
UpdateLedgerPermissionsModeRequestPrivate::UpdateLedgerPermissionsModeRequestPrivate(
    const QldbRequest::Action action, UpdateLedgerPermissionsModeRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLedgerPermissionsModeRequest
 * class' copy constructor.
 */
UpdateLedgerPermissionsModeRequestPrivate::UpdateLedgerPermissionsModeRequestPrivate(
    const UpdateLedgerPermissionsModeRequestPrivate &other, UpdateLedgerPermissionsModeRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
