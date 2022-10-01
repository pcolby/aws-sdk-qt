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

#include "createmediacapturepipelinerequest.h"
#include "createmediacapturepipelinerequest_p.h"
#include "createmediacapturepipelineresponse.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaCapturePipelineRequest
 * \brief The CreateMediaCapturePipelineRequest class provides an interface for ChimeSdkMediaPipelines CreateMediaCapturePipeline requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::createMediaCapturePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMediaCapturePipelineRequest::CreateMediaCapturePipelineRequest(const CreateMediaCapturePipelineRequest &other)
    : ChimeSdkMediaPipelinesRequest(new CreateMediaCapturePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMediaCapturePipelineRequest object.
 */
CreateMediaCapturePipelineRequest::CreateMediaCapturePipelineRequest()
    : ChimeSdkMediaPipelinesRequest(new CreateMediaCapturePipelineRequestPrivate(ChimeSdkMediaPipelinesRequest::CreateMediaCapturePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMediaCapturePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMediaCapturePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMediaCapturePipelineRequest::response(QNetworkReply * const reply) const
{
    return new CreateMediaCapturePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaCapturePipelineRequestPrivate
 * \brief The CreateMediaCapturePipelineRequestPrivate class provides private implementation for CreateMediaCapturePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a CreateMediaCapturePipelineRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
CreateMediaCapturePipelineRequestPrivate::CreateMediaCapturePipelineRequestPrivate(
    const ChimeSdkMediaPipelinesRequest::Action action, CreateMediaCapturePipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMediaCapturePipelineRequest
 * class' copy constructor.
 */
CreateMediaCapturePipelineRequestPrivate::CreateMediaCapturePipelineRequestPrivate(
    const CreateMediaCapturePipelineRequestPrivate &other, CreateMediaCapturePipelineRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
