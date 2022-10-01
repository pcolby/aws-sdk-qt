// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccesskeyrequest.h"
#include "updateaccesskeyrequest_p.h"
#include "updateaccesskeyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateAccessKeyRequest
 * \brief The UpdateAccessKeyRequest class provides an interface for Iam UpdateAccessKey requests.
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
 * \sa IamClient::updateAccessKey
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccessKeyRequest::UpdateAccessKeyRequest(const UpdateAccessKeyRequest &other)
    : IamRequest(new UpdateAccessKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccessKeyRequest object.
 */
UpdateAccessKeyRequest::UpdateAccessKeyRequest()
    : IamRequest(new UpdateAccessKeyRequestPrivate(IamRequest::UpdateAccessKeyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccessKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccessKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccessKeyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccessKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateAccessKeyRequestPrivate
 * \brief The UpdateAccessKeyRequestPrivate class provides private implementation for UpdateAccessKeyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateAccessKeyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateAccessKeyRequestPrivate::UpdateAccessKeyRequestPrivate(
    const IamRequest::Action action, UpdateAccessKeyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccessKeyRequest
 * class' copy constructor.
 */
UpdateAccessKeyRequestPrivate::UpdateAccessKeyRequestPrivate(
    const UpdateAccessKeyRequestPrivate &other, UpdateAccessKeyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
