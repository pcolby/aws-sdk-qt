// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putretentionpolicyrequest.h"
#include "putretentionpolicyrequest_p.h"
#include "putretentionpolicyresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::PutRetentionPolicyRequest
 * \brief The PutRetentionPolicyRequest class provides an interface for WorkMail PutRetentionPolicy requests.
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
 * \sa WorkMailClient::putRetentionPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutRetentionPolicyRequest::PutRetentionPolicyRequest(const PutRetentionPolicyRequest &other)
    : WorkMailRequest(new PutRetentionPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRetentionPolicyRequest object.
 */
PutRetentionPolicyRequest::PutRetentionPolicyRequest()
    : WorkMailRequest(new PutRetentionPolicyRequestPrivate(WorkMailRequest::PutRetentionPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutRetentionPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRetentionPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRetentionPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutRetentionPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::WorkMail::PutRetentionPolicyRequestPrivate
 * \brief The PutRetentionPolicyRequestPrivate class provides private implementation for PutRetentionPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a PutRetentionPolicyRequestPrivate object for WorkMail \a action,
 * with public implementation \a q.
 */
PutRetentionPolicyRequestPrivate::PutRetentionPolicyRequestPrivate(
    const WorkMailRequest::Action action, PutRetentionPolicyRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRetentionPolicyRequest
 * class' copy constructor.
 */
PutRetentionPolicyRequestPrivate::PutRetentionPolicyRequestPrivate(
    const PutRetentionPolicyRequestPrivate &other, PutRetentionPolicyRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
