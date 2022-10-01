// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicerequest.h"
#include "getdevicerequest_p.h"
#include "getdeviceresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::GetDeviceRequest
 * \brief The GetDeviceRequest class provides an interface for Braket GetDevice requests.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 * 
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
 *
 * \sa BraketClient::getDevice
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceRequest::GetDeviceRequest(const GetDeviceRequest &other)
    : BraketRequest(new GetDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceRequest object.
 */
GetDeviceRequest::GetDeviceRequest()
    : BraketRequest(new GetDeviceRequestPrivate(BraketRequest::GetDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::GetDeviceRequestPrivate
 * \brief The GetDeviceRequestPrivate class provides private implementation for GetDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a GetDeviceRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const BraketRequest::Action action, GetDeviceRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceRequest
 * class' copy constructor.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const GetDeviceRequestPrivate &other, GetDeviceRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
