// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimagerequest.h"
#include "getimagerequest_p.h"
#include "getimageresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImageRequest
 * \brief The GetImageRequest class provides an interface for ImageBuilder GetImage requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImage
 */

/*!
 * Constructs a copy of \a other.
 */
GetImageRequest::GetImageRequest(const GetImageRequest &other)
    : ImageBuilderRequest(new GetImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImageRequest object.
 */
GetImageRequest::GetImageRequest()
    : ImageBuilderRequest(new GetImageRequestPrivate(ImageBuilderRequest::GetImageAction, this))
{

}

/*!
 * \reimp
 */
bool GetImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImageRequest::response(QNetworkReply * const reply) const
{
    return new GetImageResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetImageRequestPrivate
 * \brief The GetImageRequestPrivate class provides private implementation for GetImageRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImageRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetImageRequestPrivate::GetImageRequestPrivate(
    const ImageBuilderRequest::Action action, GetImageRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImageRequest
 * class' copy constructor.
 */
GetImageRequestPrivate::GetImageRequestPrivate(
    const GetImageRequestPrivate &other, GetImageRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
