// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamingimagerequest.h"
#include "createstreamingimagerequest_p.h"
#include "createstreamingimageresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStreamingImageRequest
 * \brief The CreateStreamingImageRequest class provides an interface for Nimble CreateStreamingImage requests.
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
 * \sa NimbleClient::createStreamingImage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamingImageRequest::CreateStreamingImageRequest(const CreateStreamingImageRequest &other)
    : NimbleRequest(new CreateStreamingImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamingImageRequest object.
 */
CreateStreamingImageRequest::CreateStreamingImageRequest()
    : NimbleRequest(new CreateStreamingImageRequestPrivate(NimbleRequest::CreateStreamingImageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamingImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamingImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamingImageRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingImageResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::CreateStreamingImageRequestPrivate
 * \brief The CreateStreamingImageRequestPrivate class provides private implementation for CreateStreamingImageRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStreamingImageRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
CreateStreamingImageRequestPrivate::CreateStreamingImageRequestPrivate(
    const NimbleRequest::Action action, CreateStreamingImageRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingImageRequest
 * class' copy constructor.
 */
CreateStreamingImageRequestPrivate::CreateStreamingImageRequestPrivate(
    const CreateStreamingImageRequestPrivate &other, CreateStreamingImageRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
