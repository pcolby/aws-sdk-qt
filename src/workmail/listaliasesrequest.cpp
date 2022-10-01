// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaliasesrequest.h"
#include "listaliasesrequest_p.h"
#include "listaliasesresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::ListAliasesRequest
 * \brief The ListAliasesRequest class provides an interface for WorkMail ListAliases requests.
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
 * \sa WorkMailClient::listAliases
 */

/*!
 * Constructs a copy of \a other.
 */
ListAliasesRequest::ListAliasesRequest(const ListAliasesRequest &other)
    : WorkMailRequest(new ListAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAliasesRequest object.
 */
ListAliasesRequest::ListAliasesRequest()
    : WorkMailRequest(new ListAliasesRequestPrivate(WorkMailRequest::ListAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkMail::ListAliasesRequestPrivate
 * \brief The ListAliasesRequestPrivate class provides private implementation for ListAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a ListAliasesRequestPrivate object for WorkMail \a action,
 * with public implementation \a q.
 */
ListAliasesRequestPrivate::ListAliasesRequestPrivate(
    const WorkMailRequest::Action action, ListAliasesRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAliasesRequest
 * class' copy constructor.
 */
ListAliasesRequestPrivate::ListAliasesRequestPrivate(
    const ListAliasesRequestPrivate &other, ListAliasesRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
