// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
