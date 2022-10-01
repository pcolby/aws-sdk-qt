// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstreamingimagerequest.h"
#include "getstreamingimagerequest_p.h"
#include "getstreamingimageresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStreamingImageRequest
 * \brief The GetStreamingImageRequest class provides an interface for Nimble GetStreamingImage requests.
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
 * \sa NimbleClient::getStreamingImage
 */

/*!
 * Constructs a copy of \a other.
 */
GetStreamingImageRequest::GetStreamingImageRequest(const GetStreamingImageRequest &other)
    : NimbleRequest(new GetStreamingImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStreamingImageRequest object.
 */
GetStreamingImageRequest::GetStreamingImageRequest()
    : NimbleRequest(new GetStreamingImageRequestPrivate(NimbleRequest::GetStreamingImageAction, this))
{

}

/*!
 * \reimp
 */
bool GetStreamingImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStreamingImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStreamingImageRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingImageResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetStreamingImageRequestPrivate
 * \brief The GetStreamingImageRequestPrivate class provides private implementation for GetStreamingImageRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStreamingImageRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetStreamingImageRequestPrivate::GetStreamingImageRequestPrivate(
    const NimbleRequest::Action action, GetStreamingImageRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingImageRequest
 * class' copy constructor.
 */
GetStreamingImageRequestPrivate::GetStreamingImageRequestPrivate(
    const GetStreamingImageRequestPrivate &other, GetStreamingImageRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
