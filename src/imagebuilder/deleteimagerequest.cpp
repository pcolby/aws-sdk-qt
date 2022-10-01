// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimagerequest.h"
#include "deleteimagerequest_p.h"
#include "deleteimageresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteImageRequest
 * \brief The DeleteImageRequest class provides an interface for ImageBuilder DeleteImage requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteImage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImageRequest::DeleteImageRequest(const DeleteImageRequest &other)
    : ImageBuilderRequest(new DeleteImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImageRequest object.
 */
DeleteImageRequest::DeleteImageRequest()
    : ImageBuilderRequest(new DeleteImageRequestPrivate(ImageBuilderRequest::DeleteImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::DeleteImageRequestPrivate
 * \brief The DeleteImageRequestPrivate class provides private implementation for DeleteImageRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteImageRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const ImageBuilderRequest::Action action, DeleteImageRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageRequest
 * class' copy constructor.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const DeleteImageRequestPrivate &other, DeleteImageRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
