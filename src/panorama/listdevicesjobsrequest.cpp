// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesjobsrequest.h"
#include "listdevicesjobsrequest_p.h"
#include "listdevicesjobsresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListDevicesJobsRequest
 * \brief The ListDevicesJobsRequest class provides an interface for Panorama ListDevicesJobs requests.
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
 * \sa PanoramaClient::listDevicesJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicesJobsRequest::ListDevicesJobsRequest(const ListDevicesJobsRequest &other)
    : PanoramaRequest(new ListDevicesJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicesJobsRequest object.
 */
ListDevicesJobsRequest::ListDevicesJobsRequest()
    : PanoramaRequest(new ListDevicesJobsRequestPrivate(PanoramaRequest::ListDevicesJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicesJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicesJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicesJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicesJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListDevicesJobsRequestPrivate
 * \brief The ListDevicesJobsRequestPrivate class provides private implementation for ListDevicesJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListDevicesJobsRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListDevicesJobsRequestPrivate::ListDevicesJobsRequestPrivate(
    const PanoramaRequest::Action action, ListDevicesJobsRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicesJobsRequest
 * class' copy constructor.
 */
ListDevicesJobsRequestPrivate::ListDevicesJobsRequestPrivate(
    const ListDevicesJobsRequestPrivate &other, ListDevicesJobsRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
