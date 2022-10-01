// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserviceroleforaccountrequest.h"
#include "getserviceroleforaccountrequest_p.h"
#include "getserviceroleforaccountresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetServiceRoleForAccountRequest
 * \brief The GetServiceRoleForAccountRequest class provides an interface for Greengrass GetServiceRoleForAccount requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getServiceRoleForAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceRoleForAccountRequest::GetServiceRoleForAccountRequest(const GetServiceRoleForAccountRequest &other)
    : GreengrassRequest(new GetServiceRoleForAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceRoleForAccountRequest object.
 */
GetServiceRoleForAccountRequest::GetServiceRoleForAccountRequest()
    : GreengrassRequest(new GetServiceRoleForAccountRequestPrivate(GreengrassRequest::GetServiceRoleForAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceRoleForAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceRoleForAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceRoleForAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceRoleForAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetServiceRoleForAccountRequestPrivate
 * \brief The GetServiceRoleForAccountRequestPrivate class provides private implementation for GetServiceRoleForAccountRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetServiceRoleForAccountRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetServiceRoleForAccountRequestPrivate::GetServiceRoleForAccountRequestPrivate(
    const GreengrassRequest::Action action, GetServiceRoleForAccountRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceRoleForAccountRequest
 * class' copy constructor.
 */
GetServiceRoleForAccountRequestPrivate::GetServiceRoleForAccountRequestPrivate(
    const GetServiceRoleForAccountRequestPrivate &other, GetServiceRoleForAccountRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
