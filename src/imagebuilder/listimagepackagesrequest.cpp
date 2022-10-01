// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagepackagesrequest.h"
#include "listimagepackagesrequest_p.h"
#include "listimagepackagesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImagePackagesRequest
 * \brief The ListImagePackagesRequest class provides an interface for ImageBuilder ListImagePackages requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImagePackages
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagePackagesRequest::ListImagePackagesRequest(const ListImagePackagesRequest &other)
    : ImageBuilderRequest(new ListImagePackagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagePackagesRequest object.
 */
ListImagePackagesRequest::ListImagePackagesRequest()
    : ImageBuilderRequest(new ListImagePackagesRequestPrivate(ImageBuilderRequest::ListImagePackagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagePackagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagePackagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagePackagesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagePackagesResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListImagePackagesRequestPrivate
 * \brief The ListImagePackagesRequestPrivate class provides private implementation for ListImagePackagesRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImagePackagesRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListImagePackagesRequestPrivate::ListImagePackagesRequestPrivate(
    const ImageBuilderRequest::Action action, ListImagePackagesRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagePackagesRequest
 * class' copy constructor.
 */
ListImagePackagesRequestPrivate::ListImagePackagesRequestPrivate(
    const ListImagePackagesRequestPrivate &other, ListImagePackagesRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
