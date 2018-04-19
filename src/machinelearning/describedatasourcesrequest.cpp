/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describedatasourcesrequest.h"
#include "describedatasourcesrequest_p.h"
#include "describedatasourcesresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeDataSourcesRequest
 * \brief The DescribeDataSourcesRequest class provides an interface for MachineLearning DescribeDataSources requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeDataSources
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDataSourcesRequest::DescribeDataSourcesRequest(const DescribeDataSourcesRequest &other)
    : MachineLearningRequest(new DescribeDataSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDataSourcesRequest object.
 */
DescribeDataSourcesRequest::DescribeDataSourcesRequest()
    : MachineLearningRequest(new DescribeDataSourcesRequestPrivate(MachineLearningRequest::DescribeDataSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDataSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDataSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDataSourcesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DescribeDataSourcesRequestPrivate
 * \brief The DescribeDataSourcesRequestPrivate class provides private implementation for DescribeDataSourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 *
 * Constructs a DescribeDataSourcesRequestPrivate object for MachineLearning \a action with,
 * public implementation \a q.
 */
DescribeDataSourcesRequestPrivate::DescribeDataSourcesRequestPrivate(
    const MachineLearningRequest::Action action, DescribeDataSourcesRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataSourcesRequest
 * class' copy constructor.
 */
DescribeDataSourcesRequestPrivate::DescribeDataSourcesRequestPrivate(
    const DescribeDataSourcesRequestPrivate &other, DescribeDataSourcesRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
