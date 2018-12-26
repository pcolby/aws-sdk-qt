/*
    Copyright 2013-2018 Paul Colby

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

#include "updateconnectivityinforequest.h"
#include "updateconnectivityinforequest_p.h"
#include "updateconnectivityinforesponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateConnectivityInfoRequest
 * \brief The UpdateConnectivityInfoRequest class provides an interface for Greengrass UpdateConnectivityInfo requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateConnectivityInfo
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectivityInfoRequest::UpdateConnectivityInfoRequest(const UpdateConnectivityInfoRequest &other)
    : GreengrassRequest(new UpdateConnectivityInfoRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectivityInfoRequest object.
 */
UpdateConnectivityInfoRequest::UpdateConnectivityInfoRequest()
    : GreengrassRequest(new UpdateConnectivityInfoRequestPrivate(GreengrassRequest::UpdateConnectivityInfoAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectivityInfoRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectivityInfoResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectivityInfoRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectivityInfoResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateConnectivityInfoRequestPrivate
 * \brief The UpdateConnectivityInfoRequestPrivate class provides private implementation for UpdateConnectivityInfoRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateConnectivityInfoRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateConnectivityInfoRequestPrivate::UpdateConnectivityInfoRequestPrivate(
    const GreengrassRequest::Action action, UpdateConnectivityInfoRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectivityInfoRequest
 * class' copy constructor.
 */
UpdateConnectivityInfoRequestPrivate::UpdateConnectivityInfoRequestPrivate(
    const UpdateConnectivityInfoRequestPrivate &other, UpdateConnectivityInfoRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
