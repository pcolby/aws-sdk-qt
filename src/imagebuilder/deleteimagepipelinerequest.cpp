// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimagepipelinerequest.h"
#include "deleteimagepipelinerequest_p.h"
#include "deleteimagepipelineresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteImagePipelineRequest
 * \brief The DeleteImagePipelineRequest class provides an interface for ImageBuilder DeleteImagePipeline requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteImagePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImagePipelineRequest::DeleteImagePipelineRequest(const DeleteImagePipelineRequest &other)
    : ImageBuilderRequest(new DeleteImagePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImagePipelineRequest object.
 */
DeleteImagePipelineRequest::DeleteImagePipelineRequest()
    : ImageBuilderRequest(new DeleteImagePipelineRequestPrivate(ImageBuilderRequest::DeleteImagePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImagePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImagePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImagePipelineRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImagePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::DeleteImagePipelineRequestPrivate
 * \brief The DeleteImagePipelineRequestPrivate class provides private implementation for DeleteImagePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteImagePipelineRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
DeleteImagePipelineRequestPrivate::DeleteImagePipelineRequestPrivate(
    const ImageBuilderRequest::Action action, DeleteImagePipelineRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImagePipelineRequest
 * class' copy constructor.
 */
DeleteImagePipelineRequestPrivate::DeleteImagePipelineRequestPrivate(
    const DeleteImagePipelineRequestPrivate &other, DeleteImagePipelineRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
