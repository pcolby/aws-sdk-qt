// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for PrivateNetworks TagResource requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : PrivateNetworksRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : PrivateNetworksRequest(new TagResourceRequestPrivate(PrivateNetworksRequest::TagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a TagResourceRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const PrivateNetworksRequest::Action action, TagResourceRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
