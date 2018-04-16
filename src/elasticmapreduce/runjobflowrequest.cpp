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

#include "runjobflowrequest.h"
#include "runjobflowrequest_p.h"
#include "runjobflowresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::RunJobFlowRequest
 *
 * \brief The RunJobFlowRequest class encapsulates EMR RunJobFlow requests.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::runJobFlow
 */

/*!
 * @brief  Constructs a new RunJobFlowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RunJobFlowRequest::RunJobFlowRequest(const RunJobFlowRequest &other)
    : EMRRequest(new RunJobFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RunJobFlowRequest object.
 */
RunJobFlowRequest::RunJobFlowRequest()
    : EMRRequest(new RunJobFlowRequestPrivate(EMRRequest::RunJobFlowAction, this))
{

}

/*!
 * \reimp
 */
bool RunJobFlowRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RunJobFlowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RunJobFlowResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * RunJobFlowRequest::response(QNetworkReply * const reply) const
{
    return new RunJobFlowResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RunJobFlowRequestPrivate
 *
 * @brief  Private implementation for RunJobFlowRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RunJobFlowRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public RunJobFlowRequest instance.
 */
RunJobFlowRequestPrivate::RunJobFlowRequestPrivate(
    const EMRRequest::Action action, RunJobFlowRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RunJobFlowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RunJobFlowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RunJobFlowRequest instance.
 */
RunJobFlowRequestPrivate::RunJobFlowRequestPrivate(
    const RunJobFlowRequestPrivate &other, RunJobFlowRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
