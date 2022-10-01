// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateloginprofilerequest.h"
#include "updateloginprofilerequest_p.h"
#include "updateloginprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateLoginProfileRequest
 * \brief The UpdateLoginProfileRequest class provides an interface for Iam UpdateLoginProfile requests.
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
 * \sa IamClient::updateLoginProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLoginProfileRequest::UpdateLoginProfileRequest(const UpdateLoginProfileRequest &other)
    : IamRequest(new UpdateLoginProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLoginProfileRequest object.
 */
UpdateLoginProfileRequest::UpdateLoginProfileRequest()
    : IamRequest(new UpdateLoginProfileRequestPrivate(IamRequest::UpdateLoginProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLoginProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLoginProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLoginProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLoginProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateLoginProfileRequestPrivate
 * \brief The UpdateLoginProfileRequestPrivate class provides private implementation for UpdateLoginProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateLoginProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateLoginProfileRequestPrivate::UpdateLoginProfileRequestPrivate(
    const IamRequest::Action action, UpdateLoginProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLoginProfileRequest
 * class' copy constructor.
 */
UpdateLoginProfileRequestPrivate::UpdateLoginProfileRequestPrivate(
    const UpdateLoginProfileRequestPrivate &other, UpdateLoginProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
