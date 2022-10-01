// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcemetadatarequest.h"
#include "getresourcemetadatarequest_p.h"
#include "getresourcemetadataresponse.h"
#include "pirequest_p.h"

namespace QtAws {
namespace Pi {

/*!
 * \class QtAws::Pi::GetResourceMetadataRequest
 * \brief The GetResourceMetadataRequest class provides an interface for Pi GetResourceMetadata requests.
 *
 * \inmodule QtAwsPi
 *
 *  <fullname>Amazon RDS Performance Insights</fullname>
 * 
 *  Amazon RDS Performance Insights enables you to monitor and explore different dimensions of database load based on data
 *  captured from a running DB instance. The guide provides detailed information about Performance Insights data types,
 *  parameters and
 * 
 *  errors>
 * 
 *  When Performance Insights is enabled, the Amazon RDS Performance Insights API provides visibility into the performance
 *  of your DB instance. Amazon CloudWatch provides the authoritative source for Amazon Web Services service-vended
 *  monitoring metrics. Performance Insights offers a domain-specific view of DB
 * 
 *  load>
 * 
 *  DB load is measured as average active sessions. Performance Insights provides the data to API consumers as a
 *  two-dimensional time-series dataset. The time dimension provides DB load data for each time point in the queried time
 *  range. Each time point decomposes overall load in relation to the requested dimensions, measured at that time point.
 *  Examples include SQL, Wait event, User, and
 * 
 *  Host> <ul> <li>
 * 
 *  To learn more about Performance Insights and Amazon Aurora DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html"> Amazon Aurora User Guide</a>
 *  </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon RDS DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html"> Amazon RDS User Guide</a> </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon DocumentDB clusters, go to the <i> <a
 *  href="https://docs.aws.amazon.com/documentdb/latest/developerguide/performance-insights.html"> Amazon DocumentDB
 *  Developer Guide</a>
 *
 * \sa PiClient::getResourceMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceMetadataRequest::GetResourceMetadataRequest(const GetResourceMetadataRequest &other)
    : PiRequest(new GetResourceMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceMetadataRequest object.
 */
GetResourceMetadataRequest::GetResourceMetadataRequest()
    : PiRequest(new GetResourceMetadataRequestPrivate(PiRequest::GetResourceMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Pi::GetResourceMetadataRequestPrivate
 * \brief The GetResourceMetadataRequestPrivate class provides private implementation for GetResourceMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsPi
 */

/*!
 * Constructs a GetResourceMetadataRequestPrivate object for Pi \a action,
 * with public implementation \a q.
 */
GetResourceMetadataRequestPrivate::GetResourceMetadataRequestPrivate(
    const PiRequest::Action action, GetResourceMetadataRequest * const q)
    : PiRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceMetadataRequest
 * class' copy constructor.
 */
GetResourceMetadataRequestPrivate::GetResourceMetadataRequestPrivate(
    const GetResourceMetadataRequestPrivate &other, GetResourceMetadataRequest * const q)
    : PiRequestPrivate(other, q)
{

}

} // namespace Pi
} // namespace QtAws
