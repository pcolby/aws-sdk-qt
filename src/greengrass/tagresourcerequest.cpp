// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for Greengrass TagResource requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : GreengrassRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : GreengrassRequest(new TagResourceRequestPrivate(GreengrassRequest::TagResourceAction, this))
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
 * \class QtAws::Greengrass::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a TagResourceRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const GreengrassRequest::Action action, TagResourceRequest * const q)
    : GreengrassRequestPrivate(action, q)
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
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
