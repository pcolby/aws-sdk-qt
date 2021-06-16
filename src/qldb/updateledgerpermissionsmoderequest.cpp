/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateledgerpermissionsmoderequest.h"
#include "updateledgerpermissionsmoderequest_p.h"
#include "updateledgerpermissionsmoderesponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::UpdateLedgerPermissionsModeRequest
 * \brief The UpdateLedgerPermissionsModeRequest class provides an interface for QLDB UpdateLedgerPermissionsMode requests.
 *
 * \inmodule QtAwsQLDB
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
 * \class QtAws::QLDB::UpdateLedgerPermissionsModeRequestPrivate
 * \brief The UpdateLedgerPermissionsModeRequestPrivate class provides private implementation for UpdateLedgerPermissionsModeRequest.
 * \internal
 *
 * \inmodule QtAwsQLDB
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

} // namespace QLDB
} // namespace QtAws
