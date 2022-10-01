// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatedelegatefromresourcerequest.h"
#include "disassociatedelegatefromresourcerequest_p.h"
#include "disassociatedelegatefromresourceresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::DisassociateDelegateFromResourceRequest
 * \brief The DisassociateDelegateFromResourceRequest class provides an interface for WorkMail DisassociateDelegateFromResource requests.
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
 * \sa WorkMailClient::disassociateDelegateFromResource
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateDelegateFromResourceRequest::DisassociateDelegateFromResourceRequest(const DisassociateDelegateFromResourceRequest &other)
    : WorkMailRequest(new DisassociateDelegateFromResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateDelegateFromResourceRequest object.
 */
DisassociateDelegateFromResourceRequest::DisassociateDelegateFromResourceRequest()
    : WorkMailRequest(new DisassociateDelegateFromResourceRequestPrivate(WorkMailRequest::DisassociateDelegateFromResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateDelegateFromResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateDelegateFromResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateDelegateFromResourceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDelegateFromResourceResponse(*this, reply);
}

/*!
 * \class QtAws::WorkMail::DisassociateDelegateFromResourceRequestPrivate
 * \brief The DisassociateDelegateFromResourceRequestPrivate class provides private implementation for DisassociateDelegateFromResourceRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a DisassociateDelegateFromResourceRequestPrivate object for WorkMail \a action,
 * with public implementation \a q.
 */
DisassociateDelegateFromResourceRequestPrivate::DisassociateDelegateFromResourceRequestPrivate(
    const WorkMailRequest::Action action, DisassociateDelegateFromResourceRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDelegateFromResourceRequest
 * class' copy constructor.
 */
DisassociateDelegateFromResourceRequestPrivate::DisassociateDelegateFromResourceRequestPrivate(
    const DisassociateDelegateFromResourceRequestPrivate &other, DisassociateDelegateFromResourceRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
