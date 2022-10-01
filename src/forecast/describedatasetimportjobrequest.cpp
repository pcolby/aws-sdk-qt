// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetimportjobrequest.h"
#include "describedatasetimportjobrequest_p.h"
#include "describedatasetimportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeDatasetImportJobRequest
 * \brief The DescribeDatasetImportJobRequest class provides an interface for Forecast DescribeDatasetImportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeDatasetImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetImportJobRequest::DescribeDatasetImportJobRequest(const DescribeDatasetImportJobRequest &other)
    : ForecastRequest(new DescribeDatasetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetImportJobRequest object.
 */
DescribeDatasetImportJobRequest::DescribeDatasetImportJobRequest()
    : ForecastRequest(new DescribeDatasetImportJobRequestPrivate(ForecastRequest::DescribeDatasetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeDatasetImportJobRequestPrivate
 * \brief The DescribeDatasetImportJobRequestPrivate class provides private implementation for DescribeDatasetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeDatasetImportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeDatasetImportJobRequestPrivate::DescribeDatasetImportJobRequestPrivate(
    const ForecastRequest::Action action, DescribeDatasetImportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetImportJobRequest
 * class' copy constructor.
 */
DescribeDatasetImportJobRequestPrivate::DescribeDatasetImportJobRequestPrivate(
    const DescribeDatasetImportJobRequestPrivate &other, DescribeDatasetImportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
