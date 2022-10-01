// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "provisiondevicerequest.h"
#include "provisiondevicerequest_p.h"
#include "provisiondeviceresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ProvisionDeviceRequest
 * \brief The ProvisionDeviceRequest class provides an interface for Panorama ProvisionDevice requests.
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
 * \sa PanoramaClient::provisionDevice
 */

/*!
 * Constructs a copy of \a other.
 */
ProvisionDeviceRequest::ProvisionDeviceRequest(const ProvisionDeviceRequest &other)
    : PanoramaRequest(new ProvisionDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ProvisionDeviceRequest object.
 */
ProvisionDeviceRequest::ProvisionDeviceRequest()
    : PanoramaRequest(new ProvisionDeviceRequestPrivate(PanoramaRequest::ProvisionDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool ProvisionDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ProvisionDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ProvisionDeviceRequest::response(QNetworkReply * const reply) const
{
    return new ProvisionDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ProvisionDeviceRequestPrivate
 * \brief The ProvisionDeviceRequestPrivate class provides private implementation for ProvisionDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ProvisionDeviceRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ProvisionDeviceRequestPrivate::ProvisionDeviceRequestPrivate(
    const PanoramaRequest::Action action, ProvisionDeviceRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ProvisionDeviceRequest
 * class' copy constructor.
 */
ProvisionDeviceRequestPrivate::ProvisionDeviceRequestPrivate(
    const ProvisionDeviceRequestPrivate &other, ProvisionDeviceRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
