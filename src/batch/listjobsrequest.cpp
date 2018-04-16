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

#include "listjobsrequest.h"
#include "listjobsrequest_p.h"
#include "listjobsresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::ListJobsRequest
 *
 * \brief The ListJobsRequest class encapsulates Batch ListJobs requests.
 *
 * \ingroup Batch
 *
 *  AWS Batch enables you to run batch computing workloads on the AWS Cloud. Batch computing is a common way for developers,
 *  scientists, and engineers to access large amounts of compute resources, and AWS Batch removes the undifferentiated heavy
 *  lifting of configuring and managing the required infrastructure. AWS Batch will be familiar to users of traditional
 *  batch computing software. This service can efficiently provision resources in response to jobs submitted in order to
 *  eliminate capacity constraints, reduce compute costs, and deliver results
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch enables developers, scientists, and engineers to run batch computing workloads of
 *  any scale. AWS Batch automatically provisions compute resources and optimizes the workload distribution based on the
 *  quantity and scale of the workloads. With AWS Batch, there is no need to install or manage batch computing software,
 *  which allows you to focus on analyzing results and solving problems. AWS Batch reduces operational complexities, saves
 *  time, and reduces costs, which makes it easy for developers, scientists, and engineers to run their batch jobs in the
 *  AWS
 *
 * \sa BatchClient::listJobs
 */

/*!
 * @brief  Constructs a new ListJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListJobsRequest::ListJobsRequest(const ListJobsRequest &other)
    : BatchRequest(new ListJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListJobsRequest object.
 */
ListJobsRequest::ListJobsRequest()
    : BatchRequest(new ListJobsRequestPrivate(BatchRequest::ListJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListJobsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BatchClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListJobsRequestPrivate
 *
 * @brief  Private implementation for ListJobsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListJobsRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public ListJobsRequest instance.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const BatchRequest::Action action, ListJobsRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListJobsRequest instance.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const ListJobsRequestPrivate &other, ListJobsRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
