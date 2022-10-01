// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for SnowDeviceManagement UntagResource requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : SnowDeviceManagementRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : SnowDeviceManagementRequest(new UntagResourceRequestPrivate(SnowDeviceManagementRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::SnowDeviceManagement::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const SnowDeviceManagementRequest::Action action, UntagResourceRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
