// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedevicerequest.h"
#include "deletedevicerequest_p.h"
#include "deletedeviceresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DeleteDeviceRequest
 * \brief The DeleteDeviceRequest class provides an interface for Panorama DeleteDevice requests.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::deleteDevice
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeviceRequest::DeleteDeviceRequest(const DeleteDeviceRequest &other)
    : PanoramaRequest(new DeleteDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeviceRequest object.
 */
DeleteDeviceRequest::DeleteDeviceRequest()
    : PanoramaRequest(new DeleteDeviceRequestPrivate(PanoramaRequest::DeleteDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeviceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DeleteDeviceRequestPrivate
 * \brief The DeleteDeviceRequestPrivate class provides private implementation for DeleteDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DeleteDeviceRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DeleteDeviceRequestPrivate::DeleteDeviceRequestPrivate(
    const PanoramaRequest::Action action, DeleteDeviceRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeviceRequest
 * class' copy constructor.
 */
DeleteDeviceRequestPrivate::DeleteDeviceRequestPrivate(
    const DeleteDeviceRequestPrivate &other, DeleteDeviceRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
