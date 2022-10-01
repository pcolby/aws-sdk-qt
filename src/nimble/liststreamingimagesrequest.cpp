// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamingimagesrequest.h"
#include "liststreamingimagesrequest_p.h"
#include "liststreamingimagesresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStreamingImagesRequest
 * \brief The ListStreamingImagesRequest class provides an interface for Nimble ListStreamingImages requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::listStreamingImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamingImagesRequest::ListStreamingImagesRequest(const ListStreamingImagesRequest &other)
    : NimbleRequest(new ListStreamingImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamingImagesRequest object.
 */
ListStreamingImagesRequest::ListStreamingImagesRequest()
    : NimbleRequest(new ListStreamingImagesRequestPrivate(NimbleRequest::ListStreamingImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamingImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamingImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamingImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamingImagesResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::ListStreamingImagesRequestPrivate
 * \brief The ListStreamingImagesRequestPrivate class provides private implementation for ListStreamingImagesRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStreamingImagesRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
ListStreamingImagesRequestPrivate::ListStreamingImagesRequestPrivate(
    const NimbleRequest::Action action, ListStreamingImagesRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamingImagesRequest
 * class' copy constructor.
 */
ListStreamingImagesRequestPrivate::ListStreamingImagesRequestPrivate(
    const ListStreamingImagesRequestPrivate &other, ListStreamingImagesRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
