// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "iotfleethubrequest_p.h"

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for IoTFleetHub TagResource requests.
 *
 * \inmodule QtAwsIoTFleetHub
 *
 *  With Fleet Hub for AWS IoT Device Management you can build stand-alone web applications for monitoring the health of
 *  your device
 * 
 *  fleets> <note>
 * 
 *  Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 *
 * \sa IoTFleetHubClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : IoTFleetHubRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : IoTFleetHubRequest(new TagResourceRequestPrivate(IoTFleetHubRequest::TagResourceAction, this))
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
 * \class QtAws::IoTFleetHub::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a TagResourceRequestPrivate object for IoTFleetHub \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const IoTFleetHubRequest::Action action, TagResourceRequest * const q)
    : IoTFleetHubRequestPrivate(action, q)
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
    : IoTFleetHubRequestPrivate(other, q)
{

}

} // namespace IoTFleetHub
} // namespace QtAws
