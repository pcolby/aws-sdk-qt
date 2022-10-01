// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
