// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
