// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmobiledeviceaccessoverriderequest.h"
#include "getmobiledeviceaccessoverriderequest_p.h"
#include "getmobiledeviceaccessoverrideresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::GetMobileDeviceAccessOverrideRequest
 * \brief The GetMobileDeviceAccessOverrideRequest class provides an interface for WorkMail GetMobileDeviceAccessOverride requests.
 *
 * \inmodule QtAwsWorkMail
 *
 *  Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 *  email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or other native
 *  iOS and Android email applications. You can integrate WorkMail with your existing corporate directory and control both
 *  the keys that encrypt your data and the location in which your data is
 * 
 *  stored>
 * 
 *  The WorkMail API is designed for the following
 * 
 *  scenarios> <ul> <li>
 * 
 *  Listing and describing
 * 
 *  organization> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  user> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  group> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  resource> </li> </ul>
 * 
 *  All WorkMail API operations are Amazon-authenticated and certificate-signed. They not only require the use of the AWS
 *  SDK, but also allow for the exclusive use of AWS Identity and Access Management users and roles to help facilitate
 *  access, trust, and permission policies. By creating a role and allowing an IAM user to access the WorkMail site, the IAM
 *  user gains full administrative visibility into the entire WorkMail organization (or as set in the IAM policy). This
 *  includes, but is not limited to, the ability to create, update, and delete users, groups, and resources. This allows
 *  developers to perform the scenarios listed above, as well as give users the ability to grant access on a selective basis
 *  using the IAM
 *
 * \sa WorkMailClient::getMobileDeviceAccessOverride
 */

/*!
 * Constructs a copy of \a other.
 */
GetMobileDeviceAccessOverrideRequest::GetMobileDeviceAccessOverrideRequest(const GetMobileDeviceAccessOverrideRequest &other)
    : WorkMailRequest(new GetMobileDeviceAccessOverrideRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMobileDeviceAccessOverrideRequest object.
 */
GetMobileDeviceAccessOverrideRequest::GetMobileDeviceAccessOverrideRequest()
    : WorkMailRequest(new GetMobileDeviceAccessOverrideRequestPrivate(WorkMailRequest::GetMobileDeviceAccessOverrideAction, this))
{

}

/*!
 * \reimp
 */
bool GetMobileDeviceAccessOverrideRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMobileDeviceAccessOverrideResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMobileDeviceAccessOverrideRequest::response(QNetworkReply * const reply) const
{
    return new GetMobileDeviceAccessOverrideResponse(*this, reply);
}

/*!
 * \class QtAws::WorkMail::GetMobileDeviceAccessOverrideRequestPrivate
 * \brief The GetMobileDeviceAccessOverrideRequestPrivate class provides private implementation for GetMobileDeviceAccessOverrideRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a GetMobileDeviceAccessOverrideRequestPrivate object for WorkMail \a action,
 * with public implementation \a q.
 */
GetMobileDeviceAccessOverrideRequestPrivate::GetMobileDeviceAccessOverrideRequestPrivate(
    const WorkMailRequest::Action action, GetMobileDeviceAccessOverrideRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMobileDeviceAccessOverrideRequest
 * class' copy constructor.
 */
GetMobileDeviceAccessOverrideRequestPrivate::GetMobileDeviceAccessOverrideRequestPrivate(
    const GetMobileDeviceAccessOverrideRequestPrivate &other, GetMobileDeviceAccessOverrideRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
