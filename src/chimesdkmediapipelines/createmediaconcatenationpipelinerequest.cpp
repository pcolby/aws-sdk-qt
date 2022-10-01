// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmediaconcatenationpipelinerequest.h"
#include "createmediaconcatenationpipelinerequest_p.h"
#include "createmediaconcatenationpipelineresponse.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaConcatenationPipelineRequest
 * \brief The CreateMediaConcatenationPipelineRequest class provides an interface for ChimeSdkMediaPipelines CreateMediaConcatenationPipeline requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::createMediaConcatenationPipeline
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMediaConcatenationPipelineRequest::CreateMediaConcatenationPipelineRequest(const CreateMediaConcatenationPipelineRequest &other)
    : ChimeSdkMediaPipelinesRequest(new CreateMediaConcatenationPipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMediaConcatenationPipelineRequest object.
 */
CreateMediaConcatenationPipelineRequest::CreateMediaConcatenationPipelineRequest()
    : ChimeSdkMediaPipelinesRequest(new CreateMediaConcatenationPipelineRequestPrivate(ChimeSdkMediaPipelinesRequest::CreateMediaConcatenationPipelineAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMediaConcatenationPipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMediaConcatenationPipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMediaConcatenationPipelineRequest::response(QNetworkReply * const reply) const
{
    return new CreateMediaConcatenationPipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaConcatenationPipelineRequestPrivate
 * \brief The CreateMediaConcatenationPipelineRequestPrivate class provides private implementation for CreateMediaConcatenationPipelineRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a CreateMediaConcatenationPipelineRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
CreateMediaConcatenationPipelineRequestPrivate::CreateMediaConcatenationPipelineRequestPrivate(
    const ChimeSdkMediaPipelinesRequest::Action action, CreateMediaConcatenationPipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMediaConcatenationPipelineRequest
 * class' copy constructor.
 */
CreateMediaConcatenationPipelineRequestPrivate::CreateMediaConcatenationPipelineRequestPrivate(
    const CreateMediaConcatenationPipelineRequestPrivate &other, CreateMediaConcatenationPipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
