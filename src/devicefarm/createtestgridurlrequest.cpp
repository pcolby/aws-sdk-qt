// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtestgridurlrequest.h"
#include "createtestgridurlrequest_p.h"
#include "createtestgridurlresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateTestGridUrlRequest
 * \brief The CreateTestGridUrlRequest class provides an interface for DeviceFarm CreateTestGridUrl requests.
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
 * \sa DeviceFarmClient::createTestGridUrl
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTestGridUrlRequest::CreateTestGridUrlRequest(const CreateTestGridUrlRequest &other)
    : DeviceFarmRequest(new CreateTestGridUrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTestGridUrlRequest object.
 */
CreateTestGridUrlRequest::CreateTestGridUrlRequest()
    : DeviceFarmRequest(new CreateTestGridUrlRequestPrivate(DeviceFarmRequest::CreateTestGridUrlAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTestGridUrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTestGridUrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTestGridUrlRequest::response(QNetworkReply * const reply) const
{
    return new CreateTestGridUrlResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateTestGridUrlRequestPrivate
 * \brief The CreateTestGridUrlRequestPrivate class provides private implementation for CreateTestGridUrlRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateTestGridUrlRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
CreateTestGridUrlRequestPrivate::CreateTestGridUrlRequestPrivate(
    const DeviceFarmRequest::Action action, CreateTestGridUrlRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTestGridUrlRequest
 * class' copy constructor.
 */
CreateTestGridUrlRequestPrivate::CreateTestGridUrlRequestPrivate(
    const CreateTestGridUrlRequestPrivate &other, CreateTestGridUrlRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
