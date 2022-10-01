// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagebuildversionsrequest.h"
#include "listimagebuildversionsrequest_p.h"
#include "listimagebuildversionsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImageBuildVersionsRequest
 * \brief The ListImageBuildVersionsRequest class provides an interface for ImageBuilder ListImageBuildVersions requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImageBuildVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListImageBuildVersionsRequest::ListImageBuildVersionsRequest(const ListImageBuildVersionsRequest &other)
    : ImageBuilderRequest(new ListImageBuildVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImageBuildVersionsRequest object.
 */
ListImageBuildVersionsRequest::ListImageBuildVersionsRequest()
    : ImageBuilderRequest(new ListImageBuildVersionsRequestPrivate(ImageBuilderRequest::ListImageBuildVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListImageBuildVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImageBuildVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImageBuildVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListImageBuildVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListImageBuildVersionsRequestPrivate
 * \brief The ListImageBuildVersionsRequestPrivate class provides private implementation for ListImageBuildVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImageBuildVersionsRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListImageBuildVersionsRequestPrivate::ListImageBuildVersionsRequestPrivate(
    const ImageBuilderRequest::Action action, ListImageBuildVersionsRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImageBuildVersionsRequest
 * class' copy constructor.
 */
ListImageBuildVersionsRequestPrivate::ListImageBuildVersionsRequestPrivate(
    const ListImageBuildVersionsRequestPrivate &other, ListImageBuildVersionsRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
