// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccountaliasrequest.h"
#include "deleteaccountaliasrequest_p.h"
#include "deleteaccountaliasresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteAccountAliasRequest
 * \brief The DeleteAccountAliasRequest class provides an interface for Iam DeleteAccountAlias requests.
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
 * \sa IamClient::deleteAccountAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccountAliasRequest::DeleteAccountAliasRequest(const DeleteAccountAliasRequest &other)
    : IamRequest(new DeleteAccountAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccountAliasRequest object.
 */
DeleteAccountAliasRequest::DeleteAccountAliasRequest()
    : IamRequest(new DeleteAccountAliasRequestPrivate(IamRequest::DeleteAccountAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccountAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccountAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccountAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccountAliasResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeleteAccountAliasRequestPrivate
 * \brief The DeleteAccountAliasRequestPrivate class provides private implementation for DeleteAccountAliasRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteAccountAliasRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteAccountAliasRequestPrivate::DeleteAccountAliasRequestPrivate(
    const IamRequest::Action action, DeleteAccountAliasRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccountAliasRequest
 * class' copy constructor.
 */
DeleteAccountAliasRequestPrivate::DeleteAccountAliasRequestPrivate(
    const DeleteAccountAliasRequestPrivate &other, DeleteAccountAliasRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
