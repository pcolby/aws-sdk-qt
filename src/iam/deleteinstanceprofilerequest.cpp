// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinstanceprofilerequest.h"
#include "deleteinstanceprofilerequest_p.h"
#include "deleteinstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteInstanceProfileRequest
 * \brief The DeleteInstanceProfileRequest class provides an interface for Iam DeleteInstanceProfile requests.
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
 * \sa IamClient::deleteInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInstanceProfileRequest::DeleteInstanceProfileRequest(const DeleteInstanceProfileRequest &other)
    : IamRequest(new DeleteInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInstanceProfileRequest object.
 */
DeleteInstanceProfileRequest::DeleteInstanceProfileRequest()
    : IamRequest(new DeleteInstanceProfileRequestPrivate(IamRequest::DeleteInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeleteInstanceProfileRequestPrivate
 * \brief The DeleteInstanceProfileRequestPrivate class provides private implementation for DeleteInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteInstanceProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteInstanceProfileRequestPrivate::DeleteInstanceProfileRequestPrivate(
    const IamRequest::Action action, DeleteInstanceProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInstanceProfileRequest
 * class' copy constructor.
 */
DeleteInstanceProfileRequestPrivate::DeleteInstanceProfileRequestPrivate(
    const DeleteInstanceProfileRequestPrivate &other, DeleteInstanceProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
