// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmediapipelinerequest.h"
#include "getmediapipelinerequest_p.h"
#include "getmediapipelineresponse.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::GetMediaPipelineRequest
 * \brief The GetMediaPipelineRequest class provides an interface for ChimeSdkMediaPipelines GetMediaPipeline requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::getMediaPipeline
 */

/*!
 * Constructs a copy of \a other.
 */
GetMediaPipelineRequest::GetMediaPipelineRequest(const GetMediaPipelineRequest &other)
    : ChimeSdkMediaPipelinesRequest(new GetMediaPipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMediaPipelineRequest object.
 */
GetMediaPipelineRequest::GetMediaPipelineRequest()
    : ChimeSdkMediaPipelinesRequest(new GetMediaPipelineRequestPrivate(ChimeSdkMediaPipelinesRequest::GetMediaPipelineAction, this))
{

}

/*!
 * \reimp
 */
bool GetMediaPipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMediaPipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMediaPipelineRequest::response(QNetworkReply * const reply) const
{
    return new GetMediaPipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::GetMediaPipelineRequestPrivate
 * \brief The GetMediaPipelineRequestPrivate class provides private implementation for GetMediaPipelineRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a GetMediaPipelineRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
GetMediaPipelineRequestPrivate::GetMediaPipelineRequestPrivate(
    const ChimeSdkMediaPipelinesRequest::Action action, GetMediaPipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMediaPipelineRequest
 * class' copy constructor.
 */
GetMediaPipelineRequestPrivate::GetMediaPipelineRequestPrivate(
    const GetMediaPipelineRequestPrivate &other, GetMediaPipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
