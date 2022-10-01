// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtestgridsessionartifactsrequest.h"
#include "listtestgridsessionartifactsrequest_p.h"
#include "listtestgridsessionartifactsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestGridSessionArtifactsRequest
 * \brief The ListTestGridSessionArtifactsRequest class provides an interface for DeviceFarm ListTestGridSessionArtifacts requests.
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
 * \sa DeviceFarmClient::listTestGridSessionArtifacts
 */

/*!
 * Constructs a copy of \a other.
 */
ListTestGridSessionArtifactsRequest::ListTestGridSessionArtifactsRequest(const ListTestGridSessionArtifactsRequest &other)
    : DeviceFarmRequest(new ListTestGridSessionArtifactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTestGridSessionArtifactsRequest object.
 */
ListTestGridSessionArtifactsRequest::ListTestGridSessionArtifactsRequest()
    : DeviceFarmRequest(new ListTestGridSessionArtifactsRequestPrivate(DeviceFarmRequest::ListTestGridSessionArtifactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTestGridSessionArtifactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTestGridSessionArtifactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTestGridSessionArtifactsRequest::response(QNetworkReply * const reply) const
{
    return new ListTestGridSessionArtifactsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListTestGridSessionArtifactsRequestPrivate
 * \brief The ListTestGridSessionArtifactsRequestPrivate class provides private implementation for ListTestGridSessionArtifactsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestGridSessionArtifactsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListTestGridSessionArtifactsRequestPrivate::ListTestGridSessionArtifactsRequestPrivate(
    const DeviceFarmRequest::Action action, ListTestGridSessionArtifactsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTestGridSessionArtifactsRequest
 * class' copy constructor.
 */
ListTestGridSessionArtifactsRequestPrivate::ListTestGridSessionArtifactsRequestPrivate(
    const ListTestGridSessionArtifactsRequestPrivate &other, ListTestGridSessionArtifactsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
