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

#include "describetopicsdetectionjobrequest.h"
#include "describetopicsdetectionjobrequest_p.h"
#include "describetopicsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeTopicsDetectionJobRequest
 *
 * \brief The DescribeTopicsDetectionJobRequest class provides an interface for Comprehend DescribeTopicsDetectionJob requests.
 *
 * \ingroup Comprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeTopicsDetectionJob
 */

/*!
 * @brief  Constructs a new DescribeTopicsDetectionJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTopicsDetectionJobRequest::DescribeTopicsDetectionJobRequest(const DescribeTopicsDetectionJobRequest &other)
    : ComprehendRequest(new DescribeTopicsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeTopicsDetectionJobRequest object.
 */
DescribeTopicsDetectionJobRequest::DescribeTopicsDetectionJobRequest()
    : ComprehendRequest(new DescribeTopicsDetectionJobRequestPrivate(ComprehendRequest::DescribeTopicsDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTopicsDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeTopicsDetectionJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTopicsDetectionJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTopicsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTopicsDetectionJobResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeTopicsDetectionJobRequestPrivate
 *
 * @brief  Private implementation for DescribeTopicsDetectionJobRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeTopicsDetectionJobRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public DescribeTopicsDetectionJobRequest instance.
 */
DescribeTopicsDetectionJobRequestPrivate::DescribeTopicsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeTopicsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeTopicsDetectionJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTopicsDetectionJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTopicsDetectionJobRequest instance.
 */
DescribeTopicsDetectionJobRequestPrivate::DescribeTopicsDetectionJobRequestPrivate(
    const DescribeTopicsDetectionJobRequestPrivate &other, DescribeTopicsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
