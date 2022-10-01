// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestreamingimagerequest.h"
#include "updatestreamingimagerequest_p.h"
#include "updatestreamingimageresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateStreamingImageRequest
 * \brief The UpdateStreamingImageRequest class provides an interface for Nimble UpdateStreamingImage requests.
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
 * \sa NimbleClient::updateStreamingImage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStreamingImageRequest::UpdateStreamingImageRequest(const UpdateStreamingImageRequest &other)
    : NimbleRequest(new UpdateStreamingImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStreamingImageRequest object.
 */
UpdateStreamingImageRequest::UpdateStreamingImageRequest()
    : NimbleRequest(new UpdateStreamingImageRequestPrivate(NimbleRequest::UpdateStreamingImageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStreamingImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStreamingImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStreamingImageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStreamingImageResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::UpdateStreamingImageRequestPrivate
 * \brief The UpdateStreamingImageRequestPrivate class provides private implementation for UpdateStreamingImageRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateStreamingImageRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
UpdateStreamingImageRequestPrivate::UpdateStreamingImageRequestPrivate(
    const NimbleRequest::Action action, UpdateStreamingImageRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStreamingImageRequest
 * class' copy constructor.
 */
UpdateStreamingImageRequestPrivate::UpdateStreamingImageRequestPrivate(
    const UpdateStreamingImageRequestPrivate &other, UpdateStreamingImageRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
