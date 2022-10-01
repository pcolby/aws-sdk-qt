// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcomponentsrequest.h"
#include "listcomponentsrequest_p.h"
#include "listcomponentsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListComponentsRequest
 * \brief The ListComponentsRequest class provides an interface for ImageBuilder ListComponents requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ListComponentsRequest::ListComponentsRequest(const ListComponentsRequest &other)
    : ImageBuilderRequest(new ListComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComponentsRequest object.
 */
ListComponentsRequest::ListComponentsRequest()
    : ImageBuilderRequest(new ListComponentsRequestPrivate(ImageBuilderRequest::ListComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ListComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListComponentsRequestPrivate
 * \brief The ListComponentsRequestPrivate class provides private implementation for ListComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListComponentsRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListComponentsRequestPrivate::ListComponentsRequestPrivate(
    const ImageBuilderRequest::Action action, ListComponentsRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComponentsRequest
 * class' copy constructor.
 */
ListComponentsRequestPrivate::ListComponentsRequestPrivate(
    const ListComponentsRequestPrivate &other, ListComponentsRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
