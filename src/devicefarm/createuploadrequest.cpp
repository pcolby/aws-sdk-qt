/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createuploadrequest.h"
#include "createuploadrequest_p.h"
#include "createuploadresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateUploadRequest
 * \brief The CreateUploadRequest class provides an interface for DeviceFarm CreateUpload requests.
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
 * \sa DeviceFarmClient::createUpload
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUploadRequest::CreateUploadRequest(const CreateUploadRequest &other)
    : DeviceFarmRequest(new CreateUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUploadRequest object.
 */
CreateUploadRequest::CreateUploadRequest()
    : DeviceFarmRequest(new CreateUploadRequestPrivate(DeviceFarmRequest::CreateUploadAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUploadRequest::response(QNetworkReply * const reply) const
{
    return new CreateUploadResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateUploadRequestPrivate
 * \brief The CreateUploadRequestPrivate class provides private implementation for CreateUploadRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateUploadRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
CreateUploadRequestPrivate::CreateUploadRequestPrivate(
    const DeviceFarmRequest::Action action, CreateUploadRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUploadRequest
 * class' copy constructor.
 */
CreateUploadRequestPrivate::CreateUploadRequestPrivate(
    const CreateUploadRequestPrivate &other, CreateUploadRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
