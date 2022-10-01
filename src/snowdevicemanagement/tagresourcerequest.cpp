// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for SnowDeviceManagement TagResource requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : SnowDeviceManagementRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : SnowDeviceManagementRequest(new TagResourceRequestPrivate(SnowDeviceManagementRequest::TagResourceAction, this))
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
 * \class QtAws::SnowDeviceManagement::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a TagResourceRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const SnowDeviceManagementRequest::Action action, TagResourceRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
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
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
