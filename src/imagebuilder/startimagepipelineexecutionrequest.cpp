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

#include "startimagepipelineexecutionrequest.h"
#include "startimagepipelineexecutionrequest_p.h"
#include "startimagepipelineexecutionresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::StartImagePipelineExecutionRequest
 * \brief The StartImagePipelineExecutionRequest class provides an interface for ImageBuilder StartImagePipelineExecution requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::startImagePipelineExecution
 */

/*!
 * Constructs a copy of \a other.
 */
StartImagePipelineExecutionRequest::StartImagePipelineExecutionRequest(const StartImagePipelineExecutionRequest &other)
    : ImageBuilderRequest(new StartImagePipelineExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartImagePipelineExecutionRequest object.
 */
StartImagePipelineExecutionRequest::StartImagePipelineExecutionRequest()
    : ImageBuilderRequest(new StartImagePipelineExecutionRequestPrivate(ImageBuilderRequest::StartImagePipelineExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StartImagePipelineExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartImagePipelineExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartImagePipelineExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartImagePipelineExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::StartImagePipelineExecutionRequestPrivate
 * \brief The StartImagePipelineExecutionRequestPrivate class provides private implementation for StartImagePipelineExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a StartImagePipelineExecutionRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
StartImagePipelineExecutionRequestPrivate::StartImagePipelineExecutionRequestPrivate(
    const ImageBuilderRequest::Action action, StartImagePipelineExecutionRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartImagePipelineExecutionRequest
 * class' copy constructor.
 */
StartImagePipelineExecutionRequestPrivate::StartImagePipelineExecutionRequestPrivate(
    const StartImagePipelineExecutionRequestPrivate &other, StartImagePipelineExecutionRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
