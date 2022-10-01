// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listartifactsrequest.h"
#include "listartifactsrequest_p.h"
#include "listartifactsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListArtifactsRequest
 * \brief The ListArtifactsRequest class provides an interface for DeviceFarm ListArtifacts requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::listArtifacts
 */

/*!
 * Constructs a copy of \a other.
 */
ListArtifactsRequest::ListArtifactsRequest(const ListArtifactsRequest &other)
    : DeviceFarmRequest(new ListArtifactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListArtifactsRequest object.
 */
ListArtifactsRequest::ListArtifactsRequest()
    : DeviceFarmRequest(new ListArtifactsRequestPrivate(DeviceFarmRequest::ListArtifactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListArtifactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListArtifactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListArtifactsRequest::response(QNetworkReply * const reply) const
{
    return new ListArtifactsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListArtifactsRequestPrivate
 * \brief The ListArtifactsRequestPrivate class provides private implementation for ListArtifactsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListArtifactsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListArtifactsRequestPrivate::ListArtifactsRequestPrivate(
    const DeviceFarmRequest::Action action, ListArtifactsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListArtifactsRequest
 * class' copy constructor.
 */
ListArtifactsRequestPrivate::ListArtifactsRequestPrivate(
    const ListArtifactsRequestPrivate &other, ListArtifactsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
