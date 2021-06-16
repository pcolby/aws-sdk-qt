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

#include "createanomalydetectorrequest.h"
#include "createanomalydetectorrequest_p.h"
#include "createanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::CreateAnomalyDetectorRequest
 * \brief The CreateAnomalyDetectorRequest class provides an interface for LookoutMetrics CreateAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::createAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAnomalyDetectorRequest::CreateAnomalyDetectorRequest(const CreateAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new CreateAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAnomalyDetectorRequest object.
 */
CreateAnomalyDetectorRequest::CreateAnomalyDetectorRequest()
    : LookoutMetricsRequest(new CreateAnomalyDetectorRequestPrivate(LookoutMetricsRequest::CreateAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new CreateAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::CreateAnomalyDetectorRequestPrivate
 * \brief The CreateAnomalyDetectorRequestPrivate class provides private implementation for CreateAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a CreateAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
CreateAnomalyDetectorRequestPrivate::CreateAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, CreateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAnomalyDetectorRequest
 * class' copy constructor.
 */
CreateAnomalyDetectorRequestPrivate::CreateAnomalyDetectorRequestPrivate(
    const CreateAnomalyDetectorRequestPrivate &other, CreateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
