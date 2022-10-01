// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimagerequest.h"
#include "createimagerequest_p.h"
#include "createimageresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateImageRequest
 * \brief The CreateImageRequest class provides an interface for ImageBuilder CreateImage requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createImage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImageRequest::CreateImageRequest(const CreateImageRequest &other)
    : ImageBuilderRequest(new CreateImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImageRequest object.
 */
CreateImageRequest::CreateImageRequest()
    : ImageBuilderRequest(new CreateImageRequestPrivate(ImageBuilderRequest::CreateImageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImageRequest::response(QNetworkReply * const reply) const
{
    return new CreateImageResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::CreateImageRequestPrivate
 * \brief The CreateImageRequestPrivate class provides private implementation for CreateImageRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateImageRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CreateImageRequestPrivate::CreateImageRequestPrivate(
    const ImageBuilderRequest::Action action, CreateImageRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImageRequest
 * class' copy constructor.
 */
CreateImageRequestPrivate::CreateImageRequestPrivate(
    const CreateImageRequestPrivate &other, CreateImageRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
