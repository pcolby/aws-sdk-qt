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
