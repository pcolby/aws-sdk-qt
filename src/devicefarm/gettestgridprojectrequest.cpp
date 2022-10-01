// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettestgridprojectrequest.h"
#include "gettestgridprojectrequest_p.h"
#include "gettestgridprojectresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetTestGridProjectRequest
 * \brief The GetTestGridProjectRequest class provides an interface for DeviceFarm GetTestGridProject requests.
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
 * \sa DeviceFarmClient::getTestGridProject
 */

/*!
 * Constructs a copy of \a other.
 */
GetTestGridProjectRequest::GetTestGridProjectRequest(const GetTestGridProjectRequest &other)
    : DeviceFarmRequest(new GetTestGridProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTestGridProjectRequest object.
 */
GetTestGridProjectRequest::GetTestGridProjectRequest()
    : DeviceFarmRequest(new GetTestGridProjectRequestPrivate(DeviceFarmRequest::GetTestGridProjectAction, this))
{

}

/*!
 * \reimp
 */
bool GetTestGridProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTestGridProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTestGridProjectRequest::response(QNetworkReply * const reply) const
{
    return new GetTestGridProjectResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetTestGridProjectRequestPrivate
 * \brief The GetTestGridProjectRequestPrivate class provides private implementation for GetTestGridProjectRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetTestGridProjectRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetTestGridProjectRequestPrivate::GetTestGridProjectRequestPrivate(
    const DeviceFarmRequest::Action action, GetTestGridProjectRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTestGridProjectRequest
 * class' copy constructor.
 */
GetTestGridProjectRequestPrivate::GetTestGridProjectRequestPrivate(
    const GetTestGridProjectRequestPrivate &other, GetTestGridProjectRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
