// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemediapipelinerequest.h"
#include "deletemediapipelinerequest_p.h"
#include "deletemediapipelineresponse.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::DeleteMediaPipelineRequest
 * \brief The DeleteMediaPipelineRequest class provides an interface for ChimeSdkMediaPipelines DeleteMediaPipeline requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::deleteMediaPipeline
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMediaPipelineRequest::DeleteMediaPipelineRequest(const DeleteMediaPipelineRequest &other)
    : ChimeSdkMediaPipelinesRequest(new DeleteMediaPipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMediaPipelineRequest object.
 */
DeleteMediaPipelineRequest::DeleteMediaPipelineRequest()
    : ChimeSdkMediaPipelinesRequest(new DeleteMediaPipelineRequestPrivate(ChimeSdkMediaPipelinesRequest::DeleteMediaPipelineAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMediaPipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMediaPipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMediaPipelineRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMediaPipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::DeleteMediaPipelineRequestPrivate
 * \brief The DeleteMediaPipelineRequestPrivate class provides private implementation for DeleteMediaPipelineRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a DeleteMediaPipelineRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
DeleteMediaPipelineRequestPrivate::DeleteMediaPipelineRequestPrivate(
    const ChimeSdkMediaPipelinesRequest::Action action, DeleteMediaPipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMediaPipelineRequest
 * class' copy constructor.
 */
DeleteMediaPipelineRequestPrivate::DeleteMediaPipelineRequestPrivate(
    const DeleteMediaPipelineRequestPrivate &other, DeleteMediaPipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
