// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesrequest.h"
#include "listdevicesrequest_p.h"
#include "listdevicesresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListDevicesRequest
 * \brief The ListDevicesRequest class provides an interface for Panorama ListDevices requests.
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
 * \sa PanoramaClient::listDevices
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicesRequest::ListDevicesRequest(const ListDevicesRequest &other)
    : PanoramaRequest(new ListDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicesRequest object.
 */
ListDevicesRequest::ListDevicesRequest()
    : PanoramaRequest(new ListDevicesRequestPrivate(PanoramaRequest::ListDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListDevicesRequestPrivate
 * \brief The ListDevicesRequestPrivate class provides private implementation for ListDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListDevicesRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const PanoramaRequest::Action action, ListDevicesRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicesRequest
 * class' copy constructor.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const ListDevicesRequestPrivate &other, ListDevicesRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
