// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtestgridprojectrequest.h"
#include "createtestgridprojectrequest_p.h"
#include "createtestgridprojectresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateTestGridProjectRequest
 * \brief The CreateTestGridProjectRequest class provides an interface for DeviceFarm CreateTestGridProject requests.
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
 * \sa DeviceFarmClient::createTestGridProject
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTestGridProjectRequest::CreateTestGridProjectRequest(const CreateTestGridProjectRequest &other)
    : DeviceFarmRequest(new CreateTestGridProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTestGridProjectRequest object.
 */
CreateTestGridProjectRequest::CreateTestGridProjectRequest()
    : DeviceFarmRequest(new CreateTestGridProjectRequestPrivate(DeviceFarmRequest::CreateTestGridProjectAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTestGridProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTestGridProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTestGridProjectRequest::response(QNetworkReply * const reply) const
{
    return new CreateTestGridProjectResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateTestGridProjectRequestPrivate
 * \brief The CreateTestGridProjectRequestPrivate class provides private implementation for CreateTestGridProjectRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateTestGridProjectRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
CreateTestGridProjectRequestPrivate::CreateTestGridProjectRequestPrivate(
    const DeviceFarmRequest::Action action, CreateTestGridProjectRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTestGridProjectRequest
 * class' copy constructor.
 */
CreateTestGridProjectRequestPrivate::CreateTestGridProjectRequestPrivate(
    const CreateTestGridProjectRequestPrivate &other, CreateTestGridProjectRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
