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

#include "getmediacapturepipelinerequest.h"
#include "getmediacapturepipelinerequest_p.h"
#include "getmediacapturepipelineresponse.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::GetMediaCapturePipelineRequest
 * \brief The GetMediaCapturePipelineRequest class provides an interface for ChimeSdkMediaPipelines GetMediaCapturePipeline requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::getMediaCapturePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
GetMediaCapturePipelineRequest::GetMediaCapturePipelineRequest(const GetMediaCapturePipelineRequest &other)
    : ChimeSdkMediaPipelinesRequest(new GetMediaCapturePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMediaCapturePipelineRequest object.
 */
GetMediaCapturePipelineRequest::GetMediaCapturePipelineRequest()
    : ChimeSdkMediaPipelinesRequest(new GetMediaCapturePipelineRequestPrivate(ChimeSdkMediaPipelinesRequest::GetMediaCapturePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool GetMediaCapturePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMediaCapturePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMediaCapturePipelineRequest::response(QNetworkReply * const reply) const
{
    return new GetMediaCapturePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::GetMediaCapturePipelineRequestPrivate
 * \brief The GetMediaCapturePipelineRequestPrivate class provides private implementation for GetMediaCapturePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a GetMediaCapturePipelineRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
GetMediaCapturePipelineRequestPrivate::GetMediaCapturePipelineRequestPrivate(
    const ChimeSdkMediaPipelinesRequest::Action action, GetMediaCapturePipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMediaCapturePipelineRequest
 * class' copy constructor.
 */
GetMediaCapturePipelineRequestPrivate::GetMediaCapturePipelineRequestPrivate(
    const GetMediaCapturePipelineRequestPrivate &other, GetMediaCapturePipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
