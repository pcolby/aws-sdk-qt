// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteloginprofilerequest.h"
#include "deleteloginprofilerequest_p.h"
#include "deleteloginprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteLoginProfileRequest
 * \brief The DeleteLoginProfileRequest class provides an interface for Iam DeleteLoginProfile requests.
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
 * \sa IamClient::deleteLoginProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLoginProfileRequest::DeleteLoginProfileRequest(const DeleteLoginProfileRequest &other)
    : IamRequest(new DeleteLoginProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLoginProfileRequest object.
 */
DeleteLoginProfileRequest::DeleteLoginProfileRequest()
    : IamRequest(new DeleteLoginProfileRequestPrivate(IamRequest::DeleteLoginProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLoginProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLoginProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLoginProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoginProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeleteLoginProfileRequestPrivate
 * \brief The DeleteLoginProfileRequestPrivate class provides private implementation for DeleteLoginProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteLoginProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteLoginProfileRequestPrivate::DeleteLoginProfileRequestPrivate(
    const IamRequest::Action action, DeleteLoginProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoginProfileRequest
 * class' copy constructor.
 */
DeleteLoginProfileRequestPrivate::DeleteLoginProfileRequestPrivate(
    const DeleteLoginProfileRequestPrivate &other, DeleteLoginProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
