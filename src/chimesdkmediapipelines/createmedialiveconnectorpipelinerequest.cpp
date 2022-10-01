// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmedialiveconnectorpipelinerequest.h"
#include "createmedialiveconnectorpipelinerequest_p.h"
#include "createmedialiveconnectorpipelineresponse.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaLiveConnectorPipelineRequest
 * \brief The CreateMediaLiveConnectorPipelineRequest class provides an interface for ChimeSdkMediaPipelines CreateMediaLiveConnectorPipeline requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::createMediaLiveConnectorPipeline
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMediaLiveConnectorPipelineRequest::CreateMediaLiveConnectorPipelineRequest(const CreateMediaLiveConnectorPipelineRequest &other)
    : ChimeSdkMediaPipelinesRequest(new CreateMediaLiveConnectorPipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMediaLiveConnectorPipelineRequest object.
 */
CreateMediaLiveConnectorPipelineRequest::CreateMediaLiveConnectorPipelineRequest()
    : ChimeSdkMediaPipelinesRequest(new CreateMediaLiveConnectorPipelineRequestPrivate(ChimeSdkMediaPipelinesRequest::CreateMediaLiveConnectorPipelineAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMediaLiveConnectorPipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMediaLiveConnectorPipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMediaLiveConnectorPipelineRequest::response(QNetworkReply * const reply) const
{
    return new CreateMediaLiveConnectorPipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaLiveConnectorPipelineRequestPrivate
 * \brief The CreateMediaLiveConnectorPipelineRequestPrivate class provides private implementation for CreateMediaLiveConnectorPipelineRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a CreateMediaLiveConnectorPipelineRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
CreateMediaLiveConnectorPipelineRequestPrivate::CreateMediaLiveConnectorPipelineRequestPrivate(
    const ChimeSdkMediaPipelinesRequest::Action action, CreateMediaLiveConnectorPipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMediaLiveConnectorPipelineRequest
 * class' copy constructor.
 */
CreateMediaLiveConnectorPipelineRequestPrivate::CreateMediaLiveConnectorPipelineRequestPrivate(
    const CreateMediaLiveConnectorPipelineRequestPrivate &other, CreateMediaLiveConnectorPipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
