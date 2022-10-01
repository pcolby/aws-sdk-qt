// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcolumnstatisticsfortablerequest.h"
#include "getcolumnstatisticsfortablerequest_p.h"
#include "getcolumnstatisticsfortableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetColumnStatisticsForTableRequest
 * \brief The GetColumnStatisticsForTableRequest class provides an interface for Glue GetColumnStatisticsForTable requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getColumnStatisticsForTable
 */

/*!
 * Constructs a copy of \a other.
 */
GetColumnStatisticsForTableRequest::GetColumnStatisticsForTableRequest(const GetColumnStatisticsForTableRequest &other)
    : GlueRequest(new GetColumnStatisticsForTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetColumnStatisticsForTableRequest object.
 */
GetColumnStatisticsForTableRequest::GetColumnStatisticsForTableRequest()
    : GlueRequest(new GetColumnStatisticsForTableRequestPrivate(GlueRequest::GetColumnStatisticsForTableAction, this))
{

}

/*!
 * \reimp
 */
bool GetColumnStatisticsForTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetColumnStatisticsForTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetColumnStatisticsForTableRequest::response(QNetworkReply * const reply) const
{
    return new GetColumnStatisticsForTableResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetColumnStatisticsForTableRequestPrivate
 * \brief The GetColumnStatisticsForTableRequestPrivate class provides private implementation for GetColumnStatisticsForTableRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetColumnStatisticsForTableRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetColumnStatisticsForTableRequestPrivate::GetColumnStatisticsForTableRequestPrivate(
    const GlueRequest::Action action, GetColumnStatisticsForTableRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetColumnStatisticsForTableRequest
 * class' copy constructor.
 */
GetColumnStatisticsForTableRequestPrivate::GetColumnStatisticsForTableRequestPrivate(
    const GetColumnStatisticsForTableRequestPrivate &other, GetColumnStatisticsForTableRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
