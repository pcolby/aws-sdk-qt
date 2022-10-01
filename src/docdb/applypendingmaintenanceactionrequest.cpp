// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applypendingmaintenanceactionrequest.h"
#include "applypendingmaintenanceactionrequest_p.h"
#include "applypendingmaintenanceactionresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ApplyPendingMaintenanceActionRequest
 * \brief The ApplyPendingMaintenanceActionRequest class provides an interface for DocDb ApplyPendingMaintenanceAction requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::applyPendingMaintenanceAction
 */

/*!
 * Constructs a copy of \a other.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest(const ApplyPendingMaintenanceActionRequest &other)
    : DocDbRequest(new ApplyPendingMaintenanceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ApplyPendingMaintenanceActionRequest object.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest()
    : DocDbRequest(new ApplyPendingMaintenanceActionRequestPrivate(DocDbRequest::ApplyPendingMaintenanceActionAction, this))
{

}

/*!
 * \reimp
 */
bool ApplyPendingMaintenanceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ApplyPendingMaintenanceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ApplyPendingMaintenanceActionRequest::response(QNetworkReply * const reply) const
{
    return new ApplyPendingMaintenanceActionResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ApplyPendingMaintenanceActionRequestPrivate
 * \brief The ApplyPendingMaintenanceActionRequestPrivate class provides private implementation for ApplyPendingMaintenanceActionRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const DocDbRequest::Action action, ApplyPendingMaintenanceActionRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ApplyPendingMaintenanceActionRequest
 * class' copy constructor.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const ApplyPendingMaintenanceActionRequestPrivate &other, ApplyPendingMaintenanceActionRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
