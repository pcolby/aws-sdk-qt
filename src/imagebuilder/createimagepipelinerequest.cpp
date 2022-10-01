// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimagepipelinerequest.h"
#include "createimagepipelinerequest_p.h"
#include "createimagepipelineresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateImagePipelineRequest
 * \brief The CreateImagePipelineRequest class provides an interface for ImageBuilder CreateImagePipeline requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createImagePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImagePipelineRequest::CreateImagePipelineRequest(const CreateImagePipelineRequest &other)
    : ImageBuilderRequest(new CreateImagePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImagePipelineRequest object.
 */
CreateImagePipelineRequest::CreateImagePipelineRequest()
    : ImageBuilderRequest(new CreateImagePipelineRequestPrivate(ImageBuilderRequest::CreateImagePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImagePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImagePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImagePipelineRequest::response(QNetworkReply * const reply) const
{
    return new CreateImagePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::CreateImagePipelineRequestPrivate
 * \brief The CreateImagePipelineRequestPrivate class provides private implementation for CreateImagePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateImagePipelineRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CreateImagePipelineRequestPrivate::CreateImagePipelineRequestPrivate(
    const ImageBuilderRequest::Action action, CreateImagePipelineRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImagePipelineRequest
 * class' copy constructor.
 */
CreateImagePipelineRequestPrivate::CreateImagePipelineRequestPrivate(
    const CreateImagePipelineRequestPrivate &other, CreateImagePipelineRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
