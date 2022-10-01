// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcomponentbuildversionsrequest.h"
#include "listcomponentbuildversionsrequest_p.h"
#include "listcomponentbuildversionsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListComponentBuildVersionsRequest
 * \brief The ListComponentBuildVersionsRequest class provides an interface for ImageBuilder ListComponentBuildVersions requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listComponentBuildVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListComponentBuildVersionsRequest::ListComponentBuildVersionsRequest(const ListComponentBuildVersionsRequest &other)
    : ImageBuilderRequest(new ListComponentBuildVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComponentBuildVersionsRequest object.
 */
ListComponentBuildVersionsRequest::ListComponentBuildVersionsRequest()
    : ImageBuilderRequest(new ListComponentBuildVersionsRequestPrivate(ImageBuilderRequest::ListComponentBuildVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListComponentBuildVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComponentBuildVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComponentBuildVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListComponentBuildVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListComponentBuildVersionsRequestPrivate
 * \brief The ListComponentBuildVersionsRequestPrivate class provides private implementation for ListComponentBuildVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListComponentBuildVersionsRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListComponentBuildVersionsRequestPrivate::ListComponentBuildVersionsRequestPrivate(
    const ImageBuilderRequest::Action action, ListComponentBuildVersionsRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComponentBuildVersionsRequest
 * class' copy constructor.
 */
ListComponentBuildVersionsRequestPrivate::ListComponentBuildVersionsRequestPrivate(
    const ListComponentBuildVersionsRequestPrivate &other, ListComponentBuildVersionsRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
