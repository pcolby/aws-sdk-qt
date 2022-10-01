// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationinstancesrequest.h"
#include "listapplicationinstancesrequest_p.h"
#include "listapplicationinstancesresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListApplicationInstancesRequest
 * \brief The ListApplicationInstancesRequest class provides an interface for Panorama ListApplicationInstances requests.
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
 * \sa PanoramaClient::listApplicationInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationInstancesRequest::ListApplicationInstancesRequest(const ListApplicationInstancesRequest &other)
    : PanoramaRequest(new ListApplicationInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationInstancesRequest object.
 */
ListApplicationInstancesRequest::ListApplicationInstancesRequest()
    : PanoramaRequest(new ListApplicationInstancesRequestPrivate(PanoramaRequest::ListApplicationInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListApplicationInstancesRequestPrivate
 * \brief The ListApplicationInstancesRequestPrivate class provides private implementation for ListApplicationInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListApplicationInstancesRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListApplicationInstancesRequestPrivate::ListApplicationInstancesRequestPrivate(
    const PanoramaRequest::Action action, ListApplicationInstancesRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationInstancesRequest
 * class' copy constructor.
 */
ListApplicationInstancesRequestPrivate::ListApplicationInstancesRequestPrivate(
    const ListApplicationInstancesRequestPrivate &other, ListApplicationInstancesRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
