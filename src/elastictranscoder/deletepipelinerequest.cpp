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

#include "deletepipelinerequest.h"
#include "deletepipelinerequest_p.h"
#include "deletepipelineresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::DeletePipelineRequest
 *
 * \brief The DeletePipelineRequest class encapsulates ElasticTranscoder DeletePipeline requests.
 *
 * \ingroup ElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::deletePipeline
 */

/*!
 * @brief  Constructs a new DeletePipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePipelineRequest::DeletePipelineRequest(const DeletePipelineRequest &other)
    : ElasticTranscoderRequest(new DeletePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeletePipelineRequest object.
 */
DeletePipelineRequest::DeletePipelineRequest()
    : ElasticTranscoderRequest(new DeletePipelineRequestPrivate(ElasticTranscoderRequest::DeletePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePipelineRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeletePipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePipelineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePipelineRequest::response(QNetworkReply * const reply) const
{
    return new DeletePipelineResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeletePipelineRequestPrivate
 *
 * @brief  Private implementation for DeletePipelineRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePipelineRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public DeletePipelineRequest instance.
 */
DeletePipelineRequestPrivate::DeletePipelineRequestPrivate(
    const ElasticTranscoderRequest::Action action, DeletePipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePipelineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePipelineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePipelineRequest instance.
 */
DeletePipelineRequestPrivate::DeletePipelineRequestPrivate(
    const DeletePipelineRequestPrivate &other, DeletePipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
