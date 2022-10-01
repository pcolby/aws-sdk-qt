// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateimagepipelinerequest.h"
#include "updateimagepipelinerequest_p.h"
#include "updateimagepipelineresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::UpdateImagePipelineRequest
 * \brief The UpdateImagePipelineRequest class provides an interface for ImageBuilder UpdateImagePipeline requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::updateImagePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateImagePipelineRequest::UpdateImagePipelineRequest(const UpdateImagePipelineRequest &other)
    : ImageBuilderRequest(new UpdateImagePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateImagePipelineRequest object.
 */
UpdateImagePipelineRequest::UpdateImagePipelineRequest()
    : ImageBuilderRequest(new UpdateImagePipelineRequestPrivate(ImageBuilderRequest::UpdateImagePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateImagePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateImagePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateImagePipelineRequest::response(QNetworkReply * const reply) const
{
    return new UpdateImagePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::UpdateImagePipelineRequestPrivate
 * \brief The UpdateImagePipelineRequestPrivate class provides private implementation for UpdateImagePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a UpdateImagePipelineRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
UpdateImagePipelineRequestPrivate::UpdateImagePipelineRequestPrivate(
    const ImageBuilderRequest::Action action, UpdateImagePipelineRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateImagePipelineRequest
 * class' copy constructor.
 */
UpdateImagePipelineRequestPrivate::UpdateImagePipelineRequestPrivate(
    const UpdateImagePipelineRequestPrivate &other, UpdateImagePipelineRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
