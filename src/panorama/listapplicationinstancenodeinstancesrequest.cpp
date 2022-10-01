// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationinstancenodeinstancesrequest.h"
#include "listapplicationinstancenodeinstancesrequest_p.h"
#include "listapplicationinstancenodeinstancesresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListApplicationInstanceNodeInstancesRequest
 * \brief The ListApplicationInstanceNodeInstancesRequest class provides an interface for Panorama ListApplicationInstanceNodeInstances requests.
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
 * \sa PanoramaClient::listApplicationInstanceNodeInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationInstanceNodeInstancesRequest::ListApplicationInstanceNodeInstancesRequest(const ListApplicationInstanceNodeInstancesRequest &other)
    : PanoramaRequest(new ListApplicationInstanceNodeInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationInstanceNodeInstancesRequest object.
 */
ListApplicationInstanceNodeInstancesRequest::ListApplicationInstanceNodeInstancesRequest()
    : PanoramaRequest(new ListApplicationInstanceNodeInstancesRequestPrivate(PanoramaRequest::ListApplicationInstanceNodeInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationInstanceNodeInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationInstanceNodeInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationInstanceNodeInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationInstanceNodeInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListApplicationInstanceNodeInstancesRequestPrivate
 * \brief The ListApplicationInstanceNodeInstancesRequestPrivate class provides private implementation for ListApplicationInstanceNodeInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListApplicationInstanceNodeInstancesRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListApplicationInstanceNodeInstancesRequestPrivate::ListApplicationInstanceNodeInstancesRequestPrivate(
    const PanoramaRequest::Action action, ListApplicationInstanceNodeInstancesRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationInstanceNodeInstancesRequest
 * class' copy constructor.
 */
ListApplicationInstanceNodeInstancesRequestPrivate::ListApplicationInstanceNodeInstancesRequestPrivate(
    const ListApplicationInstanceNodeInstancesRequestPrivate &other, ListApplicationInstanceNodeInstancesRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
