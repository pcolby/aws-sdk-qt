// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstanceprofilesrequest.h"
#include "listinstanceprofilesrequest_p.h"
#include "listinstanceprofilesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListInstanceProfilesRequest
 * \brief The ListInstanceProfilesRequest class provides an interface for DeviceFarm ListInstanceProfiles requests.
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
 * \sa DeviceFarmClient::listInstanceProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstanceProfilesRequest::ListInstanceProfilesRequest(const ListInstanceProfilesRequest &other)
    : DeviceFarmRequest(new ListInstanceProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstanceProfilesRequest object.
 */
ListInstanceProfilesRequest::ListInstanceProfilesRequest()
    : DeviceFarmRequest(new ListInstanceProfilesRequestPrivate(DeviceFarmRequest::ListInstanceProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstanceProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListInstanceProfilesRequestPrivate
 * \brief The ListInstanceProfilesRequestPrivate class provides private implementation for ListInstanceProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListInstanceProfilesRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListInstanceProfilesRequestPrivate::ListInstanceProfilesRequestPrivate(
    const DeviceFarmRequest::Action action, ListInstanceProfilesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceProfilesRequest
 * class' copy constructor.
 */
ListInstanceProfilesRequestPrivate::ListInstanceProfilesRequestPrivate(
    const ListInstanceProfilesRequestPrivate &other, ListInstanceProfilesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
