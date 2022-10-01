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

#include "describependingmaintenanceactionsrequest.h"
#include "describependingmaintenanceactionsrequest_p.h"
#include "describependingmaintenanceactionsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribePendingMaintenanceActionsRequest
 * \brief The DescribePendingMaintenanceActionsRequest class provides an interface for DocDb DescribePendingMaintenanceActions requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describePendingMaintenanceActions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePendingMaintenanceActionsRequest::DescribePendingMaintenanceActionsRequest(const DescribePendingMaintenanceActionsRequest &other)
    : DocDbRequest(new DescribePendingMaintenanceActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePendingMaintenanceActionsRequest object.
 */
DescribePendingMaintenanceActionsRequest::DescribePendingMaintenanceActionsRequest()
    : DocDbRequest(new DescribePendingMaintenanceActionsRequestPrivate(DocDbRequest::DescribePendingMaintenanceActionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePendingMaintenanceActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePendingMaintenanceActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePendingMaintenanceActionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePendingMaintenanceActionsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribePendingMaintenanceActionsRequestPrivate
 * \brief The DescribePendingMaintenanceActionsRequestPrivate class provides private implementation for DescribePendingMaintenanceActionsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribePendingMaintenanceActionsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribePendingMaintenanceActionsRequestPrivate::DescribePendingMaintenanceActionsRequestPrivate(
    const DocDbRequest::Action action, DescribePendingMaintenanceActionsRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePendingMaintenanceActionsRequest
 * class' copy constructor.
 */
DescribePendingMaintenanceActionsRequestPrivate::DescribePendingMaintenanceActionsRequestPrivate(
    const DescribePendingMaintenanceActionsRequestPrivate &other, DescribePendingMaintenanceActionsRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
