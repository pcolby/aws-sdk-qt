// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
