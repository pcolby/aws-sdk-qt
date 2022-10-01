// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsshpublickeysrequest.h"
#include "listsshpublickeysrequest_p.h"
#include "listsshpublickeysresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListSSHPublicKeysRequest
 * \brief The ListSSHPublicKeysRequest class provides an interface for Iam ListSSHPublicKeys requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::listSSHPublicKeys
 */

/*!
 * Constructs a copy of \a other.
 */
ListSSHPublicKeysRequest::ListSSHPublicKeysRequest(const ListSSHPublicKeysRequest &other)
    : IamRequest(new ListSSHPublicKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSSHPublicKeysRequest object.
 */
ListSSHPublicKeysRequest::ListSSHPublicKeysRequest()
    : IamRequest(new ListSSHPublicKeysRequestPrivate(IamRequest::ListSSHPublicKeysAction, this))
{

}

/*!
 * \reimp
 */
bool ListSSHPublicKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSSHPublicKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSSHPublicKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListSSHPublicKeysResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListSSHPublicKeysRequestPrivate
 * \brief The ListSSHPublicKeysRequestPrivate class provides private implementation for ListSSHPublicKeysRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListSSHPublicKeysRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListSSHPublicKeysRequestPrivate::ListSSHPublicKeysRequestPrivate(
    const IamRequest::Action action, ListSSHPublicKeysRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSSHPublicKeysRequest
 * class' copy constructor.
 */
ListSSHPublicKeysRequestPrivate::ListSSHPublicKeysRequestPrivate(
    const ListSSHPublicKeysRequestPrivate &other, ListSSHPublicKeysRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
