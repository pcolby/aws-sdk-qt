// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuploadrequest.h"
#include "deleteuploadrequest_p.h"
#include "deleteuploadresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteUploadRequest
 * \brief The DeleteUploadRequest class provides an interface for DeviceFarm DeleteUpload requests.
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
 * \sa DeviceFarmClient::deleteUpload
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUploadRequest::DeleteUploadRequest(const DeleteUploadRequest &other)
    : DeviceFarmRequest(new DeleteUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUploadRequest object.
 */
DeleteUploadRequest::DeleteUploadRequest()
    : DeviceFarmRequest(new DeleteUploadRequestPrivate(DeviceFarmRequest::DeleteUploadAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUploadRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUploadResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteUploadRequestPrivate
 * \brief The DeleteUploadRequestPrivate class provides private implementation for DeleteUploadRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteUploadRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteUploadRequestPrivate::DeleteUploadRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteUploadRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUploadRequest
 * class' copy constructor.
 */
DeleteUploadRequestPrivate::DeleteUploadRequestPrivate(
    const DeleteUploadRequestPrivate &other, DeleteUploadRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
