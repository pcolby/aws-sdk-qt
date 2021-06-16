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

#include "getconnectivityinforequest.h"
#include "getconnectivityinforequest_p.h"
#include "getconnectivityinforesponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetConnectivityInfoRequest
 * \brief The GetConnectivityInfoRequest class provides an interface for Greengrass GetConnectivityInfo requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getConnectivityInfo
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectivityInfoRequest::GetConnectivityInfoRequest(const GetConnectivityInfoRequest &other)
    : GreengrassRequest(new GetConnectivityInfoRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectivityInfoRequest object.
 */
GetConnectivityInfoRequest::GetConnectivityInfoRequest()
    : GreengrassRequest(new GetConnectivityInfoRequestPrivate(GreengrassRequest::GetConnectivityInfoAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectivityInfoRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectivityInfoResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectivityInfoRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectivityInfoResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetConnectivityInfoRequestPrivate
 * \brief The GetConnectivityInfoRequestPrivate class provides private implementation for GetConnectivityInfoRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetConnectivityInfoRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetConnectivityInfoRequestPrivate::GetConnectivityInfoRequestPrivate(
    const GreengrassRequest::Action action, GetConnectivityInfoRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectivityInfoRequest
 * class' copy constructor.
 */
GetConnectivityInfoRequestPrivate::GetConnectivityInfoRequestPrivate(
    const GetConnectivityInfoRequestPrivate &other, GetConnectivityInfoRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
