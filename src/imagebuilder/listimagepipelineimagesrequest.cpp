// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagepipelineimagesrequest.h"
#include "listimagepipelineimagesrequest_p.h"
#include "listimagepipelineimagesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImagePipelineImagesRequest
 * \brief The ListImagePipelineImagesRequest class provides an interface for ImageBuilder ListImagePipelineImages requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImagePipelineImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagePipelineImagesRequest::ListImagePipelineImagesRequest(const ListImagePipelineImagesRequest &other)
    : ImageBuilderRequest(new ListImagePipelineImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagePipelineImagesRequest object.
 */
ListImagePipelineImagesRequest::ListImagePipelineImagesRequest()
    : ImageBuilderRequest(new ListImagePipelineImagesRequestPrivate(ImageBuilderRequest::ListImagePipelineImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagePipelineImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagePipelineImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagePipelineImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagePipelineImagesResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListImagePipelineImagesRequestPrivate
 * \brief The ListImagePipelineImagesRequestPrivate class provides private implementation for ListImagePipelineImagesRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImagePipelineImagesRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListImagePipelineImagesRequestPrivate::ListImagePipelineImagesRequestPrivate(
    const ImageBuilderRequest::Action action, ListImagePipelineImagesRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagePipelineImagesRequest
 * class' copy constructor.
 */
ListImagePipelineImagesRequestPrivate::ListImagePipelineImagesRequestPrivate(
    const ListImagePipelineImagesRequestPrivate &other, ListImagePipelineImagesRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
