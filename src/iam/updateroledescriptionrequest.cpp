// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateroledescriptionrequest.h"
#include "updateroledescriptionrequest_p.h"
#include "updateroledescriptionresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateRoleDescriptionRequest
 * \brief The UpdateRoleDescriptionRequest class provides an interface for Iam UpdateRoleDescription requests.
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
 * \sa IamClient::updateRoleDescription
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRoleDescriptionRequest::UpdateRoleDescriptionRequest(const UpdateRoleDescriptionRequest &other)
    : IamRequest(new UpdateRoleDescriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRoleDescriptionRequest object.
 */
UpdateRoleDescriptionRequest::UpdateRoleDescriptionRequest()
    : IamRequest(new UpdateRoleDescriptionRequestPrivate(IamRequest::UpdateRoleDescriptionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRoleDescriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRoleDescriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRoleDescriptionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoleDescriptionResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateRoleDescriptionRequestPrivate
 * \brief The UpdateRoleDescriptionRequestPrivate class provides private implementation for UpdateRoleDescriptionRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateRoleDescriptionRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateRoleDescriptionRequestPrivate::UpdateRoleDescriptionRequestPrivate(
    const IamRequest::Action action, UpdateRoleDescriptionRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoleDescriptionRequest
 * class' copy constructor.
 */
UpdateRoleDescriptionRequestPrivate::UpdateRoleDescriptionRequestPrivate(
    const UpdateRoleDescriptionRequestPrivate &other, UpdateRoleDescriptionRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
