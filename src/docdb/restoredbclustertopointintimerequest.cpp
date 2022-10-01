// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoredbclustertopointintimerequest.h"
#include "restoredbclustertopointintimerequest_p.h"
#include "restoredbclustertopointintimeresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RestoreDBClusterToPointInTimeRequest
 * \brief The RestoreDBClusterToPointInTimeRequest class provides an interface for DocDb RestoreDBClusterToPointInTime requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::restoreDBClusterToPointInTime
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest(const RestoreDBClusterToPointInTimeRequest &other)
    : DocDbRequest(new RestoreDBClusterToPointInTimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreDBClusterToPointInTimeRequest object.
 */
RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest()
    : DocDbRequest(new RestoreDBClusterToPointInTimeRequestPrivate(DocDbRequest::RestoreDBClusterToPointInTimeAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreDBClusterToPointInTimeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreDBClusterToPointInTimeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreDBClusterToPointInTimeRequest::response(QNetworkReply * const reply) const
{
    return new RestoreDBClusterToPointInTimeResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::RestoreDBClusterToPointInTimeRequestPrivate
 * \brief The RestoreDBClusterToPointInTimeRequestPrivate class provides private implementation for RestoreDBClusterToPointInTimeRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RestoreDBClusterToPointInTimeRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
RestoreDBClusterToPointInTimeRequestPrivate::RestoreDBClusterToPointInTimeRequestPrivate(
    const DocDbRequest::Action action, RestoreDBClusterToPointInTimeRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBClusterToPointInTimeRequest
 * class' copy constructor.
 */
RestoreDBClusterToPointInTimeRequestPrivate::RestoreDBClusterToPointInTimeRequestPrivate(
    const RestoreDBClusterToPointInTimeRequestPrivate &other, RestoreDBClusterToPointInTimeRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
