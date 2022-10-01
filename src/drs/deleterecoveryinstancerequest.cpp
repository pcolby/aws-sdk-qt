// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecoveryinstancerequest.h"
#include "deleterecoveryinstancerequest_p.h"
#include "deleterecoveryinstanceresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DeleteRecoveryInstanceRequest
 * \brief The DeleteRecoveryInstanceRequest class provides an interface for Drs DeleteRecoveryInstance requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::deleteRecoveryInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecoveryInstanceRequest::DeleteRecoveryInstanceRequest(const DeleteRecoveryInstanceRequest &other)
    : DrsRequest(new DeleteRecoveryInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecoveryInstanceRequest object.
 */
DeleteRecoveryInstanceRequest::DeleteRecoveryInstanceRequest()
    : DrsRequest(new DeleteRecoveryInstanceRequestPrivate(DrsRequest::DeleteRecoveryInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRecoveryInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRecoveryInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRecoveryInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRecoveryInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DeleteRecoveryInstanceRequestPrivate
 * \brief The DeleteRecoveryInstanceRequestPrivate class provides private implementation for DeleteRecoveryInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DeleteRecoveryInstanceRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DeleteRecoveryInstanceRequestPrivate::DeleteRecoveryInstanceRequestPrivate(
    const DrsRequest::Action action, DeleteRecoveryInstanceRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRecoveryInstanceRequest
 * class' copy constructor.
 */
DeleteRecoveryInstanceRequestPrivate::DeleteRecoveryInstanceRequestPrivate(
    const DeleteRecoveryInstanceRequestPrivate &other, DeleteRecoveryInstanceRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
