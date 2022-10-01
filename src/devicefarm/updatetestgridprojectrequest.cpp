// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetestgridprojectrequest.h"
#include "updatetestgridprojectrequest_p.h"
#include "updatetestgridprojectresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateTestGridProjectRequest
 * \brief The UpdateTestGridProjectRequest class provides an interface for DeviceFarm UpdateTestGridProject requests.
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
 * \sa DeviceFarmClient::updateTestGridProject
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTestGridProjectRequest::UpdateTestGridProjectRequest(const UpdateTestGridProjectRequest &other)
    : DeviceFarmRequest(new UpdateTestGridProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTestGridProjectRequest object.
 */
UpdateTestGridProjectRequest::UpdateTestGridProjectRequest()
    : DeviceFarmRequest(new UpdateTestGridProjectRequestPrivate(DeviceFarmRequest::UpdateTestGridProjectAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTestGridProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTestGridProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTestGridProjectRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTestGridProjectResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateTestGridProjectRequestPrivate
 * \brief The UpdateTestGridProjectRequestPrivate class provides private implementation for UpdateTestGridProjectRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateTestGridProjectRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
UpdateTestGridProjectRequestPrivate::UpdateTestGridProjectRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateTestGridProjectRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTestGridProjectRequest
 * class' copy constructor.
 */
UpdateTestGridProjectRequestPrivate::UpdateTestGridProjectRequestPrivate(
    const UpdateTestGridProjectRequestPrivate &other, UpdateTestGridProjectRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
