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

#include "deletecolumnstatisticsfortablerequest.h"
#include "deletecolumnstatisticsfortablerequest_p.h"
#include "deletecolumnstatisticsfortableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForTableRequest
 * \brief The DeleteColumnStatisticsForTableRequest class provides an interface for Glue DeleteColumnStatisticsForTable requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteColumnStatisticsForTable
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteColumnStatisticsForTableRequest::DeleteColumnStatisticsForTableRequest(const DeleteColumnStatisticsForTableRequest &other)
    : GlueRequest(new DeleteColumnStatisticsForTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteColumnStatisticsForTableRequest object.
 */
DeleteColumnStatisticsForTableRequest::DeleteColumnStatisticsForTableRequest()
    : GlueRequest(new DeleteColumnStatisticsForTableRequestPrivate(GlueRequest::DeleteColumnStatisticsForTableAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteColumnStatisticsForTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteColumnStatisticsForTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteColumnStatisticsForTableRequest::response(QNetworkReply * const reply) const
{
    return new DeleteColumnStatisticsForTableResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForTableRequestPrivate
 * \brief The DeleteColumnStatisticsForTableRequestPrivate class provides private implementation for DeleteColumnStatisticsForTableRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteColumnStatisticsForTableRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteColumnStatisticsForTableRequestPrivate::DeleteColumnStatisticsForTableRequestPrivate(
    const GlueRequest::Action action, DeleteColumnStatisticsForTableRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteColumnStatisticsForTableRequest
 * class' copy constructor.
 */
DeleteColumnStatisticsForTableRequestPrivate::DeleteColumnStatisticsForTableRequestPrivate(
    const DeleteColumnStatisticsForTableRequestPrivate &other, DeleteColumnStatisticsForTableRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
