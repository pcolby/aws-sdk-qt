// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccesskeysrequest.h"
#include "listaccesskeysrequest_p.h"
#include "listaccesskeysresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListAccessKeysRequest
 * \brief The ListAccessKeysRequest class provides an interface for Iam ListAccessKeys requests.
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
 * \sa IamClient::listAccessKeys
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccessKeysRequest::ListAccessKeysRequest(const ListAccessKeysRequest &other)
    : IamRequest(new ListAccessKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccessKeysRequest object.
 */
ListAccessKeysRequest::ListAccessKeysRequest()
    : IamRequest(new ListAccessKeysRequestPrivate(IamRequest::ListAccessKeysAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccessKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccessKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccessKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListAccessKeysResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListAccessKeysRequestPrivate
 * \brief The ListAccessKeysRequestPrivate class provides private implementation for ListAccessKeysRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListAccessKeysRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListAccessKeysRequestPrivate::ListAccessKeysRequestPrivate(
    const IamRequest::Action action, ListAccessKeysRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccessKeysRequest
 * class' copy constructor.
 */
ListAccessKeysRequestPrivate::ListAccessKeysRequestPrivate(
    const ListAccessKeysRequestPrivate &other, ListAccessKeysRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
