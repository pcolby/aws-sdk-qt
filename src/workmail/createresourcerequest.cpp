// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourcerequest.h"
#include "createresourcerequest_p.h"
#include "createresourceresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::CreateResourceRequest
 * \brief The CreateResourceRequest class provides an interface for WorkMail CreateResource requests.
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
 * \sa WorkMailClient::createResource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceRequest::CreateResourceRequest(const CreateResourceRequest &other)
    : WorkMailRequest(new CreateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceRequest object.
 */
CreateResourceRequest::CreateResourceRequest()
    : WorkMailRequest(new CreateResourceRequestPrivate(WorkMailRequest::CreateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::WorkMail::CreateResourceRequestPrivate
 * \brief The CreateResourceRequestPrivate class provides private implementation for CreateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a CreateResourceRequestPrivate object for WorkMail \a action,
 * with public implementation \a q.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const WorkMailRequest::Action action, CreateResourceRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceRequest
 * class' copy constructor.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const CreateResourceRequestPrivate &other, CreateResourceRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
