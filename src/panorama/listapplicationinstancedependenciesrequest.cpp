// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationinstancedependenciesrequest.h"
#include "listapplicationinstancedependenciesrequest_p.h"
#include "listapplicationinstancedependenciesresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListApplicationInstanceDependenciesRequest
 * \brief The ListApplicationInstanceDependenciesRequest class provides an interface for Panorama ListApplicationInstanceDependencies requests.
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
 * \sa PanoramaClient::listApplicationInstanceDependencies
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationInstanceDependenciesRequest::ListApplicationInstanceDependenciesRequest(const ListApplicationInstanceDependenciesRequest &other)
    : PanoramaRequest(new ListApplicationInstanceDependenciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationInstanceDependenciesRequest object.
 */
ListApplicationInstanceDependenciesRequest::ListApplicationInstanceDependenciesRequest()
    : PanoramaRequest(new ListApplicationInstanceDependenciesRequestPrivate(PanoramaRequest::ListApplicationInstanceDependenciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationInstanceDependenciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationInstanceDependenciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationInstanceDependenciesRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationInstanceDependenciesResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListApplicationInstanceDependenciesRequestPrivate
 * \brief The ListApplicationInstanceDependenciesRequestPrivate class provides private implementation for ListApplicationInstanceDependenciesRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListApplicationInstanceDependenciesRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListApplicationInstanceDependenciesRequestPrivate::ListApplicationInstanceDependenciesRequestPrivate(
    const PanoramaRequest::Action action, ListApplicationInstanceDependenciesRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationInstanceDependenciesRequest
 * class' copy constructor.
 */
ListApplicationInstanceDependenciesRequestPrivate::ListApplicationInstanceDependenciesRequestPrivate(
    const ListApplicationInstanceDependenciesRequestPrivate &other, ListApplicationInstanceDependenciesRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
