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

#include "updatecolumnstatisticsfortablerequest.h"
#include "updatecolumnstatisticsfortablerequest_p.h"
#include "updatecolumnstatisticsfortableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForTableRequest
 * \brief The UpdateColumnStatisticsForTableRequest class provides an interface for Glue UpdateColumnStatisticsForTable requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateColumnStatisticsForTable
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateColumnStatisticsForTableRequest::UpdateColumnStatisticsForTableRequest(const UpdateColumnStatisticsForTableRequest &other)
    : GlueRequest(new UpdateColumnStatisticsForTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateColumnStatisticsForTableRequest object.
 */
UpdateColumnStatisticsForTableRequest::UpdateColumnStatisticsForTableRequest()
    : GlueRequest(new UpdateColumnStatisticsForTableRequestPrivate(GlueRequest::UpdateColumnStatisticsForTableAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateColumnStatisticsForTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateColumnStatisticsForTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateColumnStatisticsForTableRequest::response(QNetworkReply * const reply) const
{
    return new UpdateColumnStatisticsForTableResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForTableRequestPrivate
 * \brief The UpdateColumnStatisticsForTableRequestPrivate class provides private implementation for UpdateColumnStatisticsForTableRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateColumnStatisticsForTableRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateColumnStatisticsForTableRequestPrivate::UpdateColumnStatisticsForTableRequestPrivate(
    const GlueRequest::Action action, UpdateColumnStatisticsForTableRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateColumnStatisticsForTableRequest
 * class' copy constructor.
 */
UpdateColumnStatisticsForTableRequestPrivate::UpdateColumnStatisticsForTableRequestPrivate(
    const UpdateColumnStatisticsForTableRequestPrivate &other, UpdateColumnStatisticsForTableRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
