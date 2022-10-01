// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putuserpermissionsboundaryrequest.h"
#include "putuserpermissionsboundaryrequest_p.h"
#include "putuserpermissionsboundaryresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::PutUserPermissionsBoundaryRequest
 * \brief The PutUserPermissionsBoundaryRequest class provides an interface for Iam PutUserPermissionsBoundary requests.
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
 * \sa IamClient::putUserPermissionsBoundary
 */

/*!
 * Constructs a copy of \a other.
 */
PutUserPermissionsBoundaryRequest::PutUserPermissionsBoundaryRequest(const PutUserPermissionsBoundaryRequest &other)
    : IamRequest(new PutUserPermissionsBoundaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutUserPermissionsBoundaryRequest object.
 */
PutUserPermissionsBoundaryRequest::PutUserPermissionsBoundaryRequest()
    : IamRequest(new PutUserPermissionsBoundaryRequestPrivate(IamRequest::PutUserPermissionsBoundaryAction, this))
{

}

/*!
 * \reimp
 */
bool PutUserPermissionsBoundaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutUserPermissionsBoundaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutUserPermissionsBoundaryRequest::response(QNetworkReply * const reply) const
{
    return new PutUserPermissionsBoundaryResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::PutUserPermissionsBoundaryRequestPrivate
 * \brief The PutUserPermissionsBoundaryRequestPrivate class provides private implementation for PutUserPermissionsBoundaryRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a PutUserPermissionsBoundaryRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
PutUserPermissionsBoundaryRequestPrivate::PutUserPermissionsBoundaryRequestPrivate(
    const IamRequest::Action action, PutUserPermissionsBoundaryRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutUserPermissionsBoundaryRequest
 * class' copy constructor.
 */
PutUserPermissionsBoundaryRequestPrivate::PutUserPermissionsBoundaryRequestPrivate(
    const PutUserPermissionsBoundaryRequestPrivate &other, PutUserPermissionsBoundaryRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
