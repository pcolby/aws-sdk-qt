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

#include "publishmetricsrequest.h"
#include "publishmetricsrequest_p.h"
#include "publishmetricsresponse.h"
#include "mwaarequest_p.h"

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::PublishMetricsRequest
 * \brief The PublishMetricsRequest class provides an interface for MWAA PublishMetrics requests.
 *
 * \inmodule QtAwsMWAA
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
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
 * \class QtAws::MWAA::PublishMetricsRequestPrivate
 * \brief The PublishMetricsRequestPrivate class provides private implementation for PublishMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsMWAA
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

} // namespace MWAA
} // namespace QtAws
