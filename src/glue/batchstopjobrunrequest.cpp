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

#include "batchstopjobrunrequest.h"
#include "batchstopjobrunrequest_p.h"
#include "batchstopjobrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchStopJobRunRequest
 *
 * \brief The BatchStopJobRunRequest class provides an interface for Glue BatchStopJobRun requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchStopJobRun
 */

/*!
 * @brief  Constructs a new BatchStopJobRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchStopJobRunRequest::BatchStopJobRunRequest(const BatchStopJobRunRequest &other)
    : GlueRequest(new BatchStopJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new BatchStopJobRunRequest object.
 */
BatchStopJobRunRequest::BatchStopJobRunRequest()
    : GlueRequest(new BatchStopJobRunRequestPrivate(GlueRequest::BatchStopJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool BatchStopJobRunRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an BatchStopJobRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchStopJobRunResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchStopJobRunRequest::response(QNetworkReply * const reply) const
{
    return new BatchStopJobRunResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  BatchStopJobRunRequestPrivate
 *
 * @brief  Private implementation for BatchStopJobRunRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new BatchStopJobRunRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public BatchStopJobRunRequest instance.
 */
BatchStopJobRunRequestPrivate::BatchStopJobRunRequestPrivate(
    const GlueRequest::Action action, BatchStopJobRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new BatchStopJobRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchStopJobRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchStopJobRunRequest instance.
 */
BatchStopJobRunRequestPrivate::BatchStopJobRunRequestPrivate(
    const BatchStopJobRunRequestPrivate &other, BatchStopJobRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
