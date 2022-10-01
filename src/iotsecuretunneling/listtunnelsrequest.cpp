// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtunnelsrequest.h"
#include "listtunnelsrequest_p.h"
#include "listtunnelsresponse.h"
#include "iotsecuretunnelingrequest_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::ListTunnelsRequest
 * \brief The ListTunnelsRequest class provides an interface for IoTSecureTunneling ListTunnels requests.
 *
 * \inmodule QtAwsIoTSecureTunneling
 *
 *  <fullname>IoT Secure Tunneling</fullname>
 * 
 *  IoT Secure Tunneling creates remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">IoT Secure
 *
 * \sa IoTSecureTunnelingClient::listTunnels
 */

/*!
 * Constructs a copy of \a other.
 */
ListTunnelsRequest::ListTunnelsRequest(const ListTunnelsRequest &other)
    : IoTSecureTunnelingRequest(new ListTunnelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTunnelsRequest object.
 */
ListTunnelsRequest::ListTunnelsRequest()
    : IoTSecureTunnelingRequest(new ListTunnelsRequestPrivate(IoTSecureTunnelingRequest::ListTunnelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTunnelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTunnelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTunnelsRequest::response(QNetworkReply * const reply) const
{
    return new ListTunnelsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSecureTunneling::ListTunnelsRequestPrivate
 * \brief The ListTunnelsRequestPrivate class provides private implementation for ListTunnelsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a ListTunnelsRequestPrivate object for IoTSecureTunneling \a action,
 * with public implementation \a q.
 */
ListTunnelsRequestPrivate::ListTunnelsRequestPrivate(
    const IoTSecureTunnelingRequest::Action action, ListTunnelsRequest * const q)
    : IoTSecureTunnelingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTunnelsRequest
 * class' copy constructor.
 */
ListTunnelsRequestPrivate::ListTunnelsRequestPrivate(
    const ListTunnelsRequestPrivate &other, ListTunnelsRequest * const q)
    : IoTSecureTunnelingRequestPrivate(other, q)
{

}

} // namespace IoTSecureTunneling
} // namespace QtAws
