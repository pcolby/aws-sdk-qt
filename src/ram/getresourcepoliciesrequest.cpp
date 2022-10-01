// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcepoliciesrequest.h"
#include "getresourcepoliciesrequest_p.h"
#include "getresourcepoliciesresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::GetResourcePoliciesRequest
 * \brief The GetResourcePoliciesRequest class provides an interface for Ram GetResourcePolicies requests.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::getResourcePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcePoliciesRequest::GetResourcePoliciesRequest(const GetResourcePoliciesRequest &other)
    : RamRequest(new GetResourcePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcePoliciesRequest object.
 */
GetResourcePoliciesRequest::GetResourcePoliciesRequest()
    : RamRequest(new GetResourcePoliciesRequestPrivate(RamRequest::GetResourcePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::GetResourcePoliciesRequestPrivate
 * \brief The GetResourcePoliciesRequestPrivate class provides private implementation for GetResourcePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a GetResourcePoliciesRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
GetResourcePoliciesRequestPrivate::GetResourcePoliciesRequestPrivate(
    const RamRequest::Action action, GetResourcePoliciesRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcePoliciesRequest
 * class' copy constructor.
 */
GetResourcePoliciesRequestPrivate::GetResourcePoliciesRequestPrivate(
    const GetResourcePoliciesRequestPrivate &other, GetResourcePoliciesRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
