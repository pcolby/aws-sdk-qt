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

#include "describesteprequest.h"
#include "describesteprequest_p.h"
#include "describestepresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DescribeStepRequest
 *
 * \brief The DescribeStepRequest class encapsulates EMR DescribeStep requests.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::describeStep
 */

/*!
 * @brief  Constructs a new DescribeStepRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStepRequest::DescribeStepRequest(const DescribeStepRequest &other)
    : EMRRequest(new DescribeStepRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeStepRequest object.
 */
DescribeStepRequest::DescribeStepRequest()
    : EMRRequest(new DescribeStepRequestPrivate(EMRRequest::DescribeStepAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStepRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeStepResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStepResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStepRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStepResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeStepRequestPrivate
 *
 * @brief  Private implementation for DescribeStepRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeStepRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public DescribeStepRequest instance.
 */
DescribeStepRequestPrivate::DescribeStepRequestPrivate(
    const EMRRequest::Action action, DescribeStepRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeStepRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStepRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStepRequest instance.
 */
DescribeStepRequestPrivate::DescribeStepRequestPrivate(
    const DescribeStepRequestPrivate &other, DescribeStepRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
