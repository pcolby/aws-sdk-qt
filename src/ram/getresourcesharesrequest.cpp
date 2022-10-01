// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcesharesrequest.h"
#include "getresourcesharesrequest_p.h"
#include "getresourcesharesresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::GetResourceSharesRequest
 * \brief The GetResourceSharesRequest class provides an interface for Ram GetResourceShares requests.
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
 * \sa RamClient::getResourceShares
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceSharesRequest::GetResourceSharesRequest(const GetResourceSharesRequest &other)
    : RamRequest(new GetResourceSharesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceSharesRequest object.
 */
GetResourceSharesRequest::GetResourceSharesRequest()
    : RamRequest(new GetResourceSharesRequestPrivate(RamRequest::GetResourceSharesAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceSharesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceSharesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceSharesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceSharesResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::GetResourceSharesRequestPrivate
 * \brief The GetResourceSharesRequestPrivate class provides private implementation for GetResourceSharesRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a GetResourceSharesRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
GetResourceSharesRequestPrivate::GetResourceSharesRequestPrivate(
    const RamRequest::Action action, GetResourceSharesRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceSharesRequest
 * class' copy constructor.
 */
GetResourceSharesRequestPrivate::GetResourceSharesRequestPrivate(
    const GetResourceSharesRequestPrivate &other, GetResourceSharesRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
