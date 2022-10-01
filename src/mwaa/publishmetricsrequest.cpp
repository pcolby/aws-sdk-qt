// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishmetricsrequest.h"
#include "publishmetricsrequest_p.h"
#include "publishmetricsresponse.h"
#include "mwaarequest_p.h"

namespace QtAws {
namespace Mwaa {

/*!
 * \class QtAws::Mwaa::PublishMetricsRequest
 * \brief The PublishMetricsRequest class provides an interface for Mwaa PublishMetrics requests.
 *
 * \inmodule QtAwsMwaa
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
 * 
 *  MWAA?</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <code>api.airflow.{region}.amazonaws.com</code> - This endpoint is used for environment
 * 
 *  management> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateEnvironment.html">CreateEnvironment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_DeleteEnvironment.html">DeleteEnvironment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_GetEnvironment.html">GetEnvironment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListEnvironments.html">ListEnvironments</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListTagsForResource.html">ListTagsForResource</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_TagResource.html">TagResource</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_UntagResource.html">UntagResource</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_UpdateEnvironment.html">UpdateEnvironment</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <code>env.airflow.{region}.amazonaws.com</code> - This endpoint is used to operate the Airflow
 * 
 *  environment> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateCliToken.html ">CreateCliToken</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateWebLoginToken.html">CreateWebLoginToken</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <code>ops.airflow.{region}.amazonaws.com</code> - This endpoint is used to push environment metrics that track
 *  environment
 * 
 *  health> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_PublishMetrics.html ">PublishMetrics</a>
 * 
 *  </p </li> </ul> </li> </ul>
 * 
 *  <b>Regions</b>
 * 
 *  </p
 * 
 *  For a list of regions that Amazon MWAA supports, see <a
 *  href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html#regions-mwaa">Region availability</a> in the
 *  <i>Amazon MWAA User
 *
 * \sa MwaaClient::publishMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
PublishMetricsRequest::PublishMetricsRequest(const PublishMetricsRequest &other)
    : MwaaRequest(new PublishMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishMetricsRequest object.
 */
PublishMetricsRequest::PublishMetricsRequest()
    : MwaaRequest(new PublishMetricsRequestPrivate(MwaaRequest::PublishMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool PublishMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PublishMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishMetricsRequest::response(QNetworkReply * const reply) const
{
    return new PublishMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::Mwaa::PublishMetricsRequestPrivate
 * \brief The PublishMetricsRequestPrivate class provides private implementation for PublishMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsMwaa
 */

/*!
 * Constructs a PublishMetricsRequestPrivate object for Mwaa \a action,
 * with public implementation \a q.
 */
PublishMetricsRequestPrivate::PublishMetricsRequestPrivate(
    const MwaaRequest::Action action, PublishMetricsRequest * const q)
    : MwaaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PublishMetricsRequest
 * class' copy constructor.
 */
PublishMetricsRequestPrivate::PublishMetricsRequestPrivate(
    const PublishMetricsRequestPrivate &other, PublishMetricsRequest * const q)
    : MwaaRequestPrivate(other, q)
{

}

} // namespace Mwaa
} // namespace QtAws
