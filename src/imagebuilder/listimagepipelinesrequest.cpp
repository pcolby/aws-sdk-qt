// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagepipelinesrequest.h"
#include "listimagepipelinesrequest_p.h"
#include "listimagepipelinesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImagePipelinesRequest
 * \brief The ListImagePipelinesRequest class provides an interface for ImageBuilder ListImagePipelines requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImagePipelines
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagePipelinesRequest::ListImagePipelinesRequest(const ListImagePipelinesRequest &other)
    : ImageBuilderRequest(new ListImagePipelinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagePipelinesRequest object.
 */
ListImagePipelinesRequest::ListImagePipelinesRequest()
    : ImageBuilderRequest(new ListImagePipelinesRequestPrivate(ImageBuilderRequest::ListImagePipelinesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagePipelinesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagePipelinesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagePipelinesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagePipelinesResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListImagePipelinesRequestPrivate
 * \brief The ListImagePipelinesRequestPrivate class provides private implementation for ListImagePipelinesRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImagePipelinesRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListImagePipelinesRequestPrivate::ListImagePipelinesRequestPrivate(
    const ImageBuilderRequest::Action action, ListImagePipelinesRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagePipelinesRequest
 * class' copy constructor.
 */
ListImagePipelinesRequestPrivate::ListImagePipelinesRequestPrivate(
    const ListImagePipelinesRequestPrivate &other, ListImagePipelinesRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
