// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
