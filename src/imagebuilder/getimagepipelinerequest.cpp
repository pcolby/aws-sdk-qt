// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimagepipelinerequest.h"
#include "getimagepipelinerequest_p.h"
#include "getimagepipelineresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImagePipelineRequest
 * \brief The GetImagePipelineRequest class provides an interface for ImageBuilder GetImagePipeline requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImagePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
GetImagePipelineRequest::GetImagePipelineRequest(const GetImagePipelineRequest &other)
    : ImageBuilderRequest(new GetImagePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImagePipelineRequest object.
 */
GetImagePipelineRequest::GetImagePipelineRequest()
    : ImageBuilderRequest(new GetImagePipelineRequestPrivate(ImageBuilderRequest::GetImagePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool GetImagePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImagePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImagePipelineRequest::response(QNetworkReply * const reply) const
{
    return new GetImagePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetImagePipelineRequestPrivate
 * \brief The GetImagePipelineRequestPrivate class provides private implementation for GetImagePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImagePipelineRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetImagePipelineRequestPrivate::GetImagePipelineRequestPrivate(
    const ImageBuilderRequest::Action action, GetImagePipelineRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImagePipelineRequest
 * class' copy constructor.
 */
GetImagePipelineRequestPrivate::GetImagePipelineRequestPrivate(
    const GetImagePipelineRequestPrivate &other, GetImagePipelineRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
