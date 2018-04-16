/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disassociatedelegatefromresourcerequest.h"
#include "disassociatedelegatefromresourcerequest_p.h"
#include "disassociatedelegatefromresourceresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::DisassociateDelegateFromResourceRequest
 *
 * \brief The DisassociateDelegateFromResourceRequest class encapsulates WorkMail DisassociateDelegateFromResource requests.
 *
 * \ingroup WorkMail
 *
 *  Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 *  email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or their native
 *  iOS and Android email applications. You can integrate Amazon WorkMail with your existing corporate directory and control
 *  both the keys that encrypt your data and the location in which your data is
 * 
 *  stored>
 * 
 *  The Amazon WorkMail API is designed for the following
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
 *  All Amazon WorkMail API actions are Amazon-authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkMail site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkMail organization (or as set in the IAM policy). This includes, but
 *  is not limited to, the ability to create, update, and delete users, groups, and resources. This allows developers to
 *  perform the scenarios listed above, as well as give users the ability to grant access on a selective basis using the IAM
 *
 * \sa WorkMailClient::disassociateDelegateFromResource
 */

/*!
 * @brief  Constructs a new DisassociateDelegateFromResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateDelegateFromResourceRequest::DisassociateDelegateFromResourceRequest(const DisassociateDelegateFromResourceRequest &other)
    : WorkMailRequest(new DisassociateDelegateFromResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DisassociateDelegateFromResourceRequest object.
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
 * @brief  Construct an DisassociateDelegateFromResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateDelegateFromResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateDelegateFromResourceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDelegateFromResourceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DisassociateDelegateFromResourceRequestPrivate
 *
 * @brief  Private implementation for DisassociateDelegateFromResourceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateDelegateFromResourceRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DisassociateDelegateFromResourceRequest instance.
 */
DisassociateDelegateFromResourceRequestPrivate::DisassociateDelegateFromResourceRequestPrivate(
    const WorkMailRequest::Action action, DisassociateDelegateFromResourceRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateDelegateFromResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDelegateFromResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateDelegateFromResourceRequest instance.
 */
DisassociateDelegateFromResourceRequestPrivate::DisassociateDelegateFromResourceRequestPrivate(
    const DisassociateDelegateFromResourceRequestPrivate &other, DisassociateDelegateFromResourceRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
