// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
