/*
    Copyright 2013-2019 Paul Colby

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

#include "getcrawlermetricsrequest.h"
#include "getcrawlermetricsrequest_p.h"
#include "getcrawlermetricsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCrawlerMetricsRequest
 * \brief The GetCrawlerMetricsRequest class provides an interface for Glue GetCrawlerMetrics requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getCrawlerMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
GetCrawlerMetricsRequest::GetCrawlerMetricsRequest(const GetCrawlerMetricsRequest &other)
    : GlueRequest(new GetCrawlerMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCrawlerMetricsRequest object.
 */
GetCrawlerMetricsRequest::GetCrawlerMetricsRequest()
    : GlueRequest(new GetCrawlerMetricsRequestPrivate(GlueRequest::GetCrawlerMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCrawlerMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCrawlerMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCrawlerMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetCrawlerMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetCrawlerMetricsRequestPrivate
 * \brief The GetCrawlerMetricsRequestPrivate class provides private implementation for GetCrawlerMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCrawlerMetricsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetCrawlerMetricsRequestPrivate::GetCrawlerMetricsRequestPrivate(
    const GlueRequest::Action action, GetCrawlerMetricsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCrawlerMetricsRequest
 * class' copy constructor.
 */
GetCrawlerMetricsRequestPrivate::GetCrawlerMetricsRequestPrivate(
    const GetCrawlerMetricsRequestPrivate &other, GetCrawlerMetricsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
