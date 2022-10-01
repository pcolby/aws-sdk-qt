// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestreamingimagerequest.h"
#include "deletestreamingimagerequest_p.h"
#include "deletestreamingimageresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStreamingImageRequest
 * \brief The DeleteStreamingImageRequest class provides an interface for Nimble DeleteStreamingImage requests.
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
 * \sa NimbleClient::deleteStreamingImage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStreamingImageRequest::DeleteStreamingImageRequest(const DeleteStreamingImageRequest &other)
    : NimbleRequest(new DeleteStreamingImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStreamingImageRequest object.
 */
DeleteStreamingImageRequest::DeleteStreamingImageRequest()
    : NimbleRequest(new DeleteStreamingImageRequestPrivate(NimbleRequest::DeleteStreamingImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStreamingImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStreamingImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStreamingImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamingImageResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::DeleteStreamingImageRequestPrivate
 * \brief The DeleteStreamingImageRequestPrivate class provides private implementation for DeleteStreamingImageRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStreamingImageRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
DeleteStreamingImageRequestPrivate::DeleteStreamingImageRequestPrivate(
    const NimbleRequest::Action action, DeleteStreamingImageRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamingImageRequest
 * class' copy constructor.
 */
DeleteStreamingImageRequestPrivate::DeleteStreamingImageRequestPrivate(
    const DeleteStreamingImageRequestPrivate &other, DeleteStreamingImageRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
