// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuploadrequest.h"
#include "getuploadrequest_p.h"
#include "getuploadresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetUploadRequest
 * \brief The GetUploadRequest class provides an interface for DeviceFarm GetUpload requests.
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
 * \sa DeviceFarmClient::getUpload
 */

/*!
 * Constructs a copy of \a other.
 */
GetUploadRequest::GetUploadRequest(const GetUploadRequest &other)
    : DeviceFarmRequest(new GetUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUploadRequest object.
 */
GetUploadRequest::GetUploadRequest()
    : DeviceFarmRequest(new GetUploadRequestPrivate(DeviceFarmRequest::GetUploadAction, this))
{

}

/*!
 * \reimp
 */
bool GetUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUploadRequest::response(QNetworkReply * const reply) const
{
    return new GetUploadResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetUploadRequestPrivate
 * \brief The GetUploadRequestPrivate class provides private implementation for GetUploadRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetUploadRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetUploadRequestPrivate::GetUploadRequestPrivate(
    const DeviceFarmRequest::Action action, GetUploadRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUploadRequest
 * class' copy constructor.
 */
GetUploadRequestPrivate::GetUploadRequestPrivate(
    const GetUploadRequestPrivate &other, GetUploadRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
