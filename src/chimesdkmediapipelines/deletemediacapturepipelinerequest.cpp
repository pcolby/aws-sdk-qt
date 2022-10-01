// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemediacapturepipelinerequest.h"
#include "deletemediacapturepipelinerequest_p.h"
#include "deletemediacapturepipelineresponse.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::DeleteMediaCapturePipelineRequest
 * \brief The DeleteMediaCapturePipelineRequest class provides an interface for ChimeSdkMediaPipelines DeleteMediaCapturePipeline requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::deleteMediaCapturePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMediaCapturePipelineRequest::DeleteMediaCapturePipelineRequest(const DeleteMediaCapturePipelineRequest &other)
    : ChimeSdkMediaPipelinesRequest(new DeleteMediaCapturePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMediaCapturePipelineRequest object.
 */
DeleteMediaCapturePipelineRequest::DeleteMediaCapturePipelineRequest()
    : ChimeSdkMediaPipelinesRequest(new DeleteMediaCapturePipelineRequestPrivate(ChimeSdkMediaPipelinesRequest::DeleteMediaCapturePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMediaCapturePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMediaCapturePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMediaCapturePipelineRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMediaCapturePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::DeleteMediaCapturePipelineRequestPrivate
 * \brief The DeleteMediaCapturePipelineRequestPrivate class provides private implementation for DeleteMediaCapturePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a DeleteMediaCapturePipelineRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
DeleteMediaCapturePipelineRequestPrivate::DeleteMediaCapturePipelineRequestPrivate(
    const ChimeSdkMediaPipelinesRequest::Action action, DeleteMediaCapturePipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMediaCapturePipelineRequest
 * class' copy constructor.
 */
DeleteMediaCapturePipelineRequestPrivate::DeleteMediaCapturePipelineRequestPrivate(
    const DeleteMediaCapturePipelineRequestPrivate &other, DeleteMediaCapturePipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
